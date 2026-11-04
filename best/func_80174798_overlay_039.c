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
M2C_UNK func_800377B0_ovl_01(s32, s16, s32, s16 *); /* extern */

void func_80174798_overlay_039(void *arg0) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_s3_4;
    s32 temp_s3_5;

    temp_s3 = M2C_FIELD(arg0, s32 *, 0x234);
    sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp12 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x13E8) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s3 + 0x38, &sp10);
    temp_s3_2 = M2C_FIELD(arg0, s32 *, 0x234);
    sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp12 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x1000) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s3_2 + 0x38, &sp10);
    temp_s3_3 = M2C_FIELD(arg0, s32 *, 0x234);
    sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp12 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x1000) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s3_3 + 0x38, &sp10);
    temp_s3_4 = M2C_FIELD(arg0, s32 *, 0x234);
    sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp12 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0xC18) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s3_4 + 0x38, &sp10);
    temp_s3_5 = M2C_FIELD(arg0, s32 *, 0x234);
    func_800377B0_ovl_01(((func_80033634_ovl_01() & 0xFF) * 8) | 0x040C1000, M2C_FIELD(arg0, s16 *, 0x66), temp_s3_5 + 0x38, NULL);
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x234);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0xC18) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s0 + 0xD70, &sp10);
    temp_s0_2 = M2C_FIELD(arg0, s32 *, 0x234);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0xC18) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2 + 0x4A0, &sp10);
}
