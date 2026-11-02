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

M2C_UNK func_8003997C_ovl_01(s32, s32, M2C_UNK);    /* extern */
M2C_UNK func_800479F8_ovl_01(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8017E18C_ovl_10(M2C_UNK);              /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern s8 D_8017E6B4_ovl_10;
extern M2C_UNK D_8017E864_ovl_10;

void func_8017E0D0_ovl_10(void) {
    s32 temp_a0;

    if (!(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x100) && (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x10000000) && (M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D3C), u8 *, 4) == 3)) {
        D_8017E6B4_ovl_10 = 1;
    }
    func_800479F8_ovl_01(D_800C527C_ovl_01 + 0x3B800, &D_8017E864_ovl_10, 0x14CF, 0);
    temp_a0 = M2C_FIELD(&D_8017E864_ovl_10, s32 *, 0x18) + 0x200;
    func_8003997C_ovl_01(temp_a0, temp_a0, 0x100);
    func_8017E18C_ovl_10(0xC68);
}
