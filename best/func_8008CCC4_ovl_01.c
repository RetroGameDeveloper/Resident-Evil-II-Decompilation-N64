extern s32 D_8012BE5C_ovl_01;
extern u8 D_8012BF40_ovl_01;
extern u8 D_8012BF38_ovl_01[];
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E8AF8_ovl_01[];

s32 func_800837DC_ovl_01(void *, s32);

s32 func_8008CCC4_ovl_01(s32 arg0)
{
    u8 idx;

    if (D_8012BE5C_ovl_01 != 0) {
        return 1;
    }
    if (arg0 == 0x12) {
        if (func_800837DC_ovl_01(D_800E8AF8_ovl_01, 0x12) != 0) {
            *(u32 *)(D_800C7650_ovl_01 + 0x1A5C + 0x18000) |= 0x800000;
        }
    }
    if (arg0 == 0xF) {
        idx = D_8012BF40_ovl_01;
        if (D_800C7650_ovl_01[(idx << 2) + 0x21819] == 0xFF) {
            *(u32 *)(D_800C7650_ovl_01 + 0x1A5C + 0x18000) |= 0x800000;
            return 1;
        }
    }
    if (arg0 == 0x11) {
        idx = D_8012BF40_ovl_01;
        if (D_800C7650_ovl_01[(idx << 2) + 0x21819] == 0xFF) {
            *(u32 *)(D_800C7650_ovl_01 + 0x1A5C + 0x18000) |= 0x800000;
            return 1;
        }
    }
    if (D_8012BF40_ovl_01 != 0x80) {
        if (func_800837DC_ovl_01(D_800E8AF8_ovl_01, arg0) != 0) {
            return 1;
        }
    }
    if (arg0 == 0xE) {
        if (D_8012BF38_ovl_01[8] == 0x80) {
            return 0;
        }
        return D_800C7650_ovl_01[(D_8012BF38_ovl_01[8] << 2) + 0x21819] >= 5;
    }
    if (D_8012BF38_ovl_01[8] == 0x80) {
        return 0;
    }
    return D_800C7650_ovl_01[(D_8012BF38_ovl_01[8] << 2) + 0x21819] != 0;
}
