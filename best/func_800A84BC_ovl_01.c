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

M2C_UNK func_800AC6D4_ovl_01(u8, u8, M2C_UNK);      /* extern */

void func_800A84BC_ovl_01(void *arg0) {
    s32 temp_a0;
    u8 temp_v1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x24);
    if (!(temp_a0 & 0x80000)) {
        if ((M2C_FIELD(arg0, u8 *, 0x98) == 1) && !(temp_a0 & 0x2000)) {
            M2C_FIELD(arg0, s32 *, 0x8C) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x8C) = (s32) M2C_FIELD(arg0, s32 *, 0x90);
        }
        M2C_FIELD(arg0, s32 *, 0x94) = (s32) (M2C_FIELD(arg0, u8 *, 0xC1) << 0x10);
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x4A);
    if (temp_v1 != 0xFF) {
        func_800AC6D4_ovl_01(temp_v1, M2C_FIELD(arg0, u8 *, 0x4B), 1);
    }
}
