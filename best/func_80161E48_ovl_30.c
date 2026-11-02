typedef union U4_61E48 { s32 w; u8 b[4]; } U4_61E48;

typedef struct S_61E48 {
    s32 unk_00;
    U4_61E48 unk_04;
    u8 unk_08[0x124];
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
    u8 unk_1AC[0x34];
    s16 unk_1E0;
    s16 unk_1E2;
    s16 unk_1E4;
    u8 unk_1E6[2];
    s32 unk_1E8;
    u8 unk_1EC[6];
    s16 unk_1F2;
    u8 unk_1F4[0x14];
    u8 unk_208[0x2C];
    u8 *unk_234;
    u8 unk_238[0x18];
    u8 *unk_250;
    u8 unk_254[8];
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
    u8 unk_28C[0x28];
    s32 unk_2B4[0xC];
} S_61E48;

extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01;
extern u8 D_80167CE0_ovl_30;
extern u8 D_80167CE1_ovl_30;
extern s16 D_80167CE2_ovl_30;
extern s16 D_80167CE4_ovl_30;
extern s16 D_80167CE6_ovl_30;
extern s16 D_80167CE8_ovl_30;
extern u8 D_80167CEA_ovl_30;
extern u8 D_80167CEB_ovl_30;

void func_80033A0C_ovl_01(void *, s32, s32, s32, void *);
s32 func_80089D34_ovl_01(S_61E48 *, s32, s32, s32);
void func_80167B58_ovl_30(S_61E48 *, s32, s32, s32);
void func_80166974_ovl_30(void);
void func_80166BDC_ovl_30(void);

void func_80161E48_ovl_30(S_61E48 *arg0, s32 arg1, s32 arg2) {
    u32 i;
    s32 v;
    s16 one;
    u8 *base;
    u8 *q;
    u8 *t0;
    u8 *v1;
    s32 *p;

    t0 = (u8 *)arg0 + 0x2B4;
    i = 0;
    v1 = (u8 *)arg0;
    arg0->unk_04.w = 0x01000000;
    arg0->unk_26C = 0;
    arg0->unk_268 = 0;
    arg0->unk_264 = 0;
    do {
        *(s32 *)(v1 + 0x2B4) = 0;
        i++;
        v1 += 4;
    } while (i < 0xC);
    arg0->unk_1E0 = 0;
    arg0->unk_1E2 = 0;
    arg0->unk_1E4 = 0;
    base = D_800C7650_ovl_01;
    base = base + 0x18000;
    v = 0x384;
    if (*(s32 *)(base + 0x1A3C) & 0x20) {
        v = 0x2EE;
    }
    arg0->unk_1F2 = v;
    *(s16 *)(t0 + 0xE) = 0x28;
    arg0->unk_00 |= 0x1C000000;
    func_80033A0C_ovl_01(arg0->unk_208, 0, 0x06400640, 0, (u8 *)arg0 + 0x28);
    arg0->unk_250 = &D_800E10D0_ovl_01;
    arg0->unk_25D = 3;
    arg0->unk_25C = 0;
    q = arg0->unk_234;
    q = q + 0x468;
    *(s16 *)(q + 0x134) = 0x40;
    *(s16 *)(q + 0x136) = 0x10;
    *(s16 *)(q + 0x138) = 0x100;
    *(s16 *)(q + 0x130) = 0;
    *(s16 *)(q + 0x132) = 0;
    *(s16 *)(q + 0x13A) = 0x20;
    p = (s32 *)arg0->unk_234;
    for (i = 0; i < 0x1D; i++) {
        *p |= 0x8000;
        p = (s32 *)((u8 *)p + 0x178);
    }
    one = 1;
    arg0->unk_134 = -0x7D0;
    arg0->unk_136 = 0x44C;
    arg0->unk_138 = 0x44C;
    arg0->unk_13A = 0x7D0;
    arg0->unk_12C = 0x4B0;
    arg0->unk_12E = 0x4B0;
    arg0->unk_28A = 0x384;
    D_80167CE0_ovl_30 = 0;
    D_80167CE1_ovl_30 = 0;
    D_80167CE2_ovl_30 = 0;
    D_80167CE4_ovl_30 = 0;
    D_80167CE6_ovl_30 = 0;
    D_80167CE8_ovl_30 = 0;
    D_80167CEA_ovl_30 = 0;
    arg0->unk_284 = one;
    arg0->unk_130 = 0;
    arg0->unk_132 = 0;
    D_80167CEB_ovl_30 = 0;
    arg0->unk_1E8 = 0;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    base = D_800C7650_ovl_01;
    base = base + 0x18000;
    *(void **)(base + 0x324) = func_80166974_ovl_30;
    *(void **)(base + 0x424) = func_80166BDC_ovl_30;
    if (arg0->unk_1AA == 1) {
        arg0->unk_04.b[1] = arg0->unk_1AA;
    } else if (arg0->unk_1AA == 0x6002) {
        arg0->unk_04.w = 0x04000000;
    }
    func_80167B58_ovl_30(arg0, 0xB, 0, 0);
}
