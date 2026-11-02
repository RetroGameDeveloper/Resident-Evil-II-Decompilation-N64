typedef struct S_s2_80163DE0 {
    u8 unk_00[0x28];
    s32 unk_28;
    u8 unk_2C[4];
    s32 unk_30;
    u8 unk_34[0x26F - 0x34];
    u8 unk_26F;
} S_s2_80163DE0;

typedef struct S_func_80163DE0_ovl_35_arg0 {
    u8 unk_00[5];
    s8 unk_05;
    union {
        s16 unk_06;
        struct { u8 unk_06h; u8 unk_07; } b;
    } u06;
    u8 unk_08[0x24];
    s32 unk_2C;
    u8 unk_30[0x36];
    s16 unk_66;
    u8 unk_68[0x144];
    s32 unk_1AC;
    u8 unk_1B0[0x32];
    s16 unk_1E2;
    u8 unk_1E4[0x10];
    s16 unk_1F4;
    u8 unk_1F6[0x11];
    s8 unk_207;
    u8 unk_208[0x56];
    s16 unk_25E;
    u8 unk_260[0xF];
    u8 unk_26F;
    u8 unk_270[0x44];
    u8 unk_2B4;
    u8 unk_2B5[0xF];
    u8 unk_2C4;
    u8 unk_2C5[1];
    u8 unk_2C6;
    u8 unk_2C7;
    u8 unk_2C8[0x10];
    s16 unk_2D8;
} S_func_80163DE0_ovl_35_arg0;

extern u8 D_800C7650_ovl_01[];
extern S_s2_80163DE0 D_800E10D0_ovl_01;

s32 func_80032C08_ovl_01(void *arg0, s32 arg1, s32 arg2);
s32 func_80032EA4_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80033634_ovl_01(void);
s32 func_80165F34_ovl_35(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s8 func_80165FF4_ovl_35(void *arg0);

void func_80163DE0_ovl_35(S_func_80163DE0_ovl_35_arg0 *arg0) {
    S_s2_80163DE0 *s2;
    u8 *base;
    s8 ret;

    if (arg0->unk_2B4 != 0) {
        base = (u8 *)D_800C7650_ovl_01;
        base += 0x18000;
        s2 = *(S_s2_80163DE0 **)(base + 0x1D3C);
    } else {
        s2 = &D_800E10D0_ovl_01;
    }

    if (arg0->unk_207 == 0) {
        if (arg0->unk_2C7 != 0) {
            arg0->unk_66 = (s16)((u16)arg0->unk_66 + func_80032EA4_ovl_01(arg0, s2->unk_28, s2->unk_30, 4));
            ret = func_80165FF4_ovl_35(arg0);
            arg0->unk_207 = ret;
            if (ret != 0) {
                s16 t = arg0->unk_66;
                if (func_80033634_ovl_01() & 1) {
                    arg0->unk_66 = t + 0x80;
                } else {
                    arg0->unk_66 = t - 0x80;
                }
            }
        }
    }

    arg0->unk_1E2 = (s16)((u16)arg0->unk_1E2 + (u16)arg0->unk_1F4);
    func_80032C08_ovl_01(arg0, 0, 0);

    switch (arg0->u06.b.unk_07) {
    case 0:
        if (arg0->unk_1E2 < 0) {
            break;
        }
        arg0->u06.b.unk_07 = 1;
        arg0->unk_2D8 = (arg0->unk_2C - arg0->unk_25E) >> 1;
        break;
    case 1:
        if (arg0->unk_2C < arg0->unk_2D8) {
            break;
        }
        arg0->u06.b.unk_07 = 2;
        arg0->unk_1F4 = (s16)-(u16)arg0->unk_1F4;
        break;
    case 2:
        if (arg0->unk_2C + 0xC3 < arg0->unk_25E) {
            if (arg0->unk_1F4 >= arg0->unk_1E2) {
                s16 t;
                arg0->u06.b.unk_07 = 3;
                t = arg0->unk_1F4;
                if (t < 0) {
                    t = -t;
                }
                arg0->unk_1E2 = t;
                arg0->unk_1F4 = 0;
            }
        } else {
            arg0->u06.unk_06 = 0x200;
            return;
        }
        break;
    case 3:
        if (arg0->unk_2C + 0xC3 < arg0->unk_25E) {
            break;
        }
        arg0->u06.unk_06 = 0x200;
        return;
    }

    {
        s16 v = arg0->unk_1E2;
        if (v < 0) {
            v = -v;
        }
        if (v < arg0->unk_1F4 * 2) {
            if (arg0->u06.b.unk_07 < 2) {
                if (arg0->unk_2C4 != 0 && (arg0->unk_1AC & 1)) {
                    arg0->unk_05 = 7;
                    arg0->u06.unk_06 = 0;
                }
                if (arg0->unk_2C6 != 0) {
                    if (func_80165F34_ovl_35(arg0, 0, 0x73A, 0x180)) {
                        arg0->unk_26F |= 0x80;
                        s2->unk_26F |= 0x80;
                        arg0->unk_05 = 3;
                        arg0->u06.unk_06 = 0;
                    }
                }
            }
        }
    }
}
