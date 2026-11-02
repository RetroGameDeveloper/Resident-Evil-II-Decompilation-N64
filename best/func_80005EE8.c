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

u32 func_8000521C(s32);                             /* extern */
extern u32 D_800128AC;
extern s32 D_800C5278;

u32 func_80005EE8(s32 arg0, u32 arg1) {
    s32 temp_a0;
    u32 temp_v0;

    temp_a0 = arg0 & 0xFFFF;
    if (temp_a0 == 0xFFFF) {
        return arg1;
    }
    D_800128AC = D_800C5278 + 0xAF800;
    temp_v0 = func_8000521C(temp_a0);
    if ((u32) D_800128AC < temp_v0) {
        M2C_BREAK(0);
    }
    return temp_v0;
}
