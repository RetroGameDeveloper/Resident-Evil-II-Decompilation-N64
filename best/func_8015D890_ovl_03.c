/* func_8015D890_ovl_03 - ovl_03 */
s32 func_800275F8_ovl_01(s32, s16, s32, s32);
s32 func_800276B4_ovl_01(s32);
s32 func_80077B0C_ovl_01(s32, s32);
s32 func_8015F95C_ovl_03(s32, s32, s32);
extern u8 D_800C7650_ovl_01[];
extern u8 D_80160B9C_ovl_03[];

void func_8015D890_ovl_03(void) {
    u8 *s0;
    u8 *b;
    s32 off;
    u8 st;

    func_800275F8_ovl_01(3, 0x7C00, 0, 0);
    s0 = D_80160B9C_ovl_03;
    st = s0[2];
    off = 0x18000;
    if (st == 0) {
        s0[0xA] += 2;
        func_8015F95C_ovl_03(0, s0[0xA], 0);
        if ((s8)s0[0xA] < 0) {
            s0[0xA] = 0x80;
            s0[2] = s0[2] + 1;
        }
    } else if (st == 1) {
        s0[0xB] += 1;
        func_8015F95C_ovl_03(s0[0xB], 0x80, 0);
        if ((s8)s0[0xB] < 0) {
            s0[0xB] = 0x80;
            *(s16 *)(s0 + 0x12) = -0x100;
            *(s16 *)(s0 + 0x10) = 0x5A00;
            s0[2] = s0[2] + 1;
        }
    } else if (st == 2) {
        func_8015F95C_ovl_03(0x80, 0x80, 0);
        *(s16 *)(s0 + 0x10) += *(s16 *)(s0 + 0x12);
        func_800275F8_ovl_01(3, *(s16 *)(s0 + 0x10), 0, 0);
        if (func_800276B4_ovl_01(3) != 0) {
            func_80077B0C_ovl_01(0x04060000, 0);
            *(s16 *)(s0 + 0x12) = 0;
            *(s16 *)(s0 + 0x10) = -1;
            s0[1] = 1;
        }
    }
    b = D_800C7650_ovl_01 + off;
    if (*(u16 *)(b + 0x25E) & 0x9FF) {
        func_80077B0C_ovl_01(0x04060000, 0);
        *(s16 *)(D_80160B9C_ovl_03 + 0x12) = -0x1000;
        D_80160B9C_ovl_03[1] = D_80160B9C_ovl_03[1] + 1;
        if (*(s16 *)(D_80160B9C_ovl_03 + 0x10) == 0) {
            *(s16 *)(D_80160B9C_ovl_03 + 0x10) = 0x5A00;
        }
    }
}
