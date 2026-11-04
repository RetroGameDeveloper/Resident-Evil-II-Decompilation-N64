typedef struct S_64E48 {
    s32 unk_00;
    u8 unk_04[2];
    u8 unk_06;
    u8 unk_07[0x25];
    s32 unk_2C;
    u8 unk_30[0x36];
    u16 unk_66;
    u8 unk_68[0x144];
    s32 unk_1AC;
    u8 unk_1B0[0x30];
    s16 unk_1E0;
    s16 unk_1E2;
    u8 unk_1E4[4];
    s32 unk_1E8;
    u8 unk_1EC[6];
    s16 unk_1F2;
    u8 unk_1F4[0x6A];
    s16 unk_25E;
    u8 unk_260[0x55];
    u8 unk_2B5;
} S_64E48;

extern u8 D_800C7650_ovl_01[];

void func_80035AAC_ovl_01_108(S_64E48 *);
void func_80077D48_ovl_01(s32, S_64E48 *);
void func_80166214_ovl_13(S_64E48 *, s32);
void func_80166080_ovl_13(S_64E48 *);
s32 func_80033634_ovl_01(void);
void func_80166158_ovl_13(S_64E48 *, s32);
s32 func_80089D34_ovl_01(S_64E48 *,  s32);
void func_80032B8C_ovl_01(S_64E48 *, s32);
void func_80165BD8_ovl_13(S_64E48 *, s32, s32);

void func_80164E48_ovl_13(S_64E48 *arg0, s32 arg1, s32 arg2) {
    s32 s1;
    u16 v;
    u8 *base;

    switch (arg0->unk_06) {
    case 0:
        func_80035AAC_ovl_01_108(arg0);
        func_80077D48_ovl_01(3, arg0);
        func_80166214_ovl_13(arg0, 0xA);
        arg0->unk_1F2 = -1;
        func_80166080_ovl_13(arg0);
        v = (func_80033634_ovl_01() & 3) + 5;
        func_80166158_ovl_13(arg0, v);
        base = D_800C7650_ovl_01 + 0x18000;
        arg0->unk_1E0 = 0x258;
        arg0->unk_1E8 = 0x09000700;
        arg0->unk_06 = 1;
        arg0->unk_66 = *(u16 *)(base + 0x1AE6);
        if (func_80089D34_ovl_01(arg0,  arg1)) {
            arg0->unk_06 = 2;
        }
        /* fall through */
    case 1:
        func_80032B8C_ovl_01(arg0, 0);
        arg0->unk_2C += arg0->unk_1E2;
        arg0->unk_1E2 += 0x14;
        s1 = arg0->unk_25E - 0xFA;
        if (s1 < arg0->unk_2C) {
            func_80077D48_ovl_01(5, arg0);
            arg0->unk_2B5 = 0x10;
            arg0->unk_2C = s1;
            arg0->unk_1E2 = 0;
            arg0->unk_06 = 3;
        }
        if (arg0->unk_1AC & 1) {
            func_80077D48_ovl_01(3, arg0);
            func_80166080_ovl_13(arg0);
            arg0->unk_1E0 = 0x14;
            v = arg0->unk_66;
            arg0->unk_1E2 = 0;
            arg0->unk_06 = 4;
            arg0->unk_66 = v + 0x800;
        }
        break;
    case 2:
        func_80032B8C_ovl_01(arg0, 0);
        v = (s32)(arg0->unk_1E0 << 16) >> 17;
        arg0->unk_2B5--;
        arg0->unk_1E0 = v;
        if (arg0->unk_2B5 == 0xFF) {
            func_80165BD8_ovl_13(arg0, 7, 3);
        }
        break;
    case 3:
        arg0->unk_2C += arg0->unk_1E2;
        arg0->unk_1E2 += 0x14;
        func_80032B8C_ovl_01(arg0, 0);
        s1 = arg0->unk_25E - 0xFA;
        if (s1 < arg0->unk_2C) {
            func_80166214_ovl_13(arg0, 0x15E);
            func_80077D48_ovl_01(5, arg0);
            arg0->unk_2C = s1;
            arg0->unk_1E2 = 0;
            func_80165BD8_ovl_13(arg0, 7, 3);
        }
        break;
    case 4:
        break;
    }
}
