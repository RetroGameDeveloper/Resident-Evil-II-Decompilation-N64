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

M2C_UNK func_8000CEC0(M2C_UNK *, void *, M2C_UNK, u32, s32, s32, M2C_UNK *, void *); /* extern */
M2C_UNK func_80087AFC_ovl_01(void *, void *, void *, u32); /* extern */
extern M2C_UNK D_80129FD4_ovl_01;
extern M2C_UNK D_8013A1D0;
extern M2C_UNK D_8013A2C0;

void func_80087C6C_ovl_01(void *arg0) {
    u32 temp_v1;
    u8 *temp_a0;
    void *temp_a2;

    temp_a2 = M2C_FIELD(arg0, void **, 4);
    temp_a0 = M2C_FIELD(temp_a2, s32 *, 0) + &D_80129FD4_ovl_01;
    if (*temp_a0 == 2) {
        *temp_a0 = 3;
        M2C_FIELD(arg0, s32 *, 0) = 8;
        temp_v1 = M2C_FIELD(temp_a2, u32 *, 4);
        if (temp_v1 >= 0x65U) {
            func_8000CEC0(&D_8013A2C0, arg0, 0, temp_v1, 0, 0, &D_8013A1D0, arg0);
            return;
        }
        func_80087AFC_ovl_01(arg0, arg0, temp_a2, temp_v1);
    }
}
