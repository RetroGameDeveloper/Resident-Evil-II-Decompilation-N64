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

extern f64 D_800BA668_ovl_01;
extern s32 D_80143EAC;

void func_800A58BC_ovl_01(s32 arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = (arg0 * 0x68) + D_80143EAC;
    M2C_FIELD(temp_v0, u16 *, 0x20) = (u16) M2C_FIELD(arg1, u16 *, 0);
    M2C_FIELD(temp_v0, u16 *, 0x22) = (u16) M2C_FIELD(arg1, u16 *, 2);
    M2C_FIELD(temp_v0, f32 *, 0x24) = (f32) ((f64) (f32) M2C_FIELD(arg1, u16 *, 4) * D_800BA668_ovl_01);
    M2C_FIELD(temp_v0, u16 *, 0x28) = (u16) M2C_FIELD(arg1, u16 *, 6);
}
