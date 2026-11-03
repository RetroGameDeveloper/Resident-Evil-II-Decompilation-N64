typedef struct S_16B { s32 a; s32 b; s32 c; s32 d; } S_16B;

typedef struct S_obj {
    u8 pad0[0x4];
    u8 unk4;
    u8 pad5[0x61];
    s16 unk66;
    u8 pad68[0x13C];
    s32 unk1A4;
    u8 pad1A8[0x2];
    u16 unk1AA;
    u8 pad1AC[0x46];
    s16 unk1F2;
    u8 pad1F4[0x24];
    s32 unk218;
    u8 pad21C[0x18];
    void *unk234;
    u8 pad238[0x18];
    void *unk250;
    u8 pad254[0x1B];
    u8 unk26F;
    u8 pad270[0x44];
    u8 unk2B4;
    u8 unk2B5;
    u8 unk2B6;
    u8 unk2B7;
    u16 unk2B8;
    s8 unk2BA;
    u8 pad2BB[0x5];
    u16 unk2C0;
    u8 pad2C2[0x8];
    u8 unk2CA;
} S_obj;

extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];
extern S_16B D_800E10F8_ovl_01;
extern void (*D_80169700_ovl_29[])(void *, s32, s32);
extern s8 D_80169720_ovl_29[];
extern s8 D_8016976A_ovl_29;
extern s8 D_8016976B_ovl_29;

void func_80065400_ovl_01(void *arg0, void *arg1, s32 arg2, s32 arg3);
void func_800662B8_ovl_01(void *arg0, void *arg1, s32 arg2);
s32 func_80033634_ovl_01(void);
void func_80040E88_ovl_01(void *arg0, void *arg1);
void func_80033678_ovl_01(void *arg0);
void func_8004DB8C_ovl_01(void *arg0);
void func_8004DCE8_ovl_01(void *arg0, s32 arg1);
void func_80167B8C_ovl_29(void *arg0);
s32 func_80034A00_ovl_01(void *arg0, s32 arg1, void *arg2);
void func_80168E68_ovl_29(void *arg0, void *arg1);
void func_8016915C_ovl_29(void *arg0, void *arg1);

#define G32(o) (*(u32 *)((u8 *)D_800C7650_ovl_01 + 0x18000 + (o)))

void func_80161C70_overlay_029(S_obj *arg0) {
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 sp24;
    s16 sp28[2];
    u16 sp30;

    sp28[0] = 0x1F4;
    sp28[1] = 0;
    sp18 = D_800E10F8_ovl_01.a;
    sp1C = D_800E10F8_ovl_01.b;
    sp20 = D_800E10F8_ovl_01.c;
    sp24 = D_800E10F8_ovl_01.d;
    func_80065400_ovl_01(arg0, &sp18, 0, 0);
    if (G32(0x1A60) & 0x20000000) {
        return;
    }
    if (arg0->unk26F & 0x7F) {
        arg0->unk26F = arg0->unk26F - 1;
    }
    if (arg0->unk2B8 & 2) {
        u8 v = arg0->unk2B4 - 1;
        arg0->unk2B4 = v;
        if (v == 0xFF) {
            if (arg0->unk2B5) {
                arg0->unk2B5 = arg0->unk2B5 - 1;
            }
            arg0->unk2B4 = 0xF;
            if (arg0->unk2B5 == 0) {
                arg0->unk2B8 = arg0->unk2B8 & 0xFFFD;
            }
        }
    }
    if (arg0->unk1F2 < 0x1F5) {
        if (arg0->unk2C0) {
            arg0->unk2C0 = arg0->unk2C0 - 1;
        }
    }
    if (!(G32(0x1A3C) & 0x20)) {
        u8 v = arg0->unk2B7 - 1;
        arg0->unk2B7 = v;
        if (v == 0xFF && arg0->unk2C0 != 0) {
            s16 a0 = arg0->unk1F2;
            arg0->unk2B7 = 7;
            if (a0 > 0 && a0 < (&sp28[0])[arg0->unk1AA & 1]) {
                arg0->unk1F2 = (s16)((u16)arg0->unk1F2 + 1);
            }
        }
    }
    if (arg0->unk2B6) {
        arg0->unk2B6 = arg0->unk2B6 - 1;
    }
    if (arg0->unk2CA) {
        arg0->unk2CA = arg0->unk2CA - 1;
    }
    if (arg0->unk2B8 & 0x20) {
        u8 *base = (u8 *)arg0->unk234;
        u8 *s0 = base + 0x178;
        s32 *p = *(s32 **)(s0 + 0x120);

        *(s16 *)((u8 *)p + 0xC) = 0x1000 - D_80169720_ovl_29[arg0->unk2BA] * 0x10;
        func_800662B8_ovl_01(arg0, s0, (s32)p);
        {
            u8 *s0b = base + 0x2F0;
            s32 d;
            p = *(s32 **)(s0b + 0x120);
            d = 1 - (arg0->unk2BA & 1) * 2;
            *(u16 *)((u8 *)p + 0xC) = *(u16 *)((u8 *)p + 0xC) - (d << 7);
            d = 1 - (arg0->unk2BA & 1) * 2;
            *(u16 *)((u8 *)p + 0x10) = *(u16 *)((u8 *)p + 0x10) + (d << 7);
            func_800662B8_ovl_01(arg0, s0b, d << 7);
        }
        {
            s32 v = arg0->unk2BA + 1;
            arg0->unk2BA = v & 0x3F;
            if (v & 0x10) {
                D_8016976A_ovl_29 = 7 - (func_80033634_ovl_01() & 0xFF) % 15;
                D_8016976B_ovl_29 = 7 - (func_80033634_ovl_01() & 0xFF) % 15;
            }
        }
    }
    D_80169700_ovl_29[arg0->unk4](arg0, arg0->unk1A4, arg0->unk218);
    func_80167B8C_ovl_29(arg0);
    arg0->unk250 = D_800E10D0_ovl_01;
    func_80034A00_ovl_01(arg0, arg0->unk66, &sp30);
    sp30 = sp30 & 0xFFF;
    if (sp30 >= 0x801) {
        sp30 = sp30 - 0xFFF;
    }
    {
        u8 *p = (u8 *)arg0->unk234;
        u8 *s0 = p + 0x468;
        *(u16 *)(s0 + 0x5A) = *(u16 *)(s0 + 0x5A) + sp30;
        func_80040E88_ovl_01(p + 0x4C0, p + 0x470);
        *(u16 *)(s0 + 0x5A) = *(u16 *)(s0 + 0x5A) - sp30;
    }
    func_80168E68_ovl_29(arg0, (u8 *)arg0->unk234 + 0x5E0);
    func_8016915C_ovl_29(arg0, (u8 *)arg0->unk234 + 0x5E0);
    func_80033678_ovl_01(arg0);
    func_8004DB8C_ovl_01(arg0);
    func_8004DCE8_ovl_01(arg0, 0x400);
}
