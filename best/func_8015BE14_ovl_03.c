extern u8 D_800C7650_ovl_01[];
extern u8 D_80160B9C_ovl_03[];
extern u8 D_80160BA2_ovl_03;
extern s32 D_80161460_ovl_03;
extern s32 D_80161464_ovl_03;
extern u8 D_80161467_ovl_03;

void func_80052C00_ovl_01(s32 arg0, s32 arg1);
void func_80052C9C_ovl_01(s32 arg0, s32 arg1, s32 arg2);
void func_80052D40_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_80077B0C_ovl_01(s32 arg0, s32 arg1);
void func_8015E2EC_ovl_03(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_8015E5E8_ovl_03(s32 arg0);

#define G16(o) (*(u16 *)((u8 *)D_800C7650_ovl_01 + 0x18000 + (o)))
#define G32(o) (*(u32 *)((u8 *)D_800C7650_ovl_01 + 0x18000 + (o)))

void func_8015BE14_ovl_03(void) {
    u8 *p = D_80160B9C_ovl_03;

    switch (p[3]) {
    case 0:
        p[0xA] = 0x80;
        p[8] = 2;
        p[9] = 0;
        p[0xB] = 0;
        p[7] = 0;
        D_80161460_ovl_03 = 0;
        p[3] = 1;
        D_80161464_ovl_03 = p[0xD];
        /* fall through */
    case 1:
        p[0xA] = p[0xA] - 0x10;
        {
            u8 v = p[9] + 1;
            p[9] = v;
            p[0xB] = p[0xB] + 0x10;
            if (v == 8) {
                p[0xA] = 0;
                p[0xB] = 0x80;
                p[3] = p[3] + 1;
            }
        }
        break;
    case 2:
        if (G16(0x25E) & 0x4000) {
            if (p[6] == 0) {
                p[6] = p[6] + 1;
                func_80077B0C_ovl_01(0x04040000, 0);
            }
        }
        if (G16(0x25E) & 0x1000) {
            if (p[6] != 0) {
                p[6] = p[6] - 1;
                func_80077B0C_ovl_01(0x04040000, 0);
                goto block17;
            }
            goto block18;
        }
block17:
        if (D_80160BA2_ovl_03 != 0) {
            goto block24;
        }
block18:
        if (G16(0x25E) & 0x8000) {
            if (p[0xD] == 1) {
                p[0xD] = 0;
                func_80077B0C_ovl_01(0x04040000, 0);
            }
        }
        if (G16(0x25E) & 0x2000) {
            if (p[0xD] == 0) {
                p[0xD] = 1;
                func_80077B0C_ovl_01(0x04040000, 0);
            }
        }
block24:
        {
            u8 v = p[7] + p[8];
            p[7] = v;
            if ((u8)(v - 1) >= 0x30) {
                p[8] = (u8)-(p[8] & 0xFF);
            }
        }
        if (G32(0x268) & 0x2000) {
            func_80077B0C_ovl_01(0x04050000, 0);
            p[3] = 3;
            p[0xD] = D_80161467_ovl_03;
        }
        if ((G32(0x268) & 0x1000) || (G32(0x258) & 0x800)) {
            if (p[6] == 1) {
                func_80077B0C_ovl_01(0x04050000, 0);
                p[3] = 3;
                p[0xD] = 0;
                break;
            }
            if (p[0xD] == 1) {
                G32(0x1A3C) = G32(0x1A3C) | 0x20;
            }
            p[5] = 1;
            p[2] = 3;
            func_80077B0C_ovl_01(0x04060000, 0);
            func_80052C00_ovl_01(7, 0);
            func_80052C9C_ovl_01(9, 0xFF, 0);
            func_80052D40_ovl_01(4, 0xFF, 0x3C, 0xA);
        }
        break;
    case 3:
        D_80161460_ovl_03 = 1;
        p[7] = 0;
        p[0xA] = p[0xA] + 0x10;
        p[0xB] = p[0xB] - 0x10;
        {
            u8 v = p[9] - 1;
            p[9] = v;
            if (v == 0) {
                p[0xA] = 0x80;
                p[0xB] = 0;
                p[6] = 1;
                p[2] = 0;
                p[3] = 0;
            }
        }
        break;
    }
    func_8015E5E8_ovl_03(D_80160BA2_ovl_03);
    func_8015E2EC_ovl_03(1, 1, 0x1B, D_80161460_ovl_03);
}
