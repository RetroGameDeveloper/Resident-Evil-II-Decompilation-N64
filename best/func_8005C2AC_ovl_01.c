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

M2C_UNK func_80040E88_ovl_01(s32, s32, M2C_UNK);    /* extern */
extern M2C_UNK D_80110EE4_ovl_01;

void func_8005C2AC_ovl_01(void *arg0) {
    s32 temp_a1;
    u16 temp_v0;
    void *temp_a0;

    if (((u32) ((M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF) - 9) < 3U) && (temp_a1 = M2C_FIELD(arg0, s32 *, 0x234), temp_a0 = temp_a1 + 0x1D60, (M2C_FIELD(temp_a0, s16 *, 0x11E) != 0xFF))) {
        temp_v0 = *((M2C_FIELD(temp_a0, s8 *, 0x112) * 2) + &D_80110EE4_ovl_01);
        M2C_FIELD(temp_a0, u16 *, 0x5C) = temp_v0;
        if ((temp_v0 & 0xFFFF) == 0x8000) {
            M2C_FIELD(temp_a0, u16 *, 0x5C) = 0U;
            M2C_FIELD(temp_a0, s16 *, 0x11E) = 0xFF;
            return;
        }
        M2C_FIELD(temp_a0, s8 *, 0x112) = (s8) ((u8) M2C_FIELD(temp_a0, s8 *, 0x112) + 1);
        func_80040E88_ovl_01(temp_a1 + 0x1DB8, temp_a1 + 0x1D68, 0xFF);
    }
}
