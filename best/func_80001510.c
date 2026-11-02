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

M2C_UNK func_80002B8C(s32, void *);                 /* extern */
M2C_UNK func_800042F4(s32, void *);                 /* extern */

void func_80001510(void *arg0, void *arg1, s32 *arg2) {
    s32 (*temp_v1)(M2C_UNK, M2C_UNK, M2C_UNK);
    s32 temp_v0;
    s32 temp_v0_2;

    if (M2C_FIELD(arg0, s32 (**)(M2C_UNK, M2C_UNK, M2C_UNK), 0x34) != NULL) {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x38);
    }
    if ((u32) (M2C_FIELD(arg0, s32 *, 0) - 4) < 2U) {
        M2C_FIELD(arg1, M2C_UNK (**)(s32, s32), 0x24)(M2C_FIELD(arg1, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0xC));
    }
    if (M2C_FIELD(arg0, s32 *, 0) == 6) {
        func_80002B8C(M2C_FIELD(arg0, s32 *, 0xC), arg1);
        func_800042F4(M2C_FIELD(arg0, s32 *, 8), arg1);
        func_800042F4(M2C_FIELD(arg0, s32 *, 4), arg1);
    }
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_v1 = M2C_FIELD(arg0, s32 (**)(M2C_UNK, M2C_UNK, M2C_UNK), 0x34);
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_v0;
    M2C_FIELD(arg0, s32 *, 0x2C) = temp_v0;
    if (temp_v1 != NULL) {
        temp_v0_2 = temp_v1(0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x38) = temp_v0_2;
        M2C_FIELD(arg1, s32 *, 0x30) = temp_v0_2;
    }
}
