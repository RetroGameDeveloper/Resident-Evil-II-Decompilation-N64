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

extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_8012BF38_ovl_01;
extern M2C_UNK D_8012FF48_ovl_01;

u8 func_8008C3F4_ovl_01(void) {
    u32 var_t0;
    u8 temp_a0;
    u8 temp_a1;
    void *temp_v1;
    void *var_v1;

    temp_a1 = M2C_FIELD(((M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) * 4) + &D_800C7650_ovl_01), u8 *, 0x21818);
    var_t0 = 0;
    if ((M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xD) != M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xC)) && (temp_a1 != 0)) {
        temp_v1 = (M2C_FIELD(((M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0xC) * 4) + &D_800C7650_ovl_01), u8 *, 0x21818) * 8) + &D_8012FF48_ovl_01;
        temp_a0 = M2C_FIELD(temp_v1, u8 *, 3);
        if (temp_a0 != 0) {
            var_v1 = M2C_FIELD(temp_v1, void **, 4);
loop_4:
            var_t0 += 1;
            if (M2C_FIELD(var_v1, u8 *, 0) != temp_a1) {
                var_v1 += 4;
                if (var_t0 >= temp_a0) {
                    /* Duplicate return node #6. Try simplifying control flow for better match */
                    return 0U;
                }
                goto loop_4;
            }
            M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x26) = (u8) M2C_FIELD(var_v1, u8 *, 2);
            M2C_FIELD(&D_8012BF38_ovl_01, u8 *, 0x27) = (u8) M2C_FIELD(var_v1, u8 *, 3);
            return M2C_FIELD(var_v1, u8 *, 1);
        }
    }
    return 0U;
}
