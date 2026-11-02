typedef struct Blob8 { u8 b[8]; } Blob8;
typedef struct S234 {
    u8 pad0[0x4C];
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    u8 pad58[0x1C4 - 0x58];
    s32 unk1C4;
    s32 unk1C8;
    s32 unk1CC;
} S234;
typedef struct O {
    u8 pad0[0x4];
    u8 unk4;
    u8 pad5[0xD - 0x5];
    u8 unkD;
    u8 padE[0x28 - 0xE];
    u8 unk28[0x66 - 0x28];
    s16 unk66;
    u8 pad68[0x70 - 0x68];
    s32 unk70;
    u8 pad74[0x122 - 0x74];
    u16 unk122;
    u8 pad124[0x12A - 0x124];
    u16 unk12A;
    u8 pad12C[0x1A4 - 0x12C];
    s32 unk1A4;
    u8 pad1A8[0x1B4 - 0x1A8];
    u16 unk1B4;
    u16 unk1B6;
    u8 unk1B8[0x1D8 - 0x1B8];
    u16 unk1D8;
    u16 unk1DA;
    u16 unk1DC;
    u8 pad1DE[0x218 - 0x1DE];
    s32 unk218;
    u8 pad21C[0x234 - 0x21C];
    S234 *unk234;
    u8 pad238[0x26F - 0x238];
    u8 unk26F;
    u8 pad270[0x2C8 - 0x270];
    u16 unk2C8;
    u8 unk2CA;
    u8 pad2CB[0x2CE - 0x2CB];
    u8 unk2CE;
    u8 pad2CF[0x2D6 - 0x2CF];
    u16 unk2D6;
    u8 pad2D8[0x2D8 - 0x2D8];
    void (*unk2D8)(struct O *);
} O;
typedef struct SubBase {
    u8 pad0[0x28C];
    u8 **unk28C;
    u8 pad290[0x1A60 - 0x290];
    u32 unk1A60;
} SubBase;
typedef struct Big { u8 pad[0x18000]; SubBase sub; } Big;
extern u8 D_800E10F8_ovl_01[];
extern u8 *D_800E1388_ovl_01[];
extern s16 D_80168CD8_ovl_14[];
extern void (*D_80168C14_ovl_14[])(O *, s32, s32);
extern Big D_800C7650_ovl_01;
extern s32 func_80065400_ovl_01(void *, void *, s32, s32);
extern s32 func_80162D90_ovl_14(O *, u8);
extern s32 func_800838F0_ovl_01(void *, void *, void *, void *);
extern s32 func_80040E88_ovl_01(void *, s32);
extern s32 func_801622FC_ovl_14(O *);
extern s32 func_80033678_ovl_01(O *);
extern s32 func_8004DA70_ovl_01(O *, void *);
extern s32 func_8004D3D0_ovl_01(void *, O *);
extern s32 func_80082230_ovl_01(void *, s32, s32);
extern s32 func_80083800_ovl_01(s16, void *, void *);
extern s32 func_8004DCE8_ovl_01(O *, s32);
void func_80164614_ovl_14(O *p) {
    S234 *s3;
    s32 v[4];
    s32 w[4];
    Blob8 cpy;
    u8 tmp[8];
    u8 **q;
    s3 = p->unk234;
    func_80065400_ovl_01(p, D_800E10F8_ovl_01, 0, 0);
    if (D_800C7650_ovl_01.sub.unk1A60 & 0x20000000) {
        return;
    }
    *(s32 *)D_80168CD8_ovl_14 = 0;
    D_80168CD8_ovl_14[2] = 0;
    if (p->unk26F & 0x7F) {
        p->unk26F = p->unk26F - 1;
    }
    if (p->unk2CA) {
        p->unk2CA = p->unk2CA - 1;
    }
    D_80168C14_ovl_14[p->unk4](p, p->unk1A4, p->unk218);
    func_80162D90_ovl_14(p, p->unk2CE);
    if (D_80168CD8_ovl_14[0] != 0 || D_80168CD8_ovl_14[1] != 0 || D_80168CD8_ovl_14[2] != 0) {
        func_800838F0_ovl_01(p->unk28, &p->unk1D8, p->unk1B8, D_80168CD8_ovl_14);
        p->unk1D8 = (p->unk1D8 + 0x40) & 0xFF80;
        p->unk1DA = (p->unk1DA + 0x40) & 0xFF80;
        p->unk1DC = (p->unk1DC + 0x40) & 0xFF80;
        func_80040E88_ovl_01(&p->unk1D8, p->unk70);
    }
    func_801622FC_ovl_14(p);
    if ((p->unk2C8 & 4) == 0) {
        func_80033678_ovl_01(p);
    }
    if (p->unk2D8 != 0) {
        p->unk2D8(p);
    }
    v[0] = s3->unk4C;
    v[1] = s3->unk50;
    v[2] = s3->unk54;
    func_8004DA70_ovl_01(p, v);
    p->unkD = 0xFF;
    for (q = D_800E1388_ovl_01; q != D_800C7650_ovl_01.sub.unk28C; q++) {
        u8 *e = *q;
        if (e != (u8 *)p && (*(u32 *)e & 1)) {
            func_8004D3D0_ovl_01(e, p);
        }
    }
    func_80082230_ovl_01(tmp, 0, 8);
    *(u16 *)tmp = p->unk2D6;
    cpy = *(Blob8 *)tmp;
    func_80083800_ovl_01(p->unk66, &cpy, &cpy);
    w[0] = s3->unk1C4 + ((s16 *)&cpy)[0];
    w[1] = s3->unk1C8 + ((s16 *)&cpy)[1];
    w[2] = s3->unk1CC + ((s16 *)&cpy)[2];
    func_8004DA70_ovl_01(p, w);
    if (p->unk2C8 & 0x100) {
        p->unk2C8 = p->unk2C8 & 0xFEFF;
        p->unk1B4 = p->unk122;
        p->unk1B6 = p->unk12A;
    } else {
        func_8004DCE8_ovl_01(p, 0x400);
    }
    func_8004DA70_ovl_01(p, v);
}
