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
M2C_UNK func_801621CC_ovl_17();                     /* extern */
s32 func_80166A84_ovl_17(void *, M2C_UNK);          /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80162290_ovl_17(void *arg0) {
    s32 temp_s2;
    s32 var_v0;
    s32 var_v0_2;
    u16 var_s1;
    u32 var_v1;

    func_801621CC_ovl_17();
    if (M2C_FIELD(arg0, u8 *, 0x2D3) != 0) {
        var_s1 = M2C_FIELD(arg0, u16 *, 0x292);
    } else {
        var_s1 = M2C_FIELD(arg0, u16 *, 0x28E);
    }
    temp_s2 = func_80166A84_ovl_17(arg0, 0x80);
    func_80166A84_ovl_17(arg0, 0x100);
    if (((func_80166A84_ovl_17(arg0, 0x400) << 0x10) != 0) && (var_s1 < 0x1F40U)) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01050000;
    }
    if (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A7A) & 1) {
        M2C_FIELD(arg0, s32 *, 4) = 0x01090000;
        if (func_80033634_ovl_01() & 1) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01050000;
        }
    }
    var_v1 = var_s1 & 0xFFFF;
    if (M2C_FIELD(arg0, s16 *, 0x2B4) == 0) {
        if (var_v1 < 0x1D4CU) {
            var_v0 = var_v1 < 0x1770U;
            if ((temp_s2 << 0x10) == 0) {
                var_v0 = var_v1 < 0x1770U;
                if (var_v1 >= 0xBB9U) {
                    M2C_FIELD(arg0, s32 *, 4) = 0x01070000;
                    var_v1 = var_s1 & 0xFFFF;
                    goto block_14;
                }
            }
        } else {
block_14:
            var_v0 = var_v1 < 0x1770U;
        }
        if ((var_v0 != 0) && ((temp_s2 << 0x10) == 0) && (var_v1 >= 0x3E9U)) {
            var_v0_2 = 0x01070000;
            if ((0x340 >> (func_80033634_ovl_01() & 0xF)) & 1) {
                var_v0_2 = 0x01080000;
            }
            M2C_FIELD(arg0, s32 *, 4) = var_v0_2;
        }
    }
}
