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

s32 func_80040BE4_ovl_01(s32, s32);                 /* extern */
s32 func_80166CE4_ovl_26(void *, s32, s32, s16);    /* extern */
extern M2C_UNK D_800E10D0_ovl_01;

s32 func_80166F04_overlay_026(void *arg0, u32 arg1, s16 arg2, s32 *arg3) {
    s16 temp_s2;
    s32 temp_a1;
    s32 temp_s3;
    s32 temp_s4;
    
    s32 temp_v0_2;
    s32 temp_v0_3;
    void *temp_v1;

    temp_s4 = M2C_FIELD(arg0, s32 *, 0x28);
    temp_s3 = M2C_FIELD(arg0, s32 *, 0x30);
    temp_s2 = M2C_FIELD(arg0, s16 *, 0x66);
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x234) + (arg1 * 0x178);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(temp_v1, s32 *, 0x4C);
    temp_a1 = arg1 < 9U;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(temp_v1, s32 *, 0x54);
    if (temp_a1 == 0) {
        M2C_FIELD(arg0, s16 *, 0x66) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x66) + M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x234) + (M2C_FIELD(arg0, u8 *, 0x25D) * 0x178)), u16 *, 0x130));
    }
    temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x28);
    temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x30) - M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x30);
    *arg3 = func_80040BE4_ovl_01((temp_v0_2 * temp_v0_2) + (temp_v0_3 * temp_v0_3), temp_a1);
    temp_v0_3 = func_80166CE4_ovl_26(arg0, M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x28), M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x30), arg2) << 0x10;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_s4;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_s3;
    M2C_FIELD(arg0, s16 *, 0x66) = temp_s2;
    return temp_v0_3 >> 0x10;
}
