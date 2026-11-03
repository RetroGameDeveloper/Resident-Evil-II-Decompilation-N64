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
M2C_UNK func_800377B0_ovl_01(s32, s16, s32, M2C_UNK); /* extern */

void func_801734EC_overlay_056(void *arg0) {
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s2_3;
    s32 temp_s2_4;
    s32 temp_s2_5;
    s32 temp_s2_6;

    temp_s2 = M2C_FIELD(arg0, s32 *, 0x234);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1000) | 0x05040000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2 + 0x328, 0);
    temp_s2_2 = M2C_FIELD(arg0, s32 *, 0x234);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x13E8) | 0x05040000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2_2 + 0x38, 0);
    temp_s2_3 = M2C_FIELD(arg0, s32 *, 0x234);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x830) | 0x05040000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2_3 + 0x1640, 0);
    temp_s2_4 = M2C_FIELD(arg0, s32 *, 0x234);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1000) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2_4 + 0x328, 0);
    temp_s2_5 = M2C_FIELD(arg0, s32 *, 0x234);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x830) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2_5 + 0x38, 0);
    temp_s2_6 = M2C_FIELD(arg0, s32 *, 0x234);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x448) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s2_6 + 0x1640, 0);
}
