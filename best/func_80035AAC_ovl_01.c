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

void func_80035AAC_ovl_01(void) {
    s32 *var_a2;
    s32 *var_t2;
    s32 var_t0;
    s32 var_v0;
    u32 *temp_v1;
    u32 temp_a1;
    u32 var_a1;
    u8 temp_v0;
    u8 var_t4;
    void *temp_a3;
    void *temp_v0_2;
    void *temp_v1_2;

    temp_a3 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), void **, 0x60);
    var_t0 = 0;
    if (temp_a3 != NULL) {
        var_t4 = M2C_FIELD(temp_a3, u8 *, 7);
        var_t2 = temp_a3 + M2C_FIELD(temp_a3, s32 *, 0);
        var_a2 = var_t2 + 4;
        do {
            temp_v1 = temp_a3 + *var_t2;
            temp_a1 = *temp_v1;
            var_v0 = temp_a1 & 0x80000000;
            if (!(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x02000000)) {
                var_v0 = temp_a1 & 1;
            }
            if (var_v0 != 0) {
                M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CAC) = (void *) (temp_v1 + 4);
                M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CB0) = (void *) (temp_a3 + *var_a2);
            }
            var_a1 = temp_a1 >> 1;
            if (var_a1 != 0) {
                do {
                    if (var_a1 & 1) {
                        temp_v0_2 = (((var_t0 & 0xFF) + 1) * 4) + &D_800C7650_ovl_01;
                        temp_v1_2 = M2C_FIELD(temp_v0_2, void **, 0x19D38);
                        if (M2C_FIELD(temp_v1_2, s32 *, 0) & 1) {
                            M2C_FIELD(temp_v1_2, void **, 0x22C) = (void *) (temp_v1 + 4);
                            M2C_FIELD(M2C_FIELD(temp_v0_2, void **, 0x19D38), void **, 0x230) = (void *) (temp_a3 + *var_a2);
                        }
                    }
                    var_a1 = var_a1 >> 1;
                    var_t0 += 1;
                } while (var_a1 != 0);
            }
            var_a2 += 8;
            var_t2 += 8;
            temp_v0 = var_t4 - 1;
            var_t4 = temp_v0;
            var_t0 = 0;
        } while (temp_v0 & 0xFF);
    }
}
