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
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, void *, s16 *); /* extern */

void func_80167890_ovl_11(void *arg0) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    void *temp_a2;
    void *temp_a2_2;
    void *temp_s0;
    void *var_a2;

    M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) | 0x80);
    sp10 = 0;
    sp12 = 0xC8;
    sp14 = 0;
    temp_s0 = M2C_FIELD(arg0, void **, 0x234);
    if (func_80033634_ovl_01() & 1) {
        func_800377B0_ovl_01(0x05032710, M2C_FIELD(arg0, s16 *, 0x66), temp_s0 + 0x38, &sp10);
        temp_a2 = M2C_FIELD(arg0, void **, 0x234);
        if (M2C_FIELD(temp_a2, s32 *, 0xBC0) & 1) {
            func_800377B0_ovl_01(0x05031388, M2C_FIELD(arg0, s16 *, 0x66), temp_a2 + 0xBF8, NULL);
        }
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x468) & 1) {
            var_a2 = M2C_FIELD(arg0, void **, 0x234) + 0x4A0;
            goto block_9;
        }
    } else {
        func_800377B0_ovl_01(0x05032710, M2C_FIELD(arg0, s16 *, 0x66), temp_s0 + 0x38, NULL);
        temp_a2_2 = M2C_FIELD(arg0, void **, 0x234);
        if (M2C_FIELD(temp_a2_2, s32 *, 0x468) & 1) {
            func_800377B0_ovl_01(0x05031388, M2C_FIELD(arg0, s16 *, 0x66), temp_a2_2 + 0x4A0, &sp10);
        }
        sp12 = -0xC8;
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x8D0) & 1) {
            var_a2 = M2C_FIELD(arg0, void **, 0x234) + 0x908;
block_9:
            func_800377B0_ovl_01(0x050313E8, M2C_FIELD(arg0, s16 *, 0x66), var_a2, &sp10);
        }
    }
    if (M2C_FIELD(arg0, u8 *, 5) != 0x10) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x60) = 0x404040;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x1D8) = 0x484848;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x350) = 0x707070;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x7B8) = 0x707070;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0xC20) = 0x505050;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0xD98) = 0x505050;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0xF10) = 0x484848;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x1088) = 0x404040;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x1200) = 0x505050;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x1378) = 0x404040;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x234), s32 *, 0x14F0) = 0x404040;
    }
}
