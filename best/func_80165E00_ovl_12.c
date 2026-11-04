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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80032C08_ovl_01();
s32 func_80089D34_ovl_01();

void func_80165E00_ovl_12(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_a0;
    void *temp_s1;

    temp_s1 = arg0 + 0x2B4;
    func_80032C08_ovl_01(arg0, 0, 0);
    if (M2C_FIELD(temp_s1, u8 *, 1) != 0) {
        if ((M2C_FIELD(arg0, u8 *, 7) == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x578U)) {
            M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
            M2C_FIELD(arg0, u8 *, 7) = 1U;
        }
        temp_a0 = M2C_FIELD(arg0, s16 *, 0x25E);
        M2C_FIELD(arg0, u16 *, 0x1E2) += 0x28;
        if (M2C_FIELD(arg0, s32 *, 0x2C) >= temp_a0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_a0;
            M2C_FIELD(arg0, u16 *, 0x1E2) = 0U;
            M2C_FIELD(temp_s1, u8 *, 1) = 0U;
            M2C_FIELD(arg0, u8 *, 7) = 0U;
        }
        if (M2C_FIELD(arg0, u8 *, 0x1E9) != 3) {
            func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        }
    } else if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x200) != 0) {
        if (M2C_FIELD(arg0, u8 *, 7) == 0) {
            M2C_FIELD(arg0, u8 *, 7) = 1U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x1EA) << 8) + 0x12000000);
            return;
        }
        M2C_FIELD(arg0, s32 *, 4) = 0x07000000;
    }
}
