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
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */

void func_801642A8_ovl_26(void *arg0) {
    u16 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1E2) = 0xF0U;
        M2C_FIELD(arg0, s8 *, 0x2B6) = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0x400) | 4);
    }
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x1E2) + 0x50;
    M2C_FIELD(arg0, u16 *, 0x1E2) = temp_v0;
    if ((s16) temp_v0 >= 0x281) {
        M2C_FIELD(arg0, u16 *, 0x1E2) = 0x280U;
    }
    func_80032C08_ovl_01(arg0, 0, 0);
    if (M2C_FIELD(arg0, s32 *, 0x2C) >= M2C_FIELD(arg0, s16 *, 0x25E)) {
        M2C_FIELD(arg0, s16 *, 6) = 0x200;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~8);
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) & 0xFFF);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s16 *, 0x25E);
        func_80077D48_ovl_01(0xA, arg0);
    }
}
