/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_800824A4_ovl_01(M2C_UNK *, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80083800_ovl_01(s16, s16 *, s16 *);    /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80131720_ovl_01;
extern M2C_UNK D_80131728_ovl_01;

void func_8009AF50_ovl_01(void) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 var_v0;
    u32 temp_v1_4;
    u32 temp_v1_5;
    u32 var_v1;
    u8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_s0;
    void *temp_s1;

    temp_s1 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x2C) + (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC) * 0x28);
    func_800824A4_ovl_01(&D_80131728_ovl_01, temp_s1, 0x28, 0x18000);
    temp_s0 = &D_80131728_ovl_01 - 8;
    M2C_FIELD(temp_s1, s8 *, 3) = 0;
    M2C_FIELD(temp_s1, s16 *, 0x26) = 1;
    if (!(M2C_FIELD(temp_s0, u8 *, 1) & 0x10)) {
        sp10 = 0x4B0;
        sp12 = 0;
        sp14 = 0;
        func_80083800_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AE6), &sp10, &sp10);
        M2C_FIELD(temp_s0, s32 *, 0x34) = -0x960;
        M2C_FIELD(temp_s0, u8 *, 3) = 0xFFU;
        M2C_FIELD(temp_s0, u8 *, 4) = 0xE6U;
        M2C_FIELD(temp_s0, u8 *, 5) = 0xA0U;
        M2C_FIELD(temp_s0, s32 *, 0x30) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8) + sp10);
        M2C_FIELD(temp_s0, s32 *, 0x38) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0) + sp14);
    }
    temp_v1 = M2C_FIELD(temp_s0, u8 *, 2);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 3);
        if ((u8) M2C_FIELD(temp_s1, u8 *, 0xA) < temp_v1_2) {
            M2C_FIELD(temp_s1, u8 *, 0xA) = temp_v1_2;
        }
        temp_v1_3 = M2C_FIELD(temp_s0, u8 *, 4);
        if ((u8) M2C_FIELD(temp_s1, u8 *, 0xB) < temp_v1_3) {
            M2C_FIELD(temp_s1, u8 *, 0xB) = temp_v1_3;
        }
        var_v1 = (u32) M2C_FIELD(temp_s0, u8 *, 5);
        var_v0 = (u8) M2C_FIELD(temp_s1, u8 *, 0xC) < var_v1;
block_15:
        if (var_v0 != 0) {
            M2C_FIELD(temp_s1, u8 *, 0xC) = (u8) var_v1;
        }
        M2C_FIELD(temp_s0, u8 *, 2) = (u8) (M2C_FIELD(temp_s0, u8 *, 2) + 1);
        break;
    case 1:
        temp_v1_4 = (u8) M2C_FIELD(temp_s0, u8 *, 3) >> 1;
        if ((u8) M2C_FIELD(temp_s1, u8 *, 0xA) < temp_v1_4) {
            M2C_FIELD(temp_s1, u8 *, 0xA) = (u8) temp_v1_4;
        }
        temp_v1_5 = (u8) M2C_FIELD(temp_s0, u8 *, 4) >> 1;
        if ((u8) M2C_FIELD(temp_s1, u8 *, 0xB) < temp_v1_5) {
            M2C_FIELD(temp_s1, u8 *, 0xB) = (u8) temp_v1_5;
        }
        var_v1 = (u8) M2C_FIELD(temp_s0, u8 *, 5) >> 1;
        var_v0 = (u8) M2C_FIELD(temp_s1, u8 *, 0xC) < var_v1;
        goto block_15;
    }
    M2C_FIELD(temp_s1, u16 *, 0x1C) = (u16) M2C_FIELD(&D_80131720_ovl_01, u16 *, 0x32);
    M2C_FIELD(temp_s1, u16 *, 0x1E) = (u16) M2C_FIELD(&D_80131720_ovl_01, u16 *, 0x36);
    M2C_FIELD(temp_s1, s16 *, 0x26) = 0x1770;
    M2C_FIELD(temp_s1, u16 *, 0x20) = (u16) M2C_FIELD(&D_80131720_ovl_01, u16 *, 0x3A);
}
