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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_800377B0_ovl_01(s32, s16, s32, s16 *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80163D5C_ovl_32(void *arg0) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 temp_s0;
    s32 temp_s0_2;
    void *temp_a2;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x234);
    temp_a2 = temp_s0 + 0x2F0;
    sp10 = M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A4E) - M2C_FIELD(temp_a2, u16 *, 0x4E);
    sp12 = M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A52) - M2C_FIELD(temp_a2, u16 *, 0x52);
    temp_s0_2 = temp_s0 + 0x328;
    sp14 = M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A56) - M2C_FIELD(temp_a2, u16 *, 0x56);
    func_800377B0_ovl_01(0x05042710, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2, &sp10);
    func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 4) | 0x040F1000, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2, &sp10);
}
