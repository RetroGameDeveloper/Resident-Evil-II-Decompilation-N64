typedef union U4_8016604C {
    s32 w;
    u8 b[4];
} U4_8016604C;

typedef struct S_func_8016604C_ovl_31_arg0 {
    u8 unk_00[4];
    U4_8016604C unk_04;
    u8 unk_08[0x1E8 - 0x08];
    s32 unk_1E8;
    u8 unk_1EC[0x1F4 - 0x1EC];
    u16 unk_1F4;
    u8 unk_1F6[0x206 - 0x1F6];
    s8 unk_206;
    u8 unk_207[0x2B6 - 0x207];
    u16 unk_2B6;
    u8 unk_2B8[0x2C0 - 0x2B8];
    s16 unk_2C0;
    s8 unk_2C2;
} S_func_8016604C_ovl_31_arg0;

extern u8 D_800C7650_ovl_01[];

void func_800334F8_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80032B8C_ovl_01(void *arg0, s32 arg1);
s32 func_80032EA4_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80032DEC_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80077D48_ovl_01(s32 arg0, void *arg1);
void func_80052C9C_ovl_01(s32 arg0, s32 arg1, s32 arg2);

void func_8016604C_ovl_31(S_func_8016604C_ovl_31_arg0 *s0, s32 arg1, s32 arg2) {
    s32 one;
    u8 *p;

    one = 1;
    switch (s0->unk_04.b[2]) {
    case 0:
        s0->unk_1E8 = 0x15000F00;
        s0->unk_04.b[2] = one;
        s0->unk_2B6 &= 0xFFFD;
        /* fallthrough */
    case 1:
        func_800334F8_ovl_01(s0, arg1, arg2, 0);
        if (func_80089D34_ovl_01(s0, arg1, arg2, 0x100) != 0) {
            s0->unk_1E8 = 0x16000F00;
            s0->unk_04.b[2] = 2;
            s0->unk_1F4 = 0x1E;
        }
        func_80032B8C_ovl_01(s0, 0);
        break;
    case 2:
        func_800334F8_ovl_01(s0, arg1, arg2, 0);
        func_80089D34_ovl_01(s0, arg1, arg2, 0x100);
        func_80032B8C_ovl_01(s0, 0);
        s0->unk_1F4 = s0->unk_1F4 - 1;
        if ((s16)s0->unk_1F4 == -1) {
            s0->unk_04.b[2] = 3;
            p = D_800C7650_ovl_01 + 0x18000;
            if (func_80032EA4_ovl_01(s0, *(s32 *)(p + 0x1AA8), *(s32 *)(p + 0x1AB0), 0x400) != 0) {
                s0->unk_04.w = 0x010B0000;
                s0->unk_2C2 = 4;
            }
        }
        break;
    case 3:
        s0->unk_1E8 = 0x06080700;
        func_800334F8_ovl_01(s0, arg1, arg2, 0);
        s0->unk_2C0 = 0;
        p = D_800C7650_ovl_01 + 0x18000;
        func_80032DEC_ovl_01(s0, *(s32 *)(p + 0x1AA8), *(s32 *)(p + 0x1AB0), 0x10);
        func_80089D34_ovl_01(s0, arg1, arg2, 0x200);
        s0->unk_04.w = 0x01050100;
        s0->unk_206 = 0;
        s0->unk_2B6 |= 0x80;
        func_80077D48_ovl_01(2, s0);
        func_80052C9C_ovl_01(8, 0x50, 0);
        break;
    }
}
