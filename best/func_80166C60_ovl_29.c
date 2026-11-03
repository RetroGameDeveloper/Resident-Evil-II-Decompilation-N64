typedef struct S_obj_29 {
    u8 pad0[4];
    /*0x004*/ union {
        s32 unk4;
        struct { u8 pad4; u8 unk5; u8 unk6; u8 pad7; } b;
    } u4;
    u8 pad8[0x22];
    /*0x02A*/ s16 unk2A;
    u8 pad2C[6];
    /*0x032*/ s16 unk32;
    u8 pad34[0x176];
    /*0x1AA*/ u16 unk1AA;
    u8 pad1AC[0x34];
    /*0x1E0*/ u16 unk1E0;
    u8 pad1E2[0x10];
    /*0x1F2*/ s16 unk1F2;
    u8 pad1F4[0x40];
    /*0x234*/ void *unk234;
    u8 pad238[0x36];
    /*0x26E*/ u8 unk26E;
    u8 pad26F[0x29];
    /*0x298*/ s32 unk298;
    u8 pad29C[0x18];
    /*0x2B4*/ u8 unk2B4;
    /*0x2B5*/ u8 unk2B5;
    u8 pad2B6[2];
    /*0x2B8*/ u16 unk2B8;
    u8 pad2BA[2];
    /*0x2BC*/ u8 unk2BC;
    /*0x2BD*/ u8 unk2BD;
    u8 pad2BE[7];
    /*0x2C5*/ u8 unk2C5;
    u8 pad2C6[4];
    /*0x2CA*/ u8 unk2CA;
} S_obj_29;

extern u8 D_800C7650_ovl_01[];
extern u8 D_800E8FC8_ovl_01[];
extern u8 D_80169834_ovl_29[];

s32 func_80032D44_ovl_01(s16, s16, s16, s16);
s32 func_80033634_ovl_01(void);
void func_800377B0_ovl_01(s32, s16, void *, void *);
void func_80040E88_ovl_01(void *, void *);
void func_8004279C_ovl_01(void *, void *, void *);
s32 func_80077D48_ovl_01(s32, void *);
void func_80162530_ovl_29(void *, void *, void *);
void func_801671CC_ovl_29(void *);
void func_80167334_ovl_29(void *);
void func_8016746C_ovl_29(void *);
void func_801675FC_ovl_29(void *);
void func_8016778C_ovl_29(void *);
void func_80168218_ovl_29(void *, void *, void *);

void func_80166C60_ovl_29(S_obj_29 *arg0, void *arg1, void *arg2)
{
    s16 sp10[4];
    s16 sp18[4];
    s16 sp20[16];
    u8 *s1;
    u8 *base;
    s32 s4;
    s16 *s0;
    u16 v;

    if (arg0->u4.b.unk6 != 0) {
        func_80168218_ovl_29(arg0, arg1, arg2);
        return;
    }

    base = D_800C7650_ovl_01 + 0x18000;
    s1 = (u8 *)arg0->unk234 + 0x178;
    s4 = func_80032D44_ovl_01(arg0->unk2A, arg0->unk32,
                              *(s16 *)(base + 0x1AAA), *(s16 *)(base + 0x1AB2));

    if (arg0->unk1AA != 2) {
        sp10[0] = 0;
        sp10[1] = s4;
        sp10[2] = 0;
        func_80040E88_ovl_01(sp10, sp20);

        sp10[0] = 0xC8;
        sp10[1] = -0xC8;
        sp18[0] = (arg0->unk1E0 * 4) + 0x12C;
        sp18[1] = 0;
        sp18[2] = 0;
        if ((arg0->unk26E % 3) == 0) {
            sp10[0] = 0x96;
            sp10[1] = 0x2BC;
            sp18[0] = (arg0->unk1E0 * 2) + 0x96;
            sp18[1] = 0x2BC;
        }
        func_8004279C_ovl_01(sp20, sp10, sp10);
        sp10[0] += *(u16 *)(s1 + 0x4E);
        sp10[1] += *(u16 *)(s1 + 0x52);
        sp10[2] += *(u16 *)(s1 + 0x56);
        func_8004279C_ovl_01(sp20, sp18, sp18);
        sp18[0] += *(u16 *)(s1 + 0x4E);
        sp18[1] += *(u16 *)(s1 + 0x52);
        sp18[2] += *(u16 *)(s1 + 0x56);

        if ((arg0->u4.b.unk5 != 0x10) && (arg0->u4.b.unk5 != 0xC)) {
            s0 = (s16 *)D_800E8FC8_ovl_01;
            func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) << 3) + 0x17D0) | 0x10000,
                                 (s16)s4, s0, sp10);
            sp10[1] = sp10[1] - ((func_80033634_ovl_01() & 0x3F) - 0x40);
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) << 3) + 0x17D0,
                                 (s16)s4, s0, sp10);
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) << 3) + 0x17D0,
                                 (s16)s4, s0, sp18);
            sp10[1] = sp10[1] - ((func_80033634_ovl_01() & 0x3F) - 0x40);
            func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) << 3) + 0x17D0,
                                 (s16)s4, s0, sp18);
            if (arg0->u4.b.unk5 != 1) {
                func_80077D48_ovl_01(2, arg0);
            }
        }
    } else {
        s0 = (s16 *)((u8 *)arg0->unk234 + 0x790);
        sp10[0] = 0x40 - ((func_80033634_ovl_01() & 0xFF) >> 1);
        sp10[1] = 0;
        sp10[2] = 0x40 - ((func_80033634_ovl_01() & 0xFF) >> 1);
        func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) << 3) + 0x17D0) | 0x10000,
                             (s16)s4, s0, sp10);
        sp10[1] = sp10[1] - ((func_80033634_ovl_01() & 0x3F) - 0x40);
        func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) << 3) + 0x17D0,
                             (s16)s4, s0, sp10);
        s0 = (s16 *)((u8 *)arg0->unk234 + 0x908);
        func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) << 3) + 0x17D0,
                             (s16)s4, s0, sp10);
        func_80077D48_ovl_01(4, arg0);
    }

    arg0->unk2BC = 1;
    arg0->unk2BD = 0;
    if ((u32)(arg0->u4.b.unk5 - 5) < 2U) {
        arg0->unk2C5 = 1;
    }
    if (arg0->unk26E < 3) {
        if (arg0->u4.b.unk5 == 9) {
            func_8016746C_ovl_29(arg0);
        }
        if (arg0->u4.b.unk5 == 0x11) {
            func_801675FC_ovl_29(arg0);
        }
        if (arg0->u4.b.unk5 == 0xA) {
            func_801671CC_ovl_29(arg0);
        }
        if (arg0->u4.b.unk5 == 0xB) {
            func_80167334_ovl_29(arg0);
        }
    }
    if (arg0->u4.b.unk5 == 0xE) {
        func_8016778C_ovl_29(arg0);
    }
    if ((arg0->u4.b.unk5 == 0x10) && (arg0->unk2CA == 0)) {
        func_801671CC_ovl_29(arg0);
        arg0->unk2CA = 0x2D;
    }
    if (!(arg0->unk2B8 & 4) && (arg0->unk1F2 < 0xC8)) {
        arg0->unk2B5 = 0x32;
        arg0->unk2B8 |= 4;
    }

    v = arg0->unk2B8;
    if (v & 0x200) {
        arg0->u4.unk4 = arg0->unk298;
        func_80168218_ovl_29(arg0, arg1, arg2);
        return;
    }
    if (!(v & 1)) {
        arg0->unk2B5 = arg0->unk2B5 + D_80169834_ovl_29[arg0->u4.b.unk5 - 1];
        if (!(v & 2)) {
            arg0->unk2B8 = v | 2;
            arg0->unk2B4 = 0xF;
        }
    }
    if ((arg0->unk2B8 & 0x80) || (arg0->unk2B5 < 0xC)) {
        arg0->u4.unk4 = arg0->unk298;
        func_80162530_ovl_29(arg0, arg1, arg2);
        return;
    }
    arg0->unk2B5 = 0;
    arg0->unk2B4 = 0;
    arg0->unk2B8 &= 0xFFFD;
    func_80168218_ovl_29(arg0, arg1, arg2);
}
