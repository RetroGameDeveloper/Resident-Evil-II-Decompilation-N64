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

M2C_UNK func_800838F0_ovl_01(void *, void *, void *, s16 *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80166260_ovl_23;

void func_80161C70_ovl_23(void *arg0) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    M2C_UNK *var_s1;
    s8 temp_v0;
    u16 temp_v0_2;
    u32 var_s2;
    void *temp_s0;

    var_s2 = 0;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18270) = 0x2DE4;
    var_s1 = &D_80166260_ovl_23;
    do {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x234) + (M2C_FIELD(var_s1, u16 *, 0) * 0x178);
        M2C_FIELD(temp_s0, s32 *, 0) = (s32) (M2C_FIELD(temp_s0, s32 *, 0) | 0x40);
        M2C_FIELD(var_s1, s16 *, 2) = (s16) ((func_80033634_ovl_01() & 0xFF) * 0x10);
        temp_v0 = func_80033634_ovl_01();
        M2C_FIELD(var_s1, u16 *, 4) = (u16) (M2C_FIELD(var_s1, u16 *, 4) + ((u32) (temp_v0 + ((u32) (temp_v0 << 0x18) >> 0x1F)) >> 1));
        M2C_FIELD(var_s1, u16 *, 8) = (u16) (M2C_FIELD(var_s1, u16 *, 8) + func_80033634_ovl_01());
        M2C_FIELD(var_s1, s16 *, 0xC) = (s16) ((s32) (func_80033634_ovl_01() << 0x18) >> 0x17);
        M2C_FIELD(var_s1, s16 *, 0xE) = 0;
        sp14 = 0;
        sp12 = 0;
        sp10 = 0;
        func_800838F0_ovl_01(temp_s0 + 0x1C, temp_s0 + 0x58, temp_s0 + 0x38, &sp10);
        var_s2 += 1;
        temp_v0_2 = M2C_FIELD(temp_s0, u16 *, 0x5C) & 0xFFF;
        M2C_FIELD(temp_s0, u16 *, 0x5C) = temp_v0_2;
        M2C_FIELD(var_s1, s16 *, 0x10) = (s16) ((u32) (temp_v0_2 - 0x400) < 0x800U);
        M2C_FIELD(var_s1, s16 *, 0xA) = 0;
        var_s1 += 0x14;
    } while (var_s2 < 0xFU);
}
