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

M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_801621CC_ovl_17(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x300;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) (((func_80033634_ovl_01() & 0xFF) + 0xA) & 0x1F);
        /* fallthrough */
    case 1:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        if ((s16) temp_v0 == -1) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            if (func_80033634_ovl_01() & 1) {
                M2C_FIELD(arg0, s32 *, 4) = 0x01040000;
            }
        }
        return;
    }
}
