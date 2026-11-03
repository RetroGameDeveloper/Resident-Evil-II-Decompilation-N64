typedef struct S_ent_21 {
    u16 unk0;
    s16 unk2;
    s16 unk4;
    s16 unk6;
    u8 unk8[6];
} S_ent_21;

typedef struct S_obj_21 {
    /*0x000*/ u32 unk0;
    /*0x004*/ union {
        u32 unk4;
        struct { u8 pad4; u8 pad5; u8 unk6; u8 pad7; } b;
    } u4;
    u8 pad8[0x20];
    /*0x028*/ s32 unk28;
    /*0x02C*/ s32 unk2C;
    /*0x030*/ s32 unk30;
    u8 pad34[0x1AC];
    /*0x1E0*/ s16 unk1E0;
    /*0x1E2*/ s16 unk1E2;
    /*0x1E4*/ u16 unk1E4;
    u8 pad1E6[0xE];
    /*0x1F4*/ s16 unk1F4;
    /*0x1F6*/ u16 unk1F6;
    u8 pad1F8[0xE];
    /*0x206*/ u8 unk206;
    u8 pad207[0x1D];
    /*0x224*/ s32 unk224;
    /*0x228*/ s32 unk228;
    u8 pad22C[8];
    /*0x234*/ u8 *unk234;
    u8 pad238[0x82];
    /*0x2BA*/ u16 unk2BA;
    /*0x2BC*/ u16 unk2BC;
    /*0x2BE*/ u16 unk2BE;
    /*0x2C0*/ u16 unk2C0;
    /*0x2C2*/ u8 unk2C2;
} S_obj_21;

extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D4_ovl_01[];
extern S_ent_21 D_801638BC_ovl_21[];
extern s32 D_80163A80_ovl_21;
extern s32 D_80163A84_ovl_21;
extern s32 D_80163A88_ovl_21;
extern u32 D_80163A8C_ovl_21;
extern u32 D_80163A90_ovl_21;

void func_80077D48_ovl_01(s32, void *);
void func_80032B8C_ovl_01(void *, s32);
void func_80032DEC_ovl_01(void *, s16, s16, s32);
s32 func_80036BB4(void *, s32, s32, s32);
s32 func_80040BE4_ovl_01(s32);
void func_80040E88_ovl_01(void *, void *);
void func_8004251C_ovl_01(s32, void *, void *);
void func_80052C00_ovl_01(s32, s32);
void func_80052D40_ovl_01(s32, s32, s32, s32);
void func_80163448_ovl_21(void *);
u8 func_8016350C_ovl_21(void);
void func_80036EA0_ovl_01(void *);

void func_8016252C_ovl_21(S_obj_21 *arg0)
{
    u8 stack[0x50];
    u8 *base;
    u8 *s4;
    s32 s2, s0, s6, s7, s1;
    s32 one;
    u16 v;
    S_ent_21 *e;

    one = 1;
    arg0->unk2BA |= 8;
    s4 = arg0->unk234;

    switch (arg0->u4.b.unk6) {
    case 0:
        func_80077D48_ovl_01(3, arg0);
        *(s32 *)(s4 + 0x2F0) = one;
        *(s32 *)(s4 + 0x468) = one;
        arg0->unk1F4 = 0;
        arg0->unk1F6 = 0;
        arg0->unk206 = 0;
        arg0->unk1E0 = 0;
        arg0->unk1E2 = 0;
        arg0->unk1E4 = 0;
        arg0->unk2C2 = func_8016350C_ovl_21();
        arg0->unk2BA |= one;
        arg0->u4.b.unk6 = arg0->u4.b.unk6 + 1;
        /* fallthrough */
    case 1:
        if (func_80036BB4(arg0, 2, 0, 0) != 0) {
            func_80036EA0_ovl_01(arg0);
            base = D_800C7650_ovl_01 + 0x18000;
            func_80032DEC_ovl_01(arg0, *(s32 *)(base + 0x1AA8), *(s32 *)(base + 0x1AB0), 0x800);
            arg0->unk1F4 = 0;
            arg0->unk0 |= 0x2000;
            arg0->u4.b.unk6 = arg0->u4.b.unk6 + 1;
        }
        break;
    case 2:
        func_80036BB4(arg0, 3, 0, 0);
        s7 = -0x6270;
        s2 = s7 - arg0->unk30;
        s6 = -0x708;
        s0 = s6 - arg0->unk2C;
        s1 = func_80040BE4_ovl_01(s2 * s2 + s0 * s0);
        v = arg0->unk206 + 1;
        arg0->unk206 = v;
        if ((s8)v == 0x10) {
            arg0->unk206 = 0;
            func_80077D48_ovl_01(3, arg0);
        }
        if (s1 >= 0x709) {
            if (!(arg0->unk2BA & 2)) {
                if (arg0->unk1F4 < 0x5A) {
                    arg0->unk1E2 = 0;
                    arg0->unk30 = s7 - (s2 * 1800) / s1;
                    arg0->unk2C = s6 - (s0 * 1800) / s1;
                    goto block21;
                }
                goto block19;
            }
        } else {
            goto block21;
        }
    block19:
        arg0->unk2BA &= 0xFFFD;
        func_80163448_ovl_21(arg0);
        *(s32 *)(s4 + 0x2F0) = 0;
        *(s32 *)(s4 + 0x468) = 0;
        arg0->unk2BA &= 0xFFFE;
        D_80163A80_ovl_21 &= ~(one << arg0->unk2C2);
        arg0->unk0 &= ~0x2000;
        arg0->u4.unk4 = 0x01000000;
        break;
    block21:
        if (arg0->unk1F4 < 0x5A) {
            arg0->unk1F4 = arg0->unk1F4 + 1;
        }
        base = D_800C7650_ovl_01 + 0x18000;
        e = &D_801638BC_ovl_21[arg0->unk2C2];
        func_80040E88_ovl_01(e->unk8, stack + 0x20);
        *(s32 *)(stack + 0x34) = e->unk2;
        *(s32 *)(stack + 0x38) = e->unk4;
        *(s32 *)(stack + 0x3C) = e->unk6;
        func_8004251C_ovl_01(*(u32 *)(base + 0x1CB4) + e->unk0 * 0x178 + 0x38,
                             stack + 0x20, stack);
        arg0->unk2BC = *(u16 *)(stack + 0x16);
        arg0->unk2BE = *(u16 *)(stack + 0x1A);
        arg0->unk2C0 = *(u16 *)(stack + 0x1E);
        s0 = 0;
        {
            s32 dx = arg0->unk28 - *(s32 *)(stack + 0x14);
            s32 dz = arg0->unk30 - *(s32 *)(stack + 0x1C);
            if (func_80040BE4_ovl_01(dx * dx + dz * dz) < 0xC8) {
                s32 dy = arg0->unk2C - (s16)arg0->unk2BE;
                if (dy < 0) {
                    dy = -dy;
                }
                if (dy < 0xC8) {
                    s0 = 1;
                }
            }
        }
        if (s0 != 0) {
            arg0->unk2BA = (arg0->unk2BA | 2) & 0xFFF7;
            D_80163A84_ovl_21 += 1;
            if (*(u8 *)(base + 0x1CEF) == 0) {
                *(u8 *)(base + 0x1A84) = 5;
                *(u8 *)(base + 0x1A85) = 0;
                *(u32 *)(base + 0x1CD0) = (u32)arg0;
                *(u32 *)(base + 0x1CA4) = arg0->unk224;
                *(u16 *)(D_800E10D4_ovl_01 + 2) = 0;
                *(u32 *)(base + 0x1CA8) = arg0->unk228;
                if (D_80163A8C_ovl_21 >= 0xE2) {
                    *(u32 *)D_800E10D4_ovl_01 = 0x03000000;
                    *(s16 *)(base + 0x1C72) = -1;
                    *(u8 *)(base + 0x1CEF) = 0x80;
                    D_80163A88_ovl_21 = 1;
                    *(u32 *)(base + 0x1A3C) |= 0x04000000;
                }
            }
            arg0->u4.unk4 = 0x01030000;
            arg0->unk0 &= ~0x2000;
            if (D_80163A90_ovl_21 < 0xA0) {
                func_80052C00_ovl_01(4, 0);
                func_80052D40_ovl_01(0xC, 0x8C, 0x32, 1);
            }
        } else {
            if (!(arg0->unk2BA & 2) && (arg0->unk1F4 < 0x5A)) {
                func_80032DEC_ovl_01(arg0, arg0->unk2BC, arg0->unk2C0, 0x40);
                s0 = (s16)arg0->unk2BE - (arg0->unk2C + arg0->unk1E2);
                if (s0 >= 0x65) {
                    s0 = 0x64;
                }
                if (s0 < -0x64) {
                    s0 = -0x64;
                }
                arg0->unk1E2 = s0;
            } else {
                arg0->unk1E2 = arg0->unk1E2 + 1;
            }
            arg0->unk2C = arg0->unk2C + arg0->unk1E2;
            if (arg0->unk1E0 < 0xC8) {
                v = arg0->unk1F6;
                arg0->unk1F6 = v + 1;
                arg0->unk1E0 = arg0->unk1E0 + v;
            }
            func_80032B8C_ovl_01(arg0, 0);
        }
        break;
    }
}
