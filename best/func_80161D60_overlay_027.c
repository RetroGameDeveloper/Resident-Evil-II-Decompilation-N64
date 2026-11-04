typedef union U4_61D60 { s32 w; u8 b[4]; } U4_61D60;

typedef struct S_61D60 {
    s32 unk_00;
    U4_61D60 unk_04;
    u8 unk_08[0x5C];
    s16 unk_64;
    s16 unk_66;
    u8 unk_68[0xC4];
    s16 unk_12C;
    s16 unk_12E;
    s16 unk_130;
    s16 unk_132;
    s16 unk_134;
    s16 unk_136;
    s16 unk_138;
    s16 unk_13A;
    u8 unk_13C[0x6E];
    u16 unk_1AA;
    u8 unk_1AC[0x3C];
    s32 unk_1E8;
    u8 unk_1EC[6];
    s16 unk_1F2;
    u8 unk_1F4[0x14];
    u8 unk_208[0x2C];
    u8 *unk_234;
    u8 unk_238[0x24];
    u8 unk_25C;
    u8 unk_25D;
    u8 unk_25E[6];
    s16 unk_264;
    u8 unk_266[2];
    s16 unk_268;
    u8 unk_26A[2];
    s16 unk_26C;
    u8 unk_26E[0x16];
    s32 unk_284;
    u8 unk_288[2];
    s16 unk_28A;
    u8 unk_28C[0x18];
    void (*unk_2A4)(void);
    u8 unk_2A8[0x16];
    u8 unk_2BE;
    u8 unk_2BF[1];
    s16 unk_2C0;
    s16 unk_2C2;
    u8 unk_2C4;
    u8 unk_2C5;
    u8 unk_2C6;
    u8 unk_2C7;
    u8 unk_2C8;
    u8 unk_2C9[3];
    u8 unk_2CC;
} S_61D60;

extern u8 D_800C7650_ovl_01[];
extern s32 D_80163CD0_ovl_27;

s32 func_80033634_ovl_01(void);
void func_80033A0C_ovl_01(void *, s32, s32, s32, void *);
s32 func_80163BC4_ovl_27(S_61D60 *, s32);
void func_801636DC_ovl_27(S_61D60 *, s32);
void func_80161D44_ovl_27(void);

void func_80161D60_overlay_027(S_61D60 *arg0) {
    s32 off;
    u32 i;
    s32 one;
    u8 *p;
    u16 v;
    u8 *base;
    s32 r;
    s32 *q;

    off = 0x178;
    i = 1;
    arg0->unk_04.w = 0x01000000;
    arg0->unk_1F2 = -1;
    arg0->unk_25C = i;
    arg0->unk_25D = 0;
    arg0->unk_26C = 0;
    arg0->unk_268 = 0;
    arg0->unk_264 = 0;
    arg0->unk_2BE = 0;
    arg0->unk_2C2 = 0;
    arg0->unk_2C4 = 0;
    arg0->unk_2C5 = 0;
    arg0->unk_2C6 = 0;
    arg0->unk_2C7 = 0;
    arg0->unk_00 |= 0x44A;
    do {
        i++;
        p = arg0->unk_234 + off;
        *(s32 *)p |= 0x8000;
        off += 0x178;
    } while (i < 3);
    one = 1;
    arg0->unk_134 = -0x1F4;
    arg0->unk_136 = 0x1F4;
    arg0->unk_138 = 0x1F4;
    arg0->unk_13A = 0x1F4;
    arg0->unk_12C = 0x1F4;
    arg0->unk_12E = 0x1F4;
    arg0->unk_284 = one;
    arg0->unk_130 = 0;
    arg0->unk_132 = 0;
    arg0->unk_28A = 0x4B0;
    arg0->unk_1E8 = ((func_80033634_ovl_01() & 0xF) << 16) + 0x700;
    v = arg0->unk_1AA | 0x2000;
    arg0->unk_1AA = v;
    if ((v & 0xFF) == 0) {
        func_80033A0C_ovl_01(arg0->unk_208, 0, 0x320190, 0, p + 0x4C);
        base = D_800C7650_ovl_01 + 0x18000;
        *(s32 *)(base + 0x284) = func_80163BC4_ovl_27(arg0, *(s32 *)(base + 0x284));
        D_80163CD0_ovl_27 = 0;
        arg0->unk_00 |= 0x80400;
        arg0->unk_1AA |= 0x4000;
    } else {
        q = (s32 *)arg0->unk_234;
        *q |= 0x4000;
        v = arg0->unk_1AA;
        arg0->unk_2A4 = func_80161D44_ovl_27;
        arg0->unk_2C8 = 0;
        arg0->unk_2CC = 0;
        if ((v & 0xFF) < 0x20) {
            arg0->unk_1AA = v | 0x4000;
            r = (func_80033634_ovl_01() & 0xFF) * 2;
            arg0->unk_66 = r;
            arg0->unk_2C0 = r;
            func_801636DC_ovl_27(arg0, 0);
        } else {
            arg0->unk_64 = 0x400;
            arg0->unk_04.b[1] = 9;
            arg0->unk_2C8 = one;
            arg0->unk_00 |= 0x18010000;
            func_80033A0C_ovl_01(arg0->unk_208, 0, 0x320190, 0, arg0->unk_234 + 0x4C);
            if (arg0->unk_1AA == 0x2021) {
                arg0->unk_1F2 = -1;
            } else {
                arg0->unk_1F2 = one;
                arg0->unk_66 = 0x800;
            }
        }
    }
}
