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

M2C_UNK func_80033A0C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK, void *); /* extern */
M2C_UNK func_801636DC_ovl_27(void *, M2C_UNK);      /* extern */
s32 func_80163BC4_ovl_27(void *, s32);              /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_80163CD0_ovl_27;
extern M2C_UNK func_80161D44_ovl_27;

void func_80161D60_ovl_27(void *arg0) {
    s16 temp_v0;
    s32 *temp_s0;
    s32 *temp_s0_2;
    s32 var_a0;
    u16 temp_v1;
    u16 temp_v1_2;
    u32 var_a1;

    var_a1 = 1;
    var_a0 = 0x178;
    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    M2C_FIELD(arg0, s16 *, 0x1F2) = -1;
    M2C_FIELD(arg0, s8 *, 0x25C) = 1;
    M2C_FIELD(arg0, s8 *, 0x25D) = 0;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(arg0, s8 *, 0x2BE) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C2) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C5) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C6) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C7) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x44A);
    do {
        var_a1 += 1;
        temp_s0 = M2C_FIELD(arg0, s32 **, 0x234) + var_a0;
        *temp_s0 |= 0x8000;
        var_a0 += 0x178;
    } while (var_a1 < 3U);
    M2C_FIELD(arg0, s16 *, 0x134) = -0x1F4;
    M2C_FIELD(arg0, s16 *, 0x136) = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0x138) = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0x12C) = 0x1F4;
    M2C_FIELD(arg0, s16 *, 0x12E) = 0x1F4;
    M2C_FIELD(arg0, s32 *, 0x284) = 1;
    M2C_FIELD(arg0, s16 *, 0x130) = 0;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x4B0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((func_80033634_ovl_01() & 0xF) << 0x10) + 0x700);
    temp_v1 = M2C_FIELD(arg0, u16 *, 0x1AA) | 0x2000;
    M2C_FIELD(arg0, u16 *, 0x1AA) = temp_v1;
    if (!(temp_v1 & 0xFF)) {
        func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x320190, 0, temp_s0 + 0x4C);
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) = func_80163BC4_ovl_27(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284));
        D_80163CD0_ovl_27 = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80400);
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) | 0x4000);
        return;
    }
    temp_s0_2 = M2C_FIELD(arg0, s32 **, 0x234);
    *temp_s0_2 |= 0x4000;
    temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x1AA);
    M2C_FIELD(arg0, M2C_UNK **, 0x2A4) = &func_80161D44_ovl_27;
    M2C_FIELD(arg0, s8 *, 0x2C8) = 0;
    M2C_FIELD(arg0, s8 *, 0x2CC) = 0;
    if ((u32) (temp_v1_2 & 0xFF) < 0x20U) {
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (temp_v1_2 | 0x4000);
        temp_v0 = (func_80033634_ovl_01() & 0xFF) * 2;
        M2C_FIELD(arg0, s16 *, 0x66) = temp_v0;
        M2C_FIELD(arg0, s16 *, 0x2C0) = temp_v0;
        func_801636DC_ovl_27(arg0, 0);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x64) = 0x400;
    M2C_FIELD(arg0, s8 *, 5) = 9;
    M2C_FIELD(arg0, s8 *, 0x2C8) = 1;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x18010000);
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x320190, 0, temp_s0_2 + 0x4C);
    if (M2C_FIELD(arg0, u16 *, 0x1AA) == 0x2021) {
        M2C_FIELD(arg0, s16 *, 0x1F2) = -1;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x1F2) = 1;
    M2C_FIELD(arg0, s16 *, 0x66) = 0x800;
}
