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

M2C_UNK func_80032C08_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_801624E4_ovl_35();                     /* extern */

void func_80162704_ovl_35(void *arg0) {
    s16 temp_v1;
    u16 temp_v0;
    u16 temp_v0_2;

    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x700;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s16 *, 0x25E);
        func_801624E4_ovl_35();
        M2C_FIELD(arg0, u16 *, 0x1E2) = -0x50U;
        func_80077D48_ovl_01(7, arg0);
    }
    func_80032C08_ovl_01(arg0, 0, 0);
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x1E0) - 0xA;
    M2C_FIELD(arg0, u16 *, 0x1E0) = temp_v0;
    if ((s16) temp_v0 < 0xB) {
        M2C_FIELD(arg0, u16 *, 0x1E0) = 5U;
    }
    temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1E2) + 0x1E;
    M2C_FIELD(arg0, u16 *, 0x1E2) = temp_v0_2;
    if ((temp_v0_2 << 0x10) > 0) {
        temp_v1 = M2C_FIELD(arg0, s16 *, 0x25E);
        if (M2C_FIELD(arg0, s32 *, 0x2C) >= temp_v1) {
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_v1;
            M2C_FIELD(arg0, s16 *, 6) = 0x300;
            M2C_FIELD(arg0, s8 *, 0x2BC) = 0;
            func_80077D48_ovl_01(7, arg0);
        }
    }
}
