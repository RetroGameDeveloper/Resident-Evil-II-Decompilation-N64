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

M2C_UNK func_80165290_ovl_26(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8016559C_ovl_26();                     /* extern */
M2C_UNK func_80165640_ovl_26(void *);               /* extern */

void func_80165B0C_ovl_26(void *arg0) {
    s32 var_v1;
    u32 var_a0;

    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        func_8016559C_ovl_26();
        M2C_FIELD(arg0, s8 *, 0x2C1) = 0x45;
        M2C_FIELD(arg0, s8 *, 0x2C3) = 3;
        func_80165290_ovl_26(arg0, 8, 4);
        var_a0 = 0;
        var_v1 = 0;
        do {
            var_a0 += 1;
            M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x234) + var_v1), s32 *, 0x60) = 0x3F2F5F;
            var_v1 += 0x178;
        } while (var_a0 < 0x1AU);
        return;
    }
    func_80165640_ovl_26(arg0);
}
