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

s32 func_8017BE48_ovl_02(M2C_UNK);                  /* extern */
M2C_UNK func_80180228_ovl_02(void *, M2C_UNK, s32, s32, s32, s32, s32); /* extern */

void func_801800D0_ovl_02(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    s32 temp_s1;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_v1;

    if (arg4 == 1) {
        if ((arg5 == 0) && (arg8 == 0)) {
            temp_v0 = func_8017BE48_ovl_02(1);
            temp_v1 = (arg3 * 4) + arg2;
            M2C_FIELD(temp_v1, s32 *, 0) = temp_v0;
            M2C_FIELD(temp_v1, s32 *, 8) = temp_v0;
        }
        temp_s0 = arg0 + (arg3 * 8);
        func_80180228_ovl_02(temp_s0, arg1, arg6, arg7, arg8, arg9, 0);
        M2C_FIELD(temp_s0, s32 *, 0x10) = (s32) M2C_FIELD(temp_s0, s32 *, 0);
        M2C_FIELD(temp_s0, s32 *, 0x14) = (s32) M2C_FIELD(temp_s0, s32 *, 4);
        return;
    }
    temp_s1 = arg3 * 8;
    temp_s0_2 = (arg3 * 4) + arg2;
    M2C_FIELD(temp_s0_2, s32 *, 0) = func_8017BE48_ovl_02(1);
    func_80180228_ovl_02(arg0 + temp_s1, arg1, arg6, arg7, arg8, arg9, 0);
    M2C_FIELD(temp_s0_2, s32 *, 8) = func_8017BE48_ovl_02(1);
    func_80180228_ovl_02(arg0 + (temp_s1 + 0x10), arg1, arg6, arg7, arg8, arg9, 0);
}
