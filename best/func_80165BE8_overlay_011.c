typedef union U4_65BE8 { s32 w; u8 b[4]; } U4_65BE8;

typedef struct S_65BE8 {
    s32 unk_00;
    U4_65BE8 unk_04;
    u8 unk_08[0x19A];
    u8 unk_1A2;
    u8 unk_1A3[7];
    u16 unk_1AA;
    u8 unk_1AC[0x34];
    u16 unk_1E0;
    u8 unk_1E2[6];
    U4_65BE8 unk_1E8;
    u8 unk_1EC[8];
    u16 unk_1F4;
    u8 unk_1F6[0x10];
    u8 unk_206;
    u8 unk_207;
    u8 unk_208[0x58];
    s16 unk_260;
    s16 unk_262;
    u8 unk_264[0xB];
    u8 unk_26F;
    u8 unk_270[0x1C];
    s32 unk_28C;
    u8 unk_290[0x26];
    u16 unk_2B6;
    u8 unk_2B8[6];
    u8 unk_2BE;
    u8 unk_2BF;
    u8 unk_2C0[0x15];
    u8 unk_2D5;
} S_65BE8;

extern u8 D_800C7650_ovl_01[];

void func_80032DEC_ovl_01(S_65BE8 *, s16, s16, s32);
s32 func_80033634_ovl_01(void);
void func_80077D48_ovl_01(s32, S_65BE8 *);
void func_800334F8_ovl_01(S_65BE8 *, s32, s32, s32);
s32 func_80089D34_ovl_01(S_65BE8 *, s32, s32, s32);
void func_80032B8C_ovl_01(S_65BE8 *, s32);
s32 func_80032EA4_ovl_01(S_65BE8 *, s32, s32, s32);

void func_80165BE8_overlay_011(S_65BE8 *arg0, s32 arg1, s32 arg2) {
    u16 v;
    s32 a;
    u8 *base;

    switch (arg0->unk_04.b[2]) {
    case 0:
        arg0->unk_1E8.w = 0x0A000F00;
        arg0->unk_04.b[2] = 1;
        func_80032DEC_ovl_01(arg0, arg0->unk_260, arg0->unk_262, 0x80);
        arg0->unk_1F4 = 0;
        arg0->unk_2BE = 0;
        arg0->unk_207 = 0;
        arg0->unk_2B6 = (arg0->unk_2B6 & 0xFFFB) | 2;
        arg0->unk_00 = (arg0->unk_00 & 0xF3FFFFFF) | 0x04000000;
        arg0->unk_26F |= 0x80;
        arg0->unk_1AA |= 0x2000;
        if (arg0->unk_2D5 == 0) {
            if (func_80033634_ovl_01() & 1) {
                a = 0xA;
            } else {
                a = 0xB;
            }
            func_80077D48_ovl_01(a, arg0);
            arg0->unk_2D5 = 0x96;
        }
        /* fall through */
    case 1:
        v = arg0->unk_1F4 + 1;
        arg0->unk_1F4 = v;
        if (v & 1) {
            func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        } else {
            arg0->unk_1E0 = (s32)(arg0->unk_1E0 << 16) >> 18;
        }
        arg0->unk_04.b[2] += func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        func_80032B8C_ovl_01(arg0, 0);
        if (arg0->unk_1E8.b[1] >= 0x12) {
            base = D_800C7650_ovl_01 + 0x18000;
            if ((func_80032EA4_ovl_01(arg0, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 0x100) << 16) == 0
                && (u32)arg0->unk_28C < 0x708
                && (*(u8 *)(base + 0x1CEF) & 0x80) == 0
                && arg0->unk_1A2 == *(u8 *)(base + 0x1C22)) {
                arg0->unk_04.w = 0x01010000;
                arg0->unk_1AA = (arg0->unk_1AA & 0xFFC0) | 1;
                *(u8 *)(base + 0x1CEF) |= 0x80;
            }
        } else {
            func_80032DEC_ovl_01(arg0, arg0->unk_260, arg0->unk_262, 0x10);
        }
        break;
    case 2:
        arg0->unk_04.w = 0x01050200;
        arg0->unk_2BF = (func_80033634_ovl_01() & 0xF) + 0x10;
        arg0->unk_206 = 0;
        break;
    }
}
