typedef struct S_s1_801639B8 {
    u8 unk_00[0x11EE];
    u16 unk_11EE;
    u8 unk_11F0[2];
    u16 unk_11F2;
    u8 unk_11F4[2];
    u16 unk_11F6;
} S_s1_801639B8;

typedef struct S_s2_801639B8 {
    u8 unk_00[0x1A3C];
    s32 unk_1A3C;
    u8 unk_1A40[0x1AA8 - 0x1A40];
    s32 unk_1AA8;
    s32 unk_1AB0;
    u8 unk_1AB4[0x1C72 - 0x1AB4];
    s16 unk_1C72;
    u8 unk_1C74[0x18000 - 0x1C74];
} S_s2_801639B8;

typedef struct S_s3_801639B8 {
    u8 unk_00[4];
    s32 unk_04;
} S_s3_801639B8;

typedef struct S_arg_801639B8 {
    u8 unk_00[4];
    union {
        s32 w;
        struct { u8 h0; u8 h1; u8 state; u8 h3; } b;
    } u4;
    u8 unk_08[0x1E9 - 0x08];
    u8 unk_1E9;
    u8 unk_1EA[0x1F4 - 0x1EA];
    u16 unk_1F4;
    u8 unk_1F6[0x234 - 0x1F6];
    void *unk_234;
    u8 unk_238[0x25E - 0x238];
    s16 unk_25E;
    u8 unk_260[0x28C - 0x260];
    u32 unk_28C;
    u8 unk_290[0x2B8 - 0x290];
    u16 unk_2B8;
    u16 unk_2BA;
    u8 unk_2BC[0x2C9 - 0x2BC];
    u8 unk_2C9;
} S_arg_801639B8;

extern S_s2_801639B8 D_800C7650_ovl_01[];
extern S_s3_801639B8 D_800E10D0_ovl_01;
extern u8 D_800E8FC8_ovl_01[];

s32 func_80032DEC_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80036BB4(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_800377B0_ovl_01(s32 arg0, s32 arg1, void *arg2, s16 *arg3);
void func_80052C00_ovl_01(s32 arg0, s32 arg1);
void func_80052C9C_ovl_01(s32 arg0, s32 arg1, s32 arg2);
void func_80052D40_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80077D48_ovl_01(s32 arg0, void *arg1);
s32 func_80161D90_ovl_22(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 func_80162094_ovl_22(s32 arg0);
s32 func_80162144_ovl_22(void *arg0);
s32 func_801621FC_ovl_22(void *arg0, s16 *arg1, s32 arg2);
s32 func_80036764_ovl_01_510_24(void *arg0, s32 arg1, s32 arg2, s32 arg3);

void func_801639B8_ovl_22(S_arg_801639B8 *arg0) {
    S_s1_801639B8 *s1;
    S_s2_801639B8 *s2;
    S_s3_801639B8 *s3;
    s16 vec[8];
    s16 r;
    s32 ret;

    s3 = &D_800E10D0_ovl_01;
    s1 = (S_s1_801639B8 *)arg0->unk_234;
    s2 = &D_800C7650_ovl_01[1];

    switch (arg0->u4.b.state) {
    case 0:
        arg0->u4.b.state = 1;
        arg0->unk_1F4 = 0;
        /* fall through */
    case 1:
        r = func_80162144_ovl_22(arg0);
        if ((u8)(arg0->unk_1E9 - 1) < 0x33) {
            if (r < 0) {
                r = -r;
            }
            if (r < 0x353) {
                if (arg0->unk_28C < 0x1069) {
                    goto block20;
                }
                arg0->u4.b.state = 3;
                arg0->unk_2C9 = 0x1E;
                arg0->u4.w = 0x01010000;
                return;
            }
            arg0->u4.b.state = 3;
            arg0->unk_2C9 = 0x1E;
            arg0->u4.w = 0x01010000;
            return;
        }
block20:
        arg0->u4.b.state += func_80036764_ovl_01_510_24(arg0, 2, 0xF, 0);
        func_80032DEC_ovl_01(arg0, s2->unk_1AA8, s2->unk_1AB0, 4);
        vec[0] = arg0->unk_2B8;
        vec[2] = arg0->unk_2BA;
        ret = func_80161D90_ovl_22(arg0, 0xC, 0x38, 0x3B, 0x352);
        if (ret == 0) {
            return;
        }
        func_80077D48_ovl_01(2, arg0);
        func_80052C00_ovl_01(3, 0);
        func_80052C9C_ovl_01(8, 0xFF, 0);
        func_80052D40_ovl_01(4, 0xFF, 0x28, 8);
        func_801621FC_ovl_22(arg0, vec, 0xC);
        vec[4] = s1->unk_11EE;
        vec[5] = s1->unk_11F2;
        vec[6] = s1->unk_11F6;
        if (vec[5] < arg0->unk_25E - 0xBB8) {
            vec[5] = arg0->unk_25E - 0xBB8;
        }
        func_800377B0_ovl_01(0x2400, 0, D_800E8FC8_ovl_01, &vec[4]);
        func_80162094_ovl_22(0x32);
        if (s2->unk_1C72 < 0) {
            s2->unk_1C72 = -1;
            s3->unk_04 = 0x05020000;
            s2->unk_1A3C |= 0x04000100;
            arg0->u4.w = 0x01100000;
        }
        return;
    case 2:
        arg0->u4.w = 0x01010000;
        return;
    case 3:
        func_80032DEC_ovl_01(arg0, s2->unk_1AA8, s2->unk_1AB0, 4);
        arg0->unk_1E9 = 0;
        func_80036BB4(arg0, 2, 0xF, 0);
        arg0->unk_1F4 = arg0->unk_1F4 - 1;
        if (arg0->unk_1F4 == 0) {
            arg0->u4.w = 0x01010000;
        }
        return;
    }
}
