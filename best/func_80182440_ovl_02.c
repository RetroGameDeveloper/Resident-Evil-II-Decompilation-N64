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

M2C_UNK func_80182640_ovl_02(s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_801826FC_ovl_02(s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_80182778_ovl_02(s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_80182934_ovl_02(s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_80182A30_ovl_02(s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_80182BA8_ovl_02(s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_80182C80_ovl_02(s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_80182EF8_ovl_02(s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_80183050_ovl_02(s32, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_80183218_ovl_02(s32, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_80183320_ovl_02(s32, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_801835E8_ovl_02(s32, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_80183770_ovl_02(s32, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_801839C0_ovl_02(s32, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_80183B10_ovl_02(s32, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_80183E24_ovl_02(s32, s32, s32, M2C_UNK, s32); /* extern */

void func_80182440_ovl_02(s32 arg0, s32 arg1, s32 arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_t3;

    temp_t3 = arg9 & 1;
    temp_a0 = arg0 + (arg2 * (arg7 + (arg9 >> 1))) + arg6 + (arg8 >> 1);
    temp_a1 = arg1 + (arg2 * arg7) + arg6;
    if (!(arg8 & 1)) {
        if (temp_t3 == 0) {
            if (arg10 != 0) {
                if (arg4 != 8) {
                    func_80182778_ovl_02(temp_a0, temp_a1, arg3, arg5);
                    return;
                }
                func_80182934_ovl_02(temp_a0, temp_a1, arg3, arg5);
                return;
            }
            if (arg4 != 8) {
                func_80182640_ovl_02(temp_a0, temp_a1, arg3, arg5);
                return;
            }
            func_801826FC_ovl_02(temp_a0, temp_a1, arg3, arg5);
            return;
        }
        if (arg10 != 0) {
            if (arg4 != 8) {
                func_80183320_ovl_02(temp_a0, temp_a1, arg2, arg3, arg5);
                return;
            }
            func_801835E8_ovl_02(temp_a0, temp_a1, arg2, arg3, arg5);
            return;
        }
        if (arg4 != 8) {
            func_80183050_ovl_02(temp_a0, temp_a1, arg2, arg3, arg5);
            return;
        }
        func_80183218_ovl_02(temp_a0, temp_a1, arg2, arg3, arg5);
        return;
    }
    if (temp_t3 == 0) {
        if (arg10 != 0) {
            if (arg4 != 8) {
                func_80182C80_ovl_02(temp_a0, temp_a1, arg3, arg5);
                return;
            }
            func_80182EF8_ovl_02(temp_a0, temp_a1, arg3, arg5);
            return;
        }
        if (arg4 != 8) {
            func_80182A30_ovl_02(temp_a0, temp_a1, arg3, arg5);
            return;
        }
        func_80182BA8_ovl_02(temp_a0, temp_a1, arg3, arg5);
        return;
    }
    if (arg10 != 0) {
        if (arg4 != 8) {
            func_80183B10_ovl_02(temp_a0, temp_a1, arg2, arg3, arg5);
            return;
        }
        func_80183E24_ovl_02(temp_a0, temp_a1, arg2, arg3, arg5);
        return;
    }
    if (arg4 != 8) {
        func_80183770_ovl_02(temp_a0, temp_a1, arg2, arg3, arg5);
        return;
    }
    func_801839C0_ovl_02(temp_a0, temp_a1, arg2, arg3, arg5);
}
