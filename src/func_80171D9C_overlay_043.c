/* identical to func_801627F0_ovl_23 (matched), with its names changed by decompdecomp */
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

s32 func_80033634_ovl_01();                         /* extern */

u32 func_80171D9C_overlay_043(s32 arg0, u32 *arg1, u32 *arg2) {
    u32 temp_s0;
    u32 temp_v0;
    u32 temp_v1;
    u32 temp_v1_2;

    temp_v1_2 = *arg1;
    if ((temp_v1_2 >= 0x21U) || (temp_v0 = temp_v1_2 - 1, *arg1 = temp_v0, (temp_v0 == 0))) {
        temp_s0 = arg0 & 0xFF;
        *arg1 = temp_s0;
        *arg2 = 0x80000000U >> ((u32) (func_80033634_ovl_01() & 0xFF) % temp_s0);
    }
    temp_v1 = *arg2;
    *arg2 = temp_v1 * 2;
    return temp_v1 >> 0x1F;
}
