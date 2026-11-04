/* identical to func_80163664_ovl_21 (matched), with its names changed by decompdecomp */
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
M2C_UNK func_800377B0_ovl_01(s32, s32, s32, M2C_UNK *); /* extern */
M2C_UNK func_80082230_ovl_01(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */

void func_801701F4_overlay_049(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK sp10;
    s32 temp_s3;

    temp_s3 = M2C_FIELD(arg0, s32 *, 0x234);
    func_80082230_ovl_01(&sp10, 0, 8);
    func_800377B0_ovl_01((arg1 << 0x18) | (arg2 << 0x10) | arg3, (s32) (func_80033634_ovl_01() << 0x18) >> 0x14, temp_s3 + 0x38, &sp10);
}
