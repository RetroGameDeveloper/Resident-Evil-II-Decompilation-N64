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

M2C_UNK func_80007F50(void *, s32, u32);            /* extern */
M2C_UNK func_80008110(void *, s32, u32);            /* extern */
M2C_UNK func_8000CB60(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_8000CEC0(M2C_UNK *, s32, s32, M2C_UNK *, void *); /* extern */
extern M2C_UNK D_80129E34_ovl_01;
extern M2C_UNK D_80129FD4_ovl_01;
extern M2C_UNK D_8013A1D0;
extern M2C_UNK D_8013A2C0;

void func_80087AFC_ovl_01(void *arg0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;
    u32 temp_a2;
    u32 temp_a2_2;
    u32 var_s1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 4);
    temp_a1 = M2C_FIELD(temp_s0, s32 *, 0);
    if (*(temp_a1 + &D_80129FD4_ovl_01) == 3) {
        temp_v1 = M2C_FIELD(temp_s0, s32 *, 0x10);
        if (temp_v1 & 1) {
            temp_a2 = M2C_FIELD(temp_s0, u32 *, 0xC);
            if ((temp_a2 >= 0x97U) || (var_s1 = 0, (temp_v1 == 1))) {
                var_s1 = temp_a2;
                func_80007F50((temp_a1 * 0x68) + &D_80129E34_ovl_01, temp_a1, temp_a2);
            }
        } else {
            temp_a2_2 = M2C_FIELD(temp_s0, u32 *, 8);
            var_s1 = 0;
            if (temp_a2_2 >= 0x97U) {
                var_s1 = temp_a2_2;
                func_80008110((temp_a1 * 0x68) + &D_80129E34_ovl_01, temp_a1, temp_a2_2);
            }
        }
        temp_v0 = M2C_FIELD(temp_s0, s32 *, 0x10) - 1;
        M2C_FIELD(temp_s0, s32 *, 0x10) = temp_v0;
        if (temp_v0 == 0) {
            *(M2C_FIELD(temp_s0, s32 *, 0) + &D_80129FD4_ovl_01) = 2;
            temp_a0 = M2C_FIELD(temp_s0, s32 *, 0x14);
            if (temp_a0 != 0) {
                func_8000CB60(temp_a0, 0, 0);
            }
        } else {
            if (var_s1 != 0) {
                func_8000CEC0(&D_8013A2C0, 0, 0, &D_8013A1D0, arg0);
                return;
            }
            func_80087AFC_ovl_01(arg0);
        }
    }
}
