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

M2C_UNK func_80032C9C_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_8008A974_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_80163240_ovl_16(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 var_v0;
    s16 var_v1;
    u8 temp_v1;
    void *temp_v0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02000F00;
        M2C_FIELD(arg0, s8 *, 0x2CE) = 3;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x2C8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C8) & 0xFFFD);
        /* fallthrough */
    case 1:
        temp_v0 = M2C_FIELD(arg0, void **, 0x2C4);
        func_80032DEC_ovl_01(arg0, M2C_FIELD(temp_v0, s32 *, 0x28), M2C_FIELD(temp_v0, s32 *, 0x30), 0x60);
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        var_v0 = M2C_FIELD(arg0, s16 *, 0x1E0);
        if (var_v0 < 0) {
            var_v0 += 3;
        }
        var_v1 = M2C_FIELD(arg0, s16 *, 0x1E4);
        M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) (var_v0 >> 2);
        if (var_v1 < 0) {
            var_v1 += 3;
        }
        M2C_FIELD(arg0, s16 *, 0x1E4) = (s16) (var_v1 >> 2);
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + func_8008A974_ovl_01(arg0, arg1, arg2, 0x100));
        func_80032C9C_ovl_01(arg0, 0, 0);
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000F00;
        M2C_FIELD(arg0, u8 *, 6) = 0x300;
        /* fallthrough */
    case 3:
        M2C_FIELD(arg0, u8 *, 7) = (u8) (M2C_FIELD(arg0, u8 *, 7) + 1);
        func_8008A974_ovl_01(arg0, arg1, arg2, 0x100);
        if ((u8) M2C_FIELD(arg0, u8 *, 7) >= 5U) {
            M2C_FIELD(arg0, s32 *, 4) = 0x010F0000;
        }
        return;
    }
}
