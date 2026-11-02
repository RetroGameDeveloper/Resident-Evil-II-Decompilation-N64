typedef struct Blob8 { u8 b[8]; } Blob8;
typedef struct B1E8 { u8 pad[1]; u8 unk1E9; } B1E8;
typedef union U1E8 { s32 unk1E8; B1E8 b; } U1E8;
typedef struct B4c { u8 pad[1]; u8 unk5; } B4c;
typedef union U4c { s32 unk4; B4c b; } U4c;
typedef struct Child {
    u8 pad0[4];
    U4c u;
    u8 pad6[0x28 - 0x8];
    s32 unk28;
    u8 pad2c[4];
    s32 unk30;
    u8 pad34[0x250 - 0x34];
    s32 unk250;
    u8 pad254[0x26F - 0x254];
    u8 unk26F;
} Child;
typedef union U6 { u16 w; struct { u8 state; u8 count; } b; } U6;
typedef struct B4 { u8 pad[1]; u8 unk5; U6 u6; } B4;
typedef union U4 { s32 unk4; B4 b; } U4;
typedef struct P {
    u8 pad0[4];
    U4 u;
    u8 pad8[0xC - 0x8];
    u8 unkC;
    u8 padD[0x28 - 0xD];
    s32 unk28;
    u8 pad2c[4];
    s32 unk30;
    u8 pad34[0x1E8 - 0x34];
    U1E8 u1;
    u8 pad1EC[0x1F4 - 0x1EC];
    s16 unk1F4;
    u8 pad1F6[0x234 - 0x1F6];
    u8 *unk234;
    u8 pad238[0x28C - 0x238];
    s32 unk28C;
    u8 pad290[0x2B6 - 0x290];
    u8 unk2B6;
    u8 pad2B7[0x2C4 - 0x2B7];
    Child *unk2C4;
    u16 unk2C8;
    u8 unk2CA;
    u8 pad2CB[0x2CE - 0x2CB];
    u8 unk2CE;
} P;
extern Blob8 D_801686F4_ovl_14;
extern s32 D_80168CE0_ovl_14;
extern u16 D_80168B50_ovl_14[];
extern u8 D_800E10D0_ovl_01[];
extern s32 func_80032B8C_ovl_01(P *, s32);
extern s32 func_80032DEC_ovl_01(P *, s32, s32, s32);
extern s16 func_80032EA4_ovl_01(P *, s32, s32, s32);
extern s32 func_80033174_ovl_01(P *, void *);
extern s32 func_800334F8_ovl_01(P *, s32, s32, s32);
extern s32 func_800377B0_ovl_01(s32, s32, void *, void *);
extern s32 func_80052C00_ovl_01(s32, s32, void *);
extern s32 func_80052D40_ovl_01(s32, s32, s32, s32);
extern s32 func_80059E30_ovl_01(s32, s32);
extern s32 func_80077D48_ovl_01(s32, P *);
extern s32 func_8008A974_ovl_01(P *, s32, s32, s32);
extern s32 func_80036764_ovl_01_510_24(void *, s32, s32, s32);
void func_801638E0_ovl_14(P *p, s32 b, s32 c) {
    Blob8 vec;
    u8 *s1;
    u8 old;
    vec = D_801686F4_ovl_14;
    s1 = p->unk234 + 0xD38;
    switch (p->u.b.u6.b.state) {
    case 0:
        p->u.b.u6.b.count = 0;
        if (p->unk2C8 & 2) {
            func_80032DEC_ovl_01(p, p->unk2C4->unk28, p->unk2C4->unk30, 0x10);
            p->u.b.u6.b.state = p->u.b.u6.b.state + func_80036764_ovl_01_510_24(p, 6, 0xF, 1);
            break;
        }
        p->u.b.u6.b.state = p->u.b.u6.b.state + 1;
    case 1:
        if (D_80168CE0_ovl_14 != 0) {
            p->u.unk4 = 0x010F0000;
            break;
        }
        p->unk1F4 = 0;
        D_80168CE0_ovl_14 = p->unkC;
        p->unk2B6 = 1;
        p->unk2CE = 3;
        p->u1.unk1E8 = 0x07000300;
        p->u.b.u6.w = 0x200;
        p->unk2C8 &= 0xFFFD;
    case 2:
        func_800334F8_ovl_01(p, b, c, 0);
        func_80032DEC_ovl_01(p, p->unk2C4->unk28, p->unk2C4->unk30, 8);
        if (func_8008A974_ovl_01(p, b, c, 0x400) != 0) {
            p->u.b.u6.b.state = p->u.b.u6.b.state + 1;
        }
        func_80032B8C_ovl_01(p, 0);
        if (p->u1.b.unk1E9 == 0x11) {
            func_800377B0_ovl_01(0x141800, 0, s1 + 0x38, &vec);
            func_80077D48_ovl_01(5, p);
        }
        break;
    case 3:
        if (p->unk2B6 == 0) {
            p->u.unk4 = 0x010F0000;
        }
        break;
    }
    old = p->u.b.u6.b.count;
    p->u.b.u6.b.count = old + 1;
    if ((u8)(old - 0x11) < 8 && p->unk1F4 == 0) {
        Child *ch = p->unk2C4;
        if (ch->unk26F == 0 && func_80032EA4_ovl_01(p, ch->unk28, ch->unk30, 0x100) == 0 &&
            (u32)p->unk28C < (u32)D_80168B50_ovl_14[p->u.b.u6.b.count - 0x11]) {
            ch->unk250 = (s32)p;
            ch->u.unk4 = 0x02000000;
            ch->u.b.unk5 = ch->u.b.unk5 + func_80033174_ovl_01(p, D_800E10D0_ovl_01);
            func_80052C00_ovl_01(3, 0, ch);
            func_80052D40_ovl_01(4, 0xFF, 0x32, 2);
            func_80052D40_ovl_01(10, 0x8C, 0x32, 2);
            if (func_80059E30_ovl_01(0x19, 0) & 2) {
                *(u32 *)(D_800E10D0_ovl_01 + 4) = 0x03000000;
            }
            p->unk2CA = 0x28;
            p->unk1F4 = 1;
        }
    }
}
