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

M2C_UNK func_800377B0_ovl_01(s32, s16, s32, s16 *); /* extern */
extern M2C_UNK D_8017092C_overlay_055;

void func_801706C8_overlay_055(void *arg0, s32 arg1, s32 arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    void *temp_v1;

    temp_v1 = ((arg2 & 0xFF) * 6) + &D_8017092C_overlay_055;
    sp10 = 0;
    sp12 = 0;
    sp14 = 0;
    func_800377B0_ovl_01((M2C_FIELD(temp_v1, u8 *, 0) << 0x18) | (M2C_FIELD(temp_v1, u8 *, 1) << 0x10) | M2C_FIELD(temp_v1, u16 *, 4), M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, s32 *, 0x234) + ((arg1 & 0xFF) * 0x178) + 0x38, &sp10);
}
