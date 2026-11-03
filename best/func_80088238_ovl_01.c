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

M2C_UNK func_800879D0_ovl_01(void *);               /* extern */
extern M2C_UNK D_80129FD4_ovl_01;
extern M2C_UNK D_80129FE0_ovl_01;
extern M2C_UNK D_8012A000_ovl_01;

void func_80088238_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_a0;
    void *temp_v1;

    if (*(arg0 + &D_80129FD4_ovl_01) == 2) {
        temp_v1 = (arg0 * 0x18) + &D_8012A000_ovl_01;
        M2C_FIELD(temp_v1, s32 *, 0) = arg0;
        M2C_FIELD(temp_v1, s32 *, 0x14) = 0;
        M2C_FIELD(temp_v1, s32 *, 4) = arg1;
        M2C_FIELD(temp_v1, s32 *, 8) = arg2;
        M2C_FIELD(temp_v1, s32 *, 0xC) = arg3;
        M2C_FIELD(temp_v1, s32 *, 0x10) = arg4;
        temp_a0 = (arg0 * 8) + &D_80129FE0_ovl_01;
        M2C_FIELD(temp_a0, s32 *, 0) = 3;
        M2C_FIELD(temp_a0, void **, 4) = temp_v1;
        func_800879D0_ovl_01(temp_a0);
    }
}
