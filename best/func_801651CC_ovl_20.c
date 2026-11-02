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

void func_801651CC_ovl_20(void *arg0, s32 arg1) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s1_4;
    s32 temp_s1_5;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_s3_4;

    temp_s3 = M2C_FIELD(arg0, s32 *, 0x234);
    sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp12 = 0xFC98 - (func_80033634_ovl_01() & 0xFF);
    sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s3 + 0x38, &sp10);
    temp_s3_2 = M2C_FIELD(arg0, s32 *, 0x234);
    sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp12 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s3_2 + 0x38, &sp10);
    temp_s3_3 = M2C_FIELD(arg0, s32 *, 0x234);
    sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp12 = 0xFC98 - (func_80033634_ovl_01() & 0xFF);
    sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x1BB8) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s3_3 + 0x1B0, &sp10);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x234);
    sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp12 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x1BB8) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s1 + 0x1B0, &sp10);
    temp_s1_2 = M2C_FIELD(arg0, s32 *, 0x234);
    sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp12 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x13E8) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s1_2 + 0xD70, &sp10);
    temp_s1_3 = M2C_FIELD(arg0, s32 *, 0x234);
    sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp12 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x13E8) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s1_3 + 0x790, &sp10);
    temp_s1_4 = M2C_FIELD(arg0, s32 *, 0x234);
    sp10 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp12 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    sp14 = 0x80 - (func_80033634_ovl_01() & 0xFF);
    func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 8) + 0x13E8) | 0x06000000, M2C_FIELD(arg0, s16 *, 0x66), temp_s1_4 + 0x4A0, &sp10);
    if (arg1 & 0xFF) {
        temp_s1_5 = M2C_FIELD(arg0, s32 *, 0x234);
        func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x17D0) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s1_5 + 0x328, NULL);
        temp_s3_4 = M2C_FIELD(arg0, s32 *, 0x234);
        func_800377B0_ovl_01((((func_80033634_ovl_01() & 0xFF) * 4) + 0x1FA0) | 0x040F0000, M2C_FIELD(arg0, s16 *, 0x66), temp_s3_4 + 0x38, NULL);
    }
}
