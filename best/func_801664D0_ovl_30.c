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
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80167B9C_ovl_30(void *);               /* extern */

void func_801664D0_ovl_30(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 temp_v0;
    s16 temp_v1_2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0x2EE;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
        M2C_FIELD(arg0, s8 *, 0x207) = 0;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x400);
        /* fallthrough */
    case 1:
        func_80032C08_ovl_01(arg0, 0, 0);
        if (((M2C_FIELD(arg0, s32 *, 0x2C) + 0x3B6) >= M2C_FIELD(arg0, s16 *, 0x25E)) && (M2C_FIELD(arg0, s8 *, 0x207) == 0)) {
            func_80077D48_ovl_01(8, arg0);
            M2C_FIELD(arg0, s8 *, 0x207) = 1;
            M2C_FIELD(arg0, s8 *, 0x2CF) = 0x1D;
            M2C_FIELD(arg0, s8 *, 0x2CE) = 0xA;
        }
        temp_v1_2 = M2C_FIELD(arg0, s16 *, 0x25E);
        if ((M2C_FIELD(arg0, s32 *, 0x2C) + 0xC8) >= temp_v1_2) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0E000000;
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_v1_2;
            func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        }
        break;
    case 2:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 3U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0xF00;
        }
        break;
    case 3:
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        temp_v0 = M2C_FIELD(arg0, s16 *, 0x270);
        if (temp_v0 == 2) {
            M2C_FIELD(arg0, s8 *, 5) = (s8) temp_v0;
            M2C_FIELD(arg0, u8 *, 6) = 0;
        }
        break;
    }
    func_80167B9C_ovl_30(arg0);
}
