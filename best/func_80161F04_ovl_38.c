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

s32 func_80089D34_ovl_01(void *, s32, s32, M2C_UNK); /* extern */

void func_80161F04_ovl_38(void *arg0) {
    u8 temp_v1;
    void *temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 5);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v1_2 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x3B0000;
        M2C_FIELD(temp_v1_2, s32 *, 0x198) = 0x5E;
        M2C_FIELD(temp_v1_2, s32 *, 0x310) = -0x67;
        M2C_FIELD(temp_v1_2, s32 *, 0x600) = 0x70;
        M2C_FIELD(temp_v1_2, s32 *, 0x8F0) = 0x70;
        M2C_FIELD(temp_v1_2, s32 *, 0xBE0) = 0x70;
        M2C_FIELD(temp_v1_2, s32 *, 0xED0) = 0x70;
        M2C_FIELD(arg0, u8 *, 5) = (u8) (M2C_FIELD(arg0, u8 *, 5) + 1);
        /* fallthrough */
    case 1:
        if (func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218), 0) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x02000000;
        }
        return;
    }
}
