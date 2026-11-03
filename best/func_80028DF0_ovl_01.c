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

s32 func_80004CFC(s32, void *, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_800B6AD0_ovl_01;

s32 func_80028DF0_ovl_01(void *arg0) {
    s32 var_a0;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x14);
    var_a0 = func_80004CFC(M2C_FIELD(temp_s0, s32 *, 0x1C), M2C_FIELD(temp_s0, void **, 0x20), 0, &D_800B6AD0_ovl_01);
    if (var_a0 == 0) {
        if (M2C_FIELD(temp_s0, s32 *, 0x24) != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x24;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *), 0)(arg0);
        }
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x6A;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *, M2C_UNK), 4)(arg0, -1);
        var_a0 = 2;
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), s8 *, 0) = 0xFF;
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0x20), s8 *, 1) = 0xD9;
    }
    M2C_FIELD(temp_s0, s32 *, 4) = var_a0;
    M2C_FIELD(temp_s0, s32 *, 0x24) = 0;
    M2C_FIELD(temp_s0, void **, 0) = (void *) M2C_FIELD(temp_s0, void **, 0x20);
    return 1;
}
