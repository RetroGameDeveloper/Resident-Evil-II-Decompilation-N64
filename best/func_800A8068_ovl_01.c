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

M2C_UNK func_800AEC6C_ovl_01();                     /* extern */
M2C_UNK func_800AF020_ovl_01(M2C_UNK *, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_800B1A38_ovl_01();                     /* extern */
extern s32 D_80143FD0;
extern s32 D_801443E4;
extern M2C_UNK D_801443E8;
extern M2C_UNK D_80147A40;
extern s32 D_80147F44;
extern s8 D_80147F49;
extern M2C_UNK D_80147F50;

void func_800A8068_ovl_01(s32 arg0) {
    M2C_UNK *var_a1;
    M2C_UNK *var_v1;
    s16 *var_v0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_v1_2;

    var_a2 = 0;
    var_a1 = &D_801443E8;
    D_80147F44 = arg0;
    D_801443E4 = 0x2800;
    D_80143FD0 = 0x1800;
    D_80147F49 = 0;
    do {
        M2C_FIELD(var_a1, s32 *, 0x60) = -1;
        M2C_FIELD(var_a1, s32 *, 0) = 0;
        M2C_FIELD(var_a1, s32 *, 0x24) = 0;
        M2C_FIELD(var_a1, s32 *, 0x28) = 0;
        M2C_FIELD(var_a1, s8 *, 0x2E) = 0;
        M2C_FIELD(var_a1, s16 *, 0x68) = 0;
        M2C_FIELD(var_a1, s8 *, 0x4A) = 0xFF;
        M2C_FIELD(var_a1, s32 *, 0x30) = 0;
        M2C_FIELD(var_a1, s8 *, 0x99) = 0x80;
        M2C_FIELD(var_a1, s8 *, 0x9A) = 0;
        M2C_FIELD(var_a1, s32 *, 0x38) = 0x3F0000;
        M2C_FIELD(var_a1, s32 *, 0x40) = 0;
        M2C_FIELD(var_a1, s32 *, 0x44) = 0;
        M2C_FIELD(var_a1, s8 *, 0x48) = 0;
        M2C_FIELD(var_a1, s8 *, 0x49) = 0;
        M2C_FIELD(var_a1, s8 *, 0xBD) = 0;
        M2C_FIELD(var_a1, s8 *, 0xBE) = 0x17;
        M2C_FIELD(var_a1, s32 *, 0x16C) = 0;
        M2C_FIELD(var_a1, s16 *, 0x170) = 0;
        M2C_FIELD(var_a1, s32 *, 0x178) = 0;
        M2C_FIELD(var_a1, s16 *, 0x17C) = 0;
        M2C_FIELD(var_a1, s32 *, 0x8C) = 0x1F4;
        M2C_FIELD(var_a1, s8 *, 0x98) = 0;
        var_a2 += 1;
        var_a1 += 0x1A0;
    } while (var_a2 < 0x20);
    var_a2_2 = 0;
    var_v1 = &D_80147A40;
    do {
        M2C_FIELD(var_v1, s32 *, 0) = 0;
        M2C_FIELD(var_v1, s32 *, 4) = 0;
        M2C_FIELD(var_v1, s32 *, 0xC) = 0;
        M2C_FIELD(var_v1, s8 *, 0x14) = 4;
        M2C_FIELD(var_v1, s32 *, 0x18) = 0x7F0000;
        var_a2_2 += 1;
        var_v1 += 0x28;
    } while (var_a2_2 < 0x20);
    M2C_FIELD(&D_80147A40, s8 *, 0x4EC) = 1;
    var_a2_3 = 0;
    var_v1_2 = 0x398;
    do {
        M2C_FIELD((var_v1_2 + &D_80147A40), s8 *, 0x14) = 0;
        var_a2_3 += 1;
        var_v1_2 += 0x28;
    } while (var_a2_3 < 8);
    M2C_FIELD(&D_80147A40, s32 *, 0x348) = 0x7F0000;
    M2C_FIELD(&D_80147A40, s32 *, 0x370) = 0x7F0000;
    func_800AF020_ovl_01(&D_80147A40, 4, var_a2_3, 0x1F4);
    func_800AEC6C_ovl_01();
    var_a2_4 = 0xF;
    var_v0 = &D_80147F50 + 0x1E;
    do {
        *var_v0 = 0;
        var_a2_4 -= 1;
        var_v0 -= 2;
    } while (var_a2_4 >= 0);
    func_800B1A38_ovl_01();
}
