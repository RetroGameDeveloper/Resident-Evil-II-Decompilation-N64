typedef struct {
    u8 pad[0x130];
    s16 unk_130;
    s16 unk_132;
    s16 unk_134;
    s16 unk_136;
    s16 unk_138;
    s16 unk_13A;
} S161E20_2F0;

typedef struct {
    u8 pad[0x2F0];
    S161E20_2F0 sub;
} S161E20_234;

typedef struct {
    s32 unk_00;
    u32 unk_04;
    u8 pad_08[0x20];
    u8 unk_28[0x108];
    s16 unk_130;
    s16 unk_132;
    s16 unk_134;
    u8 unk_136[4];
    s16 unk_13A;
    u8 pad_13C[0x6E];
    u16 unk_1AA;
    u8 pad_1AC[0x34];
    s16 unk_1E0;
    s16 unk_1E2;
    s16 unk_1E4;
    u8 pad_1E6[2];
    s32 unk_1E8;
    u8 pad_1EC[6];
    s16 unk_1F2;
    u8 pad_1F4[0x40];
    S161E20_234 *unk_234;
    u8 pad_238[0x24];
    s8 unk_25C;
    s8 unk_25D;
    s16 unk_25E;
    u8 pad_260[4];
    s16 unk_264;
    u8 pad_266[2];
    s16 unk_268;
    u8 pad_26A[2];
    s16 unk_26C;
    u8 pad_26E[1];
    u8 unk_26F;
    s16 unk_270;
    s16 unk_272;
    s16 unk_274;
    s16 unk_276;
    u8 pad_278[0xC];
    s32 unk_284;
    u8 pad_288[2];
    s16 unk_28A;
    u8 pad_28C[0x28];
    s32 unk_2B4;
    s32 unk_2B8;
    s32 unk_2BC;
    s32 unk_2C0;
    s32 unk_2C4;
    s32 unk_2C8;
    s32 unk_2CC;
    s32 unk_2D0;
} S161E20;

typedef struct {
    u8 pad[0x2DC];
    void *unk_2DC;
} S161E20_sub18000;

typedef struct {
    u8 pad[0x18000];
    S161E20_sub18000 sub;
} S161E20_big;

typedef void (*S161E20_fn)(void *, s32, s32);

extern S161E20_big D_800C7650_ovl_01;
extern S161E20_fn D_801664F0_ovl_13[];

void func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80166214_ovl_13(void *arg0, s32 arg1);
s16 func_80069F4C_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80033A0C_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
void func_80166228_ovl_13(void);

void func_80161E20_ovl_13(S161E20 *arg0, s32 arg1, s32 arg2) {
    S161E20_2F0 *temp;
    S161E20_sub18000 *g;
    u8 *base;

    arg0->unk_04 = 0x01000000;
    arg0->unk_26C = 0;
    arg0->unk_268 = 0;
    arg0->unk_264 = 0;
    arg0->unk_1E0 = 0;
    arg0->unk_1E2 = 0;
    arg0->unk_1E4 = 0;
    arg0->unk_1F2 = 0xA;
    arg0->unk_2B4 = 0;
    arg0->unk_2B8 = 0;
    arg0->unk_2BC = 0;
    arg0->unk_2C0 = 0;
    arg0->unk_2C4 = 0;
    arg0->unk_2C8 = 0;
    arg0->unk_2CC = 0;
    arg0->unk_2D0 = 0;
    arg0->unk_270 = 0;
    arg0->unk_272 = 0;
    arg0->unk_274 = 0;
    arg0->unk_276 = 0;
    arg0->unk_1E8 = 0;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);

    arg0->unk_25D = 8;
    arg0->unk_25C = 0;
    temp = &arg0->unk_234->sub;
    temp->unk_134 = 0x60;
    temp->unk_136 = 0x60;
    temp->unk_138 = 0x200;
    temp->unk_130 = 0;
    temp->unk_132 = 0;
    temp->unk_13A = 0x138;
    arg0->unk_284 = 1;
    arg0->unk_134 = -0x15E;
    arg0->unk_130 = 0;
    arg0->unk_132 = 0;
    arg0->unk_13A = 0x212;
    func_80166214_ovl_13(arg0, 0x15E);

    base = (u8 *)arg0 + 0x28;
    arg0->unk_28A = 0x12C;
    arg0->unk_25E = func_80069F4C_ovl_01(base, 0xFA, 0x400, 0);
    func_80033A0C_ovl_01((u8 *)arg0 + 0x208, 0, 0xC800C8, 0, base);

    arg0->unk_00 |= 0x08000000;
    if (arg0->unk_1AA & 0x4000) {
        ((u8 *)arg0)[4] = 4;
        arg0->unk_1AA &= 0xBFFF;
        *(u16 *)((u8 *)arg0 + 0x2C6) |= 1;
        ((u8 *)arg0)[5] = ((u8 *)arg0)[0x1AB] & 0xF;
        D_801664F0_ovl_13[((u8 *)arg0)[4]](arg0, arg1, arg2);
    }
    if (arg0->unk_1AA & 0x40) {
        arg0->unk_26F = 0x80;
        arg0->unk_00 |= 8;
    }
    g = &D_800C7650_ovl_01.sub;
    g->unk_2DC = (void *)func_80166228_ovl_13;
}
