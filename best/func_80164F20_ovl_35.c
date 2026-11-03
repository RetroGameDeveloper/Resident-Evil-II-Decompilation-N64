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

s32 func_80033634_ovl_01(void *);                   /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *, u32, M2C_UNK); /* extern */
M2C_UNK func_80164354_ovl_35(void *, M2C_UNK, u32); /* extern */
M2C_UNK func_8016472C_ovl_35(void *, M2C_UNK, u32); /* extern */
M2C_UNK func_80166324_ovl_35(void *, M2C_UNK, s32); /* extern */
extern M2C_UNK D_80166748_ovl_35;

void func_80164F20_ovl_35(void *arg0, M2C_UNK arg1, u32 arg2, M2C_UNK arg3) {
    M2C_UNK var_a3;
    s32 var_a1;
    u32 temp_s2;
    u32 var_a2;
    u8 temp_v0;

    var_a2 = arg2;
    var_a3 = arg3;
    temp_s2 = var_a2;
    if (M2C_FIELD(arg0, u8 *, 5) == M2C_FIELD(arg0, u8 *, 0x2D6)) {
        M2C_FIELD(arg0, u8 *, 0x2D7) = 1U;
    }
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x2CB) - 6;
    M2C_FIELD(arg0, u8 *, 0x2CB) = temp_v0;
    if (temp_v0 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x2CB) = 0U;
    }
    if (!(M2C_FIELD(arg0, u8 *, 0x2BD) & 1) || ((s8) M2C_FIELD(arg0, u8 *, 0x2CB) != 0)) {
        if (M2C_FIELD(arg0, u8 *, 0x2CE) == 0) {
            func_80166324_ovl_35(arg0, 3, func_80033634_ovl_01(arg0) & 7);
            M2C_FIELD(arg0, u8 *, 0x2CE) = 0xFU;
        }
        func_80164354_ovl_35(arg0, arg1, temp_s2);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
    M2C_FIELD(arg0, u8 *, 0x2D6) = (u8) M2C_FIELD(arg0, u8 *, 5);
    if ((s8) M2C_FIELD(arg0, u8 *, 0x2CB) == 0) {
        var_a2 = 3;
        var_a3 = 0x66666667;
        var_a1 = 0x468;
        do {
            var_a2 += 1;
            M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x234) + var_a1), s32 *, 0x60) = (s32) *(((s32) ((M2C_FIELD(arg0, u8 *, 0x2CB) / 10) << 0x18) >> 0x16) + &D_80166748_ovl_35);
            var_a1 += 0x178;
        } while (var_a2 < 7U);
    }
    if (M2C_FIELD(arg0, u8 *, 0x2D7) == 0) {
        func_80077D48_ovl_01(3, arg0, var_a2, var_a3);
    }
    M2C_FIELD(arg0, u8 *, 0x2D7) = 0U;
    if (M2C_FIELD(arg0, u8 *, 0x2BC) == 0) {
        M2C_FIELD(arg0, s16 *, 6) = 0x200;
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2C5) != 0) {
        M2C_FIELD(arg0, s16 *, 6) = 0x300;
        return;
    }
    M2C_FIELD(arg0, s16 *, 6) = 0x100;
    func_8016472C_ovl_35(arg0, arg1, temp_s2);
}
