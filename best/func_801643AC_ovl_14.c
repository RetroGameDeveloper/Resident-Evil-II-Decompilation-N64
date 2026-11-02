extern u8 D_800C7650_ovl_01[];
extern u8 D_801686FC_ovl_14[];
s32 func_8008A974_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_8008386C_ovl_01(s16 arg0, s32 arg1, void *arg2, void *arg3);
s32 func_80032D44_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80036764_ovl_01_510(void *arg0, s32 arg1);

typedef struct {
    s32 unk_00;
    u8 unk_04[2];
    u8 unk_06;
    u8 unk_07[0x25];
    s32 unk_2C;
    u8 unk_30[0x36];
    s16 unk_66;
    u8 unk_68[8];
    s32 unk_70;
    u8 unk_74[0x136];
    u16 unk_1AA;
    u8 unk_1AC[0x36];
    u16 unk_1E2;
    u8 unk_1E4[4];
    s32 unk_1E8;
    u8 unk_1EC[8];
    u16 unk_1F4;
    u8 unk_1F6[0x7A];
    s16 unk_270;
    u8 unk_272[0x4A];
    s32 unk_2BC;
    u8 unk_2C0[8];
    u16 unk_2C8;
    u8 unk_2CA[4];
    u8 unk_2CE;
} S_func_801643AC_ovl_14;

void func_801643AC_ovl_14(S_func_801643AC_ovl_14 *p, s32 arg1, s32 arg2)
{
    s32 v;
    void *obj;
    s16 tmp[4];

    switch (p->unk_06) {
    case 0:
        p->unk_1E8 = 0x03000000;
        p->unk_2BC = 0;
        p->unk_270 = 0;
        func_8008A974_ovl_01(p, arg1, arg2, 0x1000);
        p->unk_2C8 |= 2;
        p->unk_2CE = 0;
        p->unk_1E2 = 0;
        p->unk_06++;
        p->unk_1AA |= 0x4000;
        if (p->unk_270 != 0) {
            p->unk_2CE = 5;
            p->unk_1E8 = 0x12000000;
            p->unk_1F4 = 0xFFFF;
            p->unk_1AA &= 0xBFFF;
            p->unk_06++;
        }
        break;
    case 1:
        p->unk_1E2 += 0x48;
        p->unk_2C += (s16)p->unk_1E2;
        if (func_8008A974_ovl_01(p, arg1, arg2, 0x1000) != 0) {
            p->unk_1E8 = 0x13000000;
            p->unk_06++;
        }
        break;
    case 2:
        *(u64 *)tmp = *(u64 *)D_801686FC_ovl_14;
        p->unk_2C += 0xA8C;
        func_8008386C_ovl_01(p->unk_66, p->unk_70, tmp, tmp);
        v = func_80032D44_ovl_01(0, 0, tmp[0], tmp[2]);
        obj = *(void **)((u8 *)D_800C7650_ovl_01 + 0x18000 + 0x288);
        *(s16 *)((u8 *)obj + 0x66) = (v + 0x100) & 0xC00;
        func_80036764_ovl_01_510(p, 0x18000);
        p->unk_06++;
        break;
    case 3:
        p->unk_1E2 += 0x48;
        p->unk_2C += (s16)p->unk_1E2;
        p->unk_1E8 = 0x13000000;
        func_8008A974_ovl_01(p, arg1, arg2, 0x1000);
        if (p->unk_2C + p->unk_1E2 + 0x48 < 0) {
            break;
        }
        p->unk_1E8 = 0x13000000;
        p->unk_06++;
        break;
    case 4:
    case 5:
        p->unk_2CE = 4;
        v = func_8008A974_ovl_01(p, arg1, arg2, 0x1000);
        p->unk_2C = 0;
        if (v != 0) {
            *(s32 *)((u8 *)p + 4) = 0x01000000;
        }
        break;
    }
    p->unk_1F4++;
}
