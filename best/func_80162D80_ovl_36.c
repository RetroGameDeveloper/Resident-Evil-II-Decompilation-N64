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

s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
M2C_UNK func_800377B0_ovl_01(s32, s16, M2C_UNK *, u16 *); /* extern */
extern M2C_UNK D_800E10D0_ovl_01;
extern M2C_UNK D_800E8FC8_ovl_01;
extern M2C_UNK D_80163030_ovl_36;

void func_80162D80_ovl_36(void *arg0, s32 arg1, s32 arg2) {
    u16 sp10;
    u16 sp12;
    u16 sp14;
    s16 temp_a1;
    void *temp_a3;
    void *temp_s0;

    temp_s0 = (char *)(((arg2 & 0xFF) * 6)); temp_s0 += (s32)(&D_80163030_ovl_36);
    temp_a1 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x2A), M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x32));
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x234) + ((arg1 & 0xFF) * 0x178);
    sp10 = M2C_FIELD(temp_a3, u16 *, 0x4E);
    sp12 = M2C_FIELD(temp_a3, u16 *, 0x52);
    sp14 = M2C_FIELD(temp_a3, u16 *, 0x56);
    func_800377B0_ovl_01(((M2C_FIELD(temp_s0, u8 *, 0) & 0x7F) << 0x18) | ((M2C_FIELD(temp_s0, u8 *, 1) + M2C_FIELD(temp_s0, u16 *, 2)) << 0x10) | M2C_FIELD(temp_s0, u16 *, 4), temp_a1, &D_800E8FC8_ovl_01, &sp10);
}
