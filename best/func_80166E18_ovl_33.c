typedef struct S_actor66E18 {
    u8 unk_00[0x234];
    s32 *unk_234;
    u8 unk_238[0x2BF - 0x238];
    u8 unk_2BF;
    u16 unk_2C0;
} S_actor66E18;

void func_80166E18_ovl_33(S_actor66E18 *arg0) {
    u16 t;

    switch (arg0->unk_2BF) {
    case 0:
        return;
    case 1:
        *(s32 *)((u8 *)arg0->unk_234 + 0x5E0) =
            (*(s32 *)((u8 *)arg0->unk_234 + 0x5E0) & -0x4001) | 0x40;
        arg0->unk_2BF = 2;
        arg0->unk_2C0 = 0x96;
    case 2:
        t = arg0->unk_2C0 - 1;
        arg0->unk_2C0 = t;
        if (t != 0xFFFF) {
            return;
        }
        arg0->unk_2BF = 3;
        return;
    case 3:
        *(s32 *)((u8 *)arg0->unk_234 + 0x5E0) =
            (*(s32 *)((u8 *)arg0->unk_234 + 0x5E0) | 0x4000) & -0x41;
        arg0->unk_2BF = 0;
        return;
    }
}
