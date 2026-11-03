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

M2C_UNK func_800377B0_ovl_01(s32, s16, M2C_UNK *, u16 *); /* extern */
M2C_UNK func_8004279C_ovl_01(s32, s32, u16 *);      /* extern */
extern M2C_UNK D_800E8FC8;

void func_8016F400_overlay_051(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x234) + (arg5 * 0x178);
    func_8004279C_ovl_01(temp_s0 + 0x38, arg6, &sp10);
    sp10 += M2C_FIELD(temp_s0, u16 *, 0x4E);
    sp12 += M2C_FIELD(temp_s0, u16 *, 0x52);
    sp14 += M2C_FIELD(temp_s0, u16 *, 0x56);
    func_800377B0_ovl_01((arg1 << 0x18) | (arg2 << 0x10) | arg3, (s16) arg4, &D_800E8FC8, &sp10);
}
