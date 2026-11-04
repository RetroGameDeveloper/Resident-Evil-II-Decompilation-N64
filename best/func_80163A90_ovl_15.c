typedef struct S_obj_80163A90 {
    /*0x000*/ u32 unk0;
    u8 pad04[2];
    /*0x006*/ u8 unk6;
    u8 pad07[0x21];
    /*0x028*/ s32 unk28;
    u8 pad2C[4];
    /*0x030*/ s32 unk30;
    u8 pad34[0x32];
    /*0x066*/ u16 unk66;
    u8 pad68[0x142];
    /*0x1AA*/ u16 unk1AA;
    u8 pad1AC[0x34];
    /*0x1E0*/ u16 unk1E0;
    u8 pad1E2[6];
    /*0x1E8*/ u8 unk1E8;
    /*0x1E9*/ u8 unk1E9;
    u8 pad1EA[0x1D];
    /*0x207*/ u8 unk207;
    u8 pad208[0xA];
    /*0x212*/ u16 unk212;
    u8 pad214[0x20];
    /*0x234*/ void *unk234;
    u8 pad238[0x37];
    /*0x26F*/ u8 unk26F;
    u8 pad270[0x44];
    /*0x2B4*/ u16 unk2B4;
    u8 pad2B6[0xA];
    /*0x2C0*/ u8 unk2C0;
    /*0x2C1*/ u8 unk2C1;
    /*0x2C2*/ u8 unk2C2;
    /*0x2C3*/ u8 unk2C3;
    /*0x2C4*/ u16 unk2C4;
    /*0x2C6*/ u16 unk2C6;
    /*0x2C8*/ u8 unk2C8;
    /*0x2C9*/ u8 unk2C9;
} S_obj_80163A90;

extern u8 D_800C7650_ovl_01[];
extern u8 D_800E1C00[];
extern u8 D_800E8E58_ovl_01[];
extern u8 D_800E8FC8_ovl_01[];
extern s8 D_800E9126_ovl_01;
extern s8 D_800E9127_ovl_01;
extern s32 D_80166270_ovl_15;
extern s16 D_80166272_ovl_15;
extern u16 D_80166274_ovl_15;

void func_80082230_ovl_01(void *, s32, s32);
s32 func_80077D48_ovl_01(s32, void *);
void func_80035AAC_ovl_01_108(void *);
void func_80083C44_ovl_01(s32);
void func_800838F0_ovl_01(void *, void *, void *, void *);
void func_80052C00_ovl_01(s32, s32);
void func_80052D40_ovl_01(s32, s32, s32, s32);
void func_80050F68_ovl_01(void *);
void func_80165B7C_ovl_15(void *, void *);
void func_8016573C_ovl_15(void *);
void func_80164C30_ovl_15(void *, s32);
void func_80077B0C_ovl_01(u32, void *);
s32 func_800837DC_ovl_01(void *, s32);
void func_80032B8C_ovl_01(void *, s32);
void func_80032F24_ovl_01(void *);

void func_80163A90_ovl_15(S_obj_80163A90 *arg0)
{
    u8 sp10[8];
    u8 *s2;
    u8 *s3;
    u8 *base;
    s16 st;
    u16 b;

    s3 = arg0->unk234;
    func_80082230_ovl_01(sp10, 0, 8);
    s2 = D_800E1C00;

    switch (arg0->unk6) {
    case 0:
        func_80077D48_ovl_01(4, arg0);
        func_80035AAC_ovl_01_108(arg0);
        base = D_800C7650_ovl_01 + 0x18000;
        *(u32 *)(base + 0x1A5C) |= 0x100;
        st = *(s16 *)(D_800C7650_ovl_01 + 0x215FC);
        if ((st == 6) || (st == 0xD)) {
            if (arg0->unk30 < -0x33F4) {
                arg0->unk2B4 |= 0x40;
                *(u32 *)(base + 0x1A80) |= 0x80400;
                func_80083C44_ovl_01(5);
                D_800E9127_ovl_01 = 1;
            } else {
                arg0->unk2B4 &= 0xFFBF;
            }
        } else {
            arg0->unk2B4 &= 0xFFBF;
        }
        base = D_800C7650_ovl_01 + 0x18000;
        *(u32 *)(base + 0x1A5C) |= 4;
        arg0->unk2C2 = 0xD;
        arg0->unk212 = 0xE5E;
        arg0->unk2C3 = 1;
        arg0->unk2C6 = 0;
        arg0->unk2C4 = 0;
        arg0->unk2C0 = 0;
arg0->unk2C3 = 1;
        arg0->unk2B4 |= 2;
        arg0->unk0 |= 0x80A;
        arg0->unk26F |= 0x80;
        *(u32 *)(s2 + 0x70) = (u32)D_800E8FC8_ovl_01;
        *(s32 *)(s2 + 0x28) = *(s32 *)(s2 + 0x58);
        *(s32 *)(s2 + 0x2C) = *(s32 *)(s2 + 0x5C);
        *(s32 *)(s2 + 0x30) = *(s32 *)(s2 + 0x60);
        func_800838F0_ovl_01(s2 + 0x28, s2 + 0x64, s2 + 0x44, sp10);
        func_80052C00_ovl_01(8, 3);
        func_80052D40_ovl_01(0x32, 0xFF, 0, 0);
        func_80050F68_ovl_01(s2);
        func_80165B7C_ovl_15(arg0, (u8 *)s3 + 0xA48);
        func_8016573C_ovl_15(arg0);
        D_800E9126_ovl_01 = 4;
        func_80164C30_ovl_15(arg0, 0);
        func_80077B0C_ovl_01(0x20F0001, &arg0->unk28);
        arg0->unk207 = 9;
        arg0->unk2C9 = 1;
        D_80166270_ovl_15 = (s16)arg0->unk66 + 0xA0;
        if ((s16)arg0->unk66 == 0xC00) {
            if (arg0->unk30 >= -0xBB7) {
                arg0->unk30 = -0xBB8;
            }
            if (arg0->unk1E8 == 2) {
                arg0->unk66 = arg0->unk66 + ((arg0->unk1E9 << 9) / 150);
            }
            if (arg0->unk1E8 == 3) {
                arg0->unk66 = ((arg0->unk1E9 << 9) / 150) + (arg0->unk66 + 0x200);
            }
        }
        if (arg0->unk28 >= -0x5AFE) {
            arg0->unk30 -= 0x3E8;
        }
        arg0->unk1E0 = -0x1F4;
        arg0->unk6 = arg0->unk6 + 1;
        D_80166274_ovl_15 = 0x28;
        /* fallthrough */
    case 1:
        if (func_80036764_ovl_01_510_24(arg0, 9, 0, 0)) {
            b = arg0->unk2B4;
            if (b & 0x40) {
                s32 a;
                arg0->unk2B4 = b & 0xFFBF;
                base = D_800C7650_ovl_01 + 0x18000;
                a = 6;
                if ((*(u32 *)(base + 0x1A5C) & 0x40000000) &&
                    func_800837DC_ovl_01(D_800E8E58_ovl_01, 0x10)) {
                    a = 0xD;
                }
                func_80083C44_ovl_01(a);
                D_800E9127_ovl_01 = 1;
                *(u32 *)(base + 0x1A80) &= 0xFFF7FBFF;
            }
            arg0->unk6 = arg0->unk6 + 1;
        }
        if (arg0->unk1E9 == 0x1F) {
            base = D_800C7650_ovl_01 + 0x18000;
            *(u32 *)(base + 0x1A5C) |= 4;
            arg0->unk2C3 = 1;
        }
        if ((s8)arg0->unk207 > 0) {
            arg0->unk207 = arg0->unk207 - 1;
        } else {
            *(u32 *)s2 = 0;
        }
        arg0->unk1E0 = arg0->unk1E0 + D_80166274_ovl_15;
        if (D_80166274_ovl_15 != 0) {
            D_80166274_ovl_15 -= 2;
        }
        func_80032B8C_ovl_01(arg0, 0x800);
        if (D_80166270_ovl_15 == 0xCA0) {
            if (arg0->unk28 != -0x64C8) {
                func_80036764_ovl_01_510_24(&arg0->unk28, -0x64C8, 0xC8, 0);
            }
        } else {
            if (arg0->unk30 != 0x258) {
                func_80036764_ovl_01_510_24(&arg0->unk30, 0x258, 0xC8, 0);
            }
        }
        func_80032F24_ovl_01(arg0);
        if ((s16)arg0->unk212 < 0xD97) {
            arg0->unk212 = 0xD96;
        } else {
            arg0->unk212 = arg0->unk212 - 0x14;
        }
        break;
    case 2:
        arg0->unk2B4 &= 0xFFFB;
        arg0->unk6 = arg0->unk6 + 1;
        break;
    case 3:
        arg0->unk1AA |= 0x4000;
        func_80083788_ovl_01((s32 *)(s2 + 0x70A0), 0x1E);
        arg0->unk2C6 = 0;
        arg0->unk2C4 = 0;
        arg0->unk2C0 = 0;
        D_800E9126_ovl_01 = 2;
        base = D_800C7650_ovl_01 + 0x18000;
        *(u32 *)(base + 0x1A5C) &= ~0x100;
        break;
    }
}
