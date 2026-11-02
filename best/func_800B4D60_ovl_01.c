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

M2C_UNK func_800B65D4_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */

void func_800B4D60_ovl_01(void *arg0, void *arg1, M2C_UNK arg2, M2C_UNK arg3) {
    s32 temp_v0;
    s32 temp_v1;
    void *temp_t0;

    temp_t0 = arg0 + ((M2C_FIELD(arg0, s16 *, 0x188) * 0x10) + 0x168);
    temp_v0 = (M2C_FIELD(arg1, s16 *, 0) - 0x20) * 0xCC00;
    M2C_FIELD(temp_t0, s16 *, 0) = (s16) (((s32) (temp_v0 + (temp_v0 << 8) + 0x4000) >> 0xF) * 2);
    temp_v1 = (M2C_FIELD(arg1, s16 *, 2) - 0x20) * 0xCC00;
    M2C_FIELD(temp_t0, s16 *, 2) = (s16) (((s32) (temp_v1 + (temp_v1 << 8) + 0x4000) >> 0xF) * 2);
    M2C_FIELD(temp_t0, s16 *, 4) = (s16) (((s32) ((((M2C_FIELD(arg1, s16 *, 4) << 0xA) - 0x5000) * 0x3333) + 0x4000) >> 0xF) * 2);
    M2C_FIELD(temp_t0, s16 *, 6) = (s16) (((s32) ((((M2C_FIELD(arg1, s16 *, 6) << 0xA) - 0x2C00) * 0x3333) + 0x4000) >> 0xF) * 2);
    M2C_FIELD(temp_t0, s16 *, 8) = (s16) (((s32) ((((M2C_FIELD(arg1, s16 *, 8) << 0xA) - 0x20BC) * 0x4B17) + 0x4000) >> 0xF) * 2);
    M2C_FIELD(temp_t0, s16 *, 0xA) = (s16) (((s32) ((((M2C_FIELD(arg1, s16 *, 0xA) << 0xA) - 0x1200) * 0x4444) + 0x4000) >> 0xF) * 2);
    M2C_FIELD(temp_t0, s16 *, 0xC) = (s16) (((s32) (((((M2C_FIELD(arg1, s16 *, 0xC) - 4) << 0xA) + 0x2AA) * 0x7ADE) + 0x4000) >> 0xF) * 2);
    M2C_FIELD(temp_t0, s16 *, 0xE) = (s16) (((s32) ((((M2C_FIELD(arg1, s16 *, 0xE) << 0xA) - 0x710) * 0x740C) + 0x4000) >> 0xF) * 2);
    func_800B65D4_ovl_01(arg0, arg2, arg3);
    M2C_FIELD(arg0, s16 *, 0x188) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x188) ^ 1);
}
