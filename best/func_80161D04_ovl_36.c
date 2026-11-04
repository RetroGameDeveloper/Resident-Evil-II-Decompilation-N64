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

s32 D_80036F08(void *, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80033A0C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK, void *); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80162004_ovl_36(void *, s32, s32, M2C_UNK); /* extern */
extern M2C_UNK D_800E10D0_ovl_01;
extern M2C_UNK D_80162FC0_ovl_36;
extern M2C_UNK D_80162FCC_ovl_36;

void func_80161D04_ovl_36(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_t0;
    s32 var_a1_2;
    s32 var_a2;
    u16 temp_v1;
    u32 var_a1;
    void *temp_s0;
    void *temp_s1;
    void *var_a0;

    var_a0 = arg0;
    temp_s0 = var_a0;
    temp_s1 = temp_s0 + 0x2B4;
    var_a1 = 0;
    M2C_FIELD(temp_s0, s16 *, 0x26C) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x268) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x264) = 0;
    M2C_FIELD(temp_s0, s32 *, 4) = (s32) ((*((M2C_FIELD(temp_s0, u16 *, 0x1AA) & 0xF) + &D_80162FC0_ovl_36) << 0x10) + 0x01000000);
    do {
        M2C_FIELD(var_a0, s32 *, 0x2B4) = 0;
        var_a1 += 1;
        var_a0 += 4;
    } while (var_a1 < 0xCU);
    M2C_FIELD(temp_s0, s8 *, 0x1ED) = 0xD;
    M2C_FIELD(temp_s0, s8 *, 0x1EE) = 0xD;
    M2C_FIELD(temp_s0, s8 *, 0x1EF) = 0xD;
    M2C_FIELD(temp_s0, s16 *, 0x1F2) = 1;
    M2C_FIELD(temp_s0, s32 *, 0) = (s32) (M2C_FIELD(temp_s0, s32 *, 0) | 0x04400002);
    func_80033A0C_ovl_01(temp_s0 + 0x208, 0, 0xC801F4, 0, temp_s0 + 0x28);
    M2C_FIELD(temp_s0, M2C_UNK **, 0x250) = &D_800E10D0_ovl_01;
    M2C_FIELD(temp_s0, s32 *, 0x284) = 1;
    M2C_FIELD(temp_s0, s16 *, 0x134) = -0xC8;
    M2C_FIELD(temp_s0, s16 *, 0x136) = 0x64;
    M2C_FIELD(temp_s0, s16 *, 0x138) = 0x64;
    M2C_FIELD(temp_s0, s16 *, 0x13A) = 0xC8;
    M2C_FIELD(temp_s0, s16 *, 0x12C) = 0xC8;
    M2C_FIELD(temp_s0, s16 *, 0x12E) = 0xC8;
    M2C_FIELD(temp_s0, s16 *, 0x28A) = 0xC8;
    M2C_FIELD(temp_s0, s8 *, 0x25C) = 1;
    M2C_FIELD(temp_s0, s8 *, 0x25D) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x130) = 0;
    M2C_FIELD(temp_s0, s16 *, 0x132) = 0;
    M2C_FIELD(temp_s0, s8 *, 0x1A2) = 0;
    M2C_FIELD(temp_s1, s8 *, 2) = 0;
    M2C_FIELD(temp_s1, s8 *, 3) = 0xF;
    M2C_FIELD(temp_s1, s8 *, 4) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x1E8) = (s32) ((func_80033634_ovl_01() & 0xF) << 0x10);
    func_80089D34_ovl_01(temp_s0, arg1, arg2, 0x80);
    temp_t0 = M2C_FIELD(temp_s0, s32 *, 0) | 0x400000;
    temp_v1 = M2C_FIELD(temp_s0, u16 *, 0x1AA);
    M2C_FIELD(temp_s0, s32 *, 0) = temp_t0;
    switch (temp_v1) {                              /* irregular */
    case 0x2008:
        M2C_FIELD(temp_s0, s8 *, 0x2C0) = 1;
    default:
block_23:
        M2C_FIELD(temp_s0, s16 *, 0x66) = (s16) ((func_80033634_ovl_01() & 0xFF) * 0x10);
block_24:
        M2C_FIELD(temp_s0, u16 *, 0x1E0) = 0U;
        break;
    case 0x6001:
        M2C_FIELD(temp_s0, s32 *, 0) = (s32) (temp_t0 | 0x400);
        M2C_FIELD(temp_s0, s16 *, 0x68) = 0;
        M2C_FIELD(temp_s0, s16 *, 0x64) = 0;
        M2C_FIELD(temp_s0, u16 *, 0x34) = (u16) M2C_FIELD(temp_s0, u16 *, 0x1E0);
        M2C_FIELD(temp_s0, u16 *, 0x38) = (u16) M2C_FIELD(temp_s0, u16 *, 0x1E4);
        goto block_23;
    case 0x6002:
        M2C_FIELD(temp_s0, s32 *, 0) = (s32) (temp_t0 | 0x80400);
        M2C_FIELD(temp_s1, u8 *, 0xA) = (u8) *(D_80036F08(temp_s0, 0, 0x3A, 0) + &D_80162FCC_ovl_36);
        goto block_24;
    case 0x2003:
        func_80162004_ovl_36(temp_s0, (func_80033634_ovl_01() & 0xFF) * 0x10, 0, 0x400);
        M2C_FIELD(temp_s0, u16 *, 0x1E0) = 0U;
        break;
    case 0x2004:
        var_a1_2 = 0x400;
        var_a2 = ((func_80033634_ovl_01() & 0xFF) * 0x10) + 0x400;
block_22:
        func_80162004_ovl_36(temp_s0, var_a1_2, var_a2, 0);
        M2C_FIELD(temp_s0, u16 *, 0x1E0) = 0U;
        break;
    case 0x2005:
        func_80162004_ovl_36(temp_s0, (func_80033634_ovl_01() & 0xFF) * 0x10, 0, -0x400);
        M2C_FIELD(temp_s0, u16 *, 0x1E0) = 0U;
        break;
    case 0x2006:
        var_a1_2 = -0x400;
        var_a2 = ((func_80033634_ovl_01() & 0xFF) * 0x10) + 0x400;
        goto block_22;
    }
    M2C_FIELD(temp_s0, s16 *, 0x1E2) = 0;
    M2C_FIELD(temp_s0, u16 *, 0x1E4) = 0U;
}
