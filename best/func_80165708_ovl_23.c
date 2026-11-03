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

M2C_UNK func_8003334C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, M2C_UNK, s32, s16 *); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_80165708_ovl_23(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    s16 var_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    u16 temp_v0;
    u8 temp_s1;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x234);
    sp12 = -0x12C;
    sp14 = 0;
    temp_s1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_s1) {                              /* irregular */
    case 0:
        temp_s0_2 = temp_s0 + 0x38;
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
        M2C_FIELD(arg0, u16 *, 0x1F6) = 0U;
        sp10 = 0xFA;
        func_800377B0_ovl_01(0x62300, 0, temp_s0_2, &sp10);
        func_800377B0_ovl_01(0x62300, 0, temp_s0_2, &sp10);
        sp10 = 0xFA;
        func_800377B0_ovl_01(0x62300, 0x800, temp_s0_2, &sp10);
        func_800377B0_ovl_01(0x62300, 0x800, temp_s0_2, &sp10);
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        /* fallthrough */
    case 1:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x1000);
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x800);
        func_8003334C_ovl_01(arg0, arg1, arg2, 0);
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) - 0x800);
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        return;
    case 2:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x1000);
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 0x6C) {
            M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        }
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F6) + 1;
        M2C_FIELD(arg0, u16 *, 0x1F6) = temp_v0;
        if ((s16) temp_v0 == temp_s1) {
            var_v0 = 0xFA;
            if (M2C_FIELD(arg0, s16 *, 0x1F4) == 0) {
                var_v0 = -0xFA;
            }
            sp10 = var_v0;
            M2C_FIELD(arg0, u16 *, 0x1F6) = 0U;
            M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1F4) ^ 1);
        }
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1E9) < 0x50U) {
            temp_s0_3 = temp_s0 + 0x38;
            func_800377B0_ovl_01(0x32000, 0, temp_s0_3, &sp10);
            func_800377B0_ovl_01(0x62000, 0, temp_s0_3, &sp10);
        }
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x800);
        func_8003334C_ovl_01(arg0, arg1, arg2, 0);
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) - 0x800);
        return;
    }
}
