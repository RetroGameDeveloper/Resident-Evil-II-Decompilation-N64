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

M2C_UNK func_80032C08_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80165BD8_ovl_13(void *, M2C_UNK, M2C_UNK); /* extern */

void func_801653BC_ovl_13(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v1;
    u8 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80008);
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) | 0x4000);
        /* fallthrough */
    case 1:
        if (M2C_FIELD(arg0, u16 *, 0x270) & 4) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000700;
            M2C_FIELD(arg0, u16 *, 0x1E0) = 0x12CU;
            M2C_FIELD(arg0, u8 *, 0x2B5) = 6U;
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(arg0, u16 *, 0x270) = 0U;
            M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0xFFF7FFFF);
            M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) & 0xBFFF);
            return;
        }
        return;
    case 2:
        func_80032C08_ovl_01(arg0, 0, 0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x2B5) - 1;
        M2C_FIELD(arg0, u8 *, 0x2B5) = temp_v1_2;
        M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E0) - 0xA);
        if ((temp_v1_2 & 0xFF) == 0xFF) {
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~8);
            func_80165BD8_ovl_13(arg0, 1, 4);
        }
        break;
    }
}
