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

s32 func_80089D34_ovl_01(void *, s32, s32, M2C_UNK); /* extern */

void func_80161D6C_ovl_38(void *arg0) {
    u8 temp_v1;
    void *temp_a0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 5);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
        M2C_FIELD(arg0, u8 *, 5) = (u8) (M2C_FIELD(arg0, u8 *, 5) + 1);
        /* fallthrough */
    case 1:
        temp_a0 = M2C_FIELD(arg0, void **, 0x234);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) < 0xAU) {
            M2C_FIELD(temp_a0, s32 *, 0x198) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x198) + 0xB);
        }
        if ((u32) (M2C_FIELD(arg0, u8 *, 0x1E9) - 0xA) < 0xDU) {
            M2C_FIELD(temp_a0, s32 *, 0x198) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x198) + 0xC);
        }
        if ((u32) (M2C_FIELD(arg0, u8 *, 0x1E9) - 0x17) < 7U) {
            M2C_FIELD(temp_a0, s32 *, 0x198) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x198) + 0xB);
        }
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 0x28) {
            M2C_FIELD(temp_a0, s32 *, 0x310) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x310) - 0xC);
        }
        if ((u32) (M2C_FIELD(arg0, u8 *, 0x1E9) - 0x29) < 7U) {
            M2C_FIELD(temp_a0, s32 *, 0x310) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x310) - 0xD);
        }
        if ((u32) (M2C_FIELD(arg0, u8 *, 0x1E9) - 0x2F) < 7U) {
            M2C_FIELD(temp_a0, s32 *, 0x600) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x600) + 0xC);
            M2C_FIELD(temp_a0, s32 *, 0x8F0) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x8F0) + 0xC);
            M2C_FIELD(temp_a0, s32 *, 0xBE0) = (s32) (M2C_FIELD(temp_a0, s32 *, 0xBE0) + 0xC);
            M2C_FIELD(temp_a0, s32 *, 0xED0) = (s32) (M2C_FIELD(temp_a0, s32 *, 0xED0) + 0xC);
        }
        if ((u32) (M2C_FIELD(arg0, u8 *, 0x1E9) - 0x36) < 6U) {
            M2C_FIELD(temp_a0, s32 *, 0x600) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x600) + 0xB);
            M2C_FIELD(temp_a0, s32 *, 0x8F0) = (s32) (M2C_FIELD(temp_a0, s32 *, 0x8F0) + 0xB);
            M2C_FIELD(temp_a0, s32 *, 0xBE0) = (s32) (M2C_FIELD(temp_a0, s32 *, 0xBE0) + 0xB);
            M2C_FIELD(temp_a0, s32 *, 0xED0) = (s32) (M2C_FIELD(temp_a0, s32 *, 0xED0) + 0xB);
        }
        if (func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218), 0) != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x02000000;
        }
        return;
    }
}
