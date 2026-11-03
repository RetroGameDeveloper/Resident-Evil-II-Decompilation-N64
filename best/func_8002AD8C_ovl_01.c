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

extern M2C_UNK D_8002AA60_ovl_01;

void func_8002AD8C_ovl_01(void *arg0, s32 arg1) {
    M2C_UNK **var_s3;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s4;
    void *var_s0;

    var_s3 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK **(**)(M2C_UNK, M2C_UNK), 0)(1, 0x54);
    M2C_FIELD(arg0, M2C_UNK ***, 0x168) = var_s3;
    *var_s3 = &D_8002AA60_ovl_01;
    if (arg1 != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 4;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *), 0)(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x40) == 0) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x180), s32 *, 8) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x10C) < 2) {
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x27;
                M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *), 0)(arg0);
            }
            var_s4 = M2C_FIELD(arg0, s32 *, 0x10C) + 2;
        } else {
            var_s4 = M2C_FIELD(arg0, s32 *, 0x10C);
        }
        var_s1 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x20) > 0) {
            var_s0 = M2C_FIELD(arg0, s32 *, 0xB0) + 0x1C;
            do {
                temp_v1 = M2C_FIELD(var_s0, s32 *, 8);
                temp_a2 = M2C_FIELD(var_s0, s32 *, 0) * temp_v1;
                var_s1 += 1;
                temp_a3 = ((s32) (M2C_FIELD(var_s0, s32 *, -0x10) * temp_v1) / (s32) M2C_FIELD(arg0, s32 *, 0x10C)) * var_s4;
                var_s0 += 0x50;
                M2C_FIELD(var_s3, s32 *, 0xC) = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 (**)(void *, M2C_UNK, s32, s32), 8)(arg0, 1, temp_a2, temp_a3);
                var_s3 += 4;
            } while (var_s1 < M2C_FIELD(arg0, s32 *, 0x20));
        }
    }
}
