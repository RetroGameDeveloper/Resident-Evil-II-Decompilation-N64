/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s32, void *, s16 *); /* extern */
M2C_UNK func_80038EC8_ovl_01(M2C_UNK, M2C_UNK, void *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80168B4C_ovl_11(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp18;
    s16 sp1A;
    s16 sp1C;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 temp_v0;
    u8 temp_v1;
    void *temp_a2;
    void *temp_a3;
    void *temp_a3_2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s0_3;
    void *temp_t0;
    void *temp_t0_2;
    void *temp_t0_3;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000F00;
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        M2C_FIELD(arg0, s8 *, 0x1E9) = (s8) (func_80033634_ovl_01() & 7);
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        if (M2C_FIELD(arg0, u8 *, 5) != 0xC) {
            temp_v0 = func_80033634_ovl_01() & 1;
            M2C_FIELD(arg0, s8 *, 0x207) = temp_v0;
            if (temp_v0 != 0) {
                temp_a2 = M2C_FIELD(arg0, void **, 0x234);
                var_v1 = M2C_FIELD(temp_a2, s32 *, 0x468);
                temp_t0 = temp_a2 + 0x468;
                if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21962) & 8) {
                    var_v1 |= 0x4A;
                }
                M2C_FIELD(temp_a2, s32 *, 0x468) = var_v1;
                M2C_FIELD(temp_t0, s16 *, 0x138) = 0;
                M2C_FIELD(temp_t0, s16 *, 0x134) = 0;
                M2C_FIELD(temp_t0, s16 *, 0x132) = -0xA;
                M2C_FIELD(temp_t0, s16 *, 0x136) = 0;
                M2C_FIELD(temp_t0, s16 *, 0x13C) = 0;
                M2C_FIELD(temp_t0, s32 *, 0x60) = 0x10104F;
                M2C_FIELD(temp_t0, s16 *, 0x130) = (s16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x800);
                func_80038EC8_ovl_01(5, 3, temp_a2 + 0x4A0);
                M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x5E0) = 0;
                func_80077D48_ovl_01(2, arg0);
                if (func_80033634_ovl_01() & 1) {
                    temp_a3 = M2C_FIELD(arg0, void **, 0x234);
                    var_v1_2 = M2C_FIELD(temp_a3, s32 *, 0x758);
                    temp_t0_2 = temp_a3 + 0x758;
                    if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21962) & 8) {
                        var_v1_2 |= 0x4A;
                    }
                    temp_s0 = temp_a3 + 0x790;
                    M2C_FIELD(temp_a3, s32 *, 0x758) = var_v1_2;
                    M2C_FIELD(temp_t0_2, s16 *, 0x138) = 0;
                    M2C_FIELD(temp_t0_2, s16 *, 0x134) = 0;
                    M2C_FIELD(temp_t0_2, s16 *, 0x132) = -0xA;
                    M2C_FIELD(temp_t0_2, s16 *, 0x136) = 0;
                    M2C_FIELD(temp_t0_2, s16 *, 0x13C) = 0;
                    M2C_FIELD(temp_t0_2, s32 *, 0x60) = 0x10104F;
                    M2C_FIELD(temp_t0_2, s16 *, 0x130) = (s16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x800);
                    func_800377B0_ovl_01(0x1770, 0, temp_s0, NULL);
                    func_800377B0_ovl_01(0x08001000, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0, NULL);
                    func_80038EC8_ovl_01(5, 3, temp_s0);
                    temp_a3_2 = M2C_FIELD(arg0, void **, 0x234);
                    var_v1_3 = M2C_FIELD(temp_a3_2, s32 *, 0x8D0);
                    temp_t0_3 = temp_a3_2 + 0x8D0;
                    if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21962) & 8) {
                        var_v1_3 |= 0x4A;
                    }
                    temp_s0_2 = temp_a3_2 + 0x908;
                    M2C_FIELD(temp_a3_2, s32 *, 0x8D0) = var_v1_3;
                    M2C_FIELD(temp_t0_3, s16 *, 0x138) = 0;
                    M2C_FIELD(temp_t0_3, s16 *, 0x134) = 0;
                    M2C_FIELD(temp_t0_3, s16 *, 0x132) = -0xA;
                    M2C_FIELD(temp_t0_3, s16 *, 0x136) = 0;
                    M2C_FIELD(temp_t0_3, s16 *, 0x13C) = 0;
                    M2C_FIELD(temp_t0_3, s32 *, 0x60) = 0x10104F;
                    M2C_FIELD(temp_t0_3, s16 *, 0x130) = (s16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x800);
                    func_800377B0_ovl_01(0x1770, 0, temp_s0_2, NULL);
                    func_80038EC8_ovl_01(5, 3, temp_s0_2);
                    M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0xA48) = 0;
                }
            }
            sp18 = 0;
            sp1A = 0;
            sp1C = 0;
            temp_s0_3 = M2C_FIELD(arg0, void **, 0x234) + 0x4A0;
            func_800377B0_ovl_01(0x1388, 0, temp_s0_3, &sp18);
            sp1A = 0x190;
            func_800377B0_ovl_01(0x1770, (func_80033634_ovl_01() & 0xFF) * 4, temp_s0_3, &sp18);
            sp1A = 0x320;
            func_800377B0_ovl_01(0xFA0, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0_3, &sp18);
            func_800377B0_ovl_01(0x08001000, (func_80033634_ovl_01() & 0xFF) * 0x10, temp_s0_3, NULL);
        }
        if (M2C_FIELD(arg0, u8 *, 0x2D5) == 0) {
            func_80077D48_ovl_01(0xC, arg0);
            M2C_FIELD(arg0, u8 *, 0x2D5) = 0x96U;
        }
        func_80035AAC_ovl_01_108(arg0);
        /* fallthrough */
    case 1:
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + func_80089D34_ovl_01(arg0, arg1, arg2, 0x100));
        func_80032B8C_ovl_01(arg0, 0);
        return;
    case 2:
        if (M2C_FIELD(arg0, u8 *, 4) == 3) {
            if ((func_80033634_ovl_01() & 3) || (M2C_FIELD(arg0, s8 *, 0x207) == 0)) {
                M2C_FIELD(arg0, s16 *, 0x1F2) = 0xA;
                goto block_28;
            }
            goto block_30;
        }
block_28:
        if ((M2C_FIELD(arg0, s16 *, 0x1A8) != 0) || (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x10000000)) {
block_30:
            M2C_FIELD(arg0, u8 *, 4) = 0x07000000;
            M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) & 0xFFFB);
            return;
        }
        M2C_FIELD(arg0, s16 *, 0x136) = 0xC8;
        M2C_FIELD(arg0, s16 *, 0x138) = 0xC8;
        M2C_FIELD(arg0, s16 *, 0x12C) = 0xC8;
        M2C_FIELD(arg0, s16 *, 0x12E) = 0xC8;
        M2C_FIELD(arg0, s16 *, 0x134) = -0x15E;
        M2C_FIELD(arg0, s16 *, 0x13A) = 0x15E;
        M2C_FIELD(arg0, s16 *, 0x1AA) = 0x2001;
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xF3FFFFFF) | 0x04000000);
        var_v0 = 0x01000000;
        if (!(func_80033634_ovl_01() & 1)) {
            var_v0 = 0x01020000;
        }
        M2C_FIELD(arg0, u8 *, 4) = var_v0;
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
        return;
    }
}
