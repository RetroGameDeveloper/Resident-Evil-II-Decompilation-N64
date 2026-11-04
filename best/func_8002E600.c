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

extern M2C_UNK D_8002E670_ovl_01;

void func_8002E600(void *arg0, s32 arg1) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x170);
    if (arg1 == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
            M2C_FIELD(temp_s0, M2C_UNK **, 4) = &D_8002E670_ovl_01;
        } else {
            M2C_FIELD(temp_s0, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x180), M2C_UNK **, 4);
        }
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 4;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0)();
    }
    M2C_FIELD(temp_s0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_s0, s32 *, 0x14) = 0;
}
