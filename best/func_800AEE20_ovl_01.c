extern u8 D_801362B0_ovl_01;
extern u8 D_801443E8;

typedef struct S_node {
    struct S_node *next;
    u8 pad_04[4];
    u32 key;
    s32 value;
} S_node;

extern S_node *D_801583D0;

typedef struct S_entry {
    s32 unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    u8 pad_14[0x10];
    s32 unk_24;
    s32 unk_28;
    u8 pad_2C[0x34];
    s32 unk_60;
} S_entry;

s32 func_800A5AB4_ovl_01(s32 arg0);
s32 func_800AE140_ovl_01(S_entry *arg0, s32 arg1);
s32 func_800AEB9C_ovl_01(S_entry *arg0);

s32 func_800AEE20_ovl_01(u32 arg0)
{
    s32 ret = -1;

    if (D_801362B0_ovl_01 != 0) {
        if (arg0 != (u32)-1) {
            S_node *node = D_801583D0;
            S_node *found = NULL;

            if (node != NULL) {
                do {
                    u32 key = node->key;

                    if (key == arg0) {
                        found = node;
                        break;
                    }
                    found = NULL;
                    if (arg0 < key) {
                        break;
                    }
                    node = node->next;
                } while (node != NULL);
            }
            if (found != NULL) {
                arg0 = found->value;
            } else {
                arg0 = (u32)-1;
            }
        } else {
            arg0 = (u32)-1;
        }
        if (arg0 != (u32)-1) {
            u8 idx = arg0 & 0xFF;

            do {
                S_entry *e = (S_entry *)((u8 *)&D_801443E8 + idx * 0x1A0);
                s32 next = e->unk_10;

                if (e->unk_60 == (s32)arg0) {
                    if (e->unk_00 != 0) {
                        func_800AE140_ovl_01(e, ret);
                        e->unk_28 = 0;
                        e->unk_24 &= ~3;
                        func_800AEB9C_ovl_01(e);
                    }
                    func_800A5AB4_ovl_01(idx);
                    ret = 0;
                }
                arg0 = next;
                idx = arg0 & 0xFF;
            } while (arg0 != (u32)-1);
        }
    }
    return ret;
}
