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

s32 func_80033634_ovl_01(M2C_UNK);                  /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166C3C_ovl_17(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80166CD8_ovl_17(void *, s16);              /* extern */
s32 func_8016739C_ovl_17(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801678B8_ovl_17(void *);               /* extern */

void func_80164230_ovl_17(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;
    u8 temp_v1;
    u8 var_v0;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((func_80033634_ovl_01(1) & 0xF) + 0x1E);
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0x12C;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000300;
        /* fallthrough */
    case 1:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0) {
            var_v1 = 0x05000300;
            var_v0 = 2;
block_16:
            M2C_FIELD(arg0, u8 *, 6) = var_v0;
            M2C_FIELD(arg0, s32 *, 0x1E8) = var_v1;
        }
        break;
    case 2:
        func_80166C3C_ovl_17(arg0, 0, 0, 0);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        if ((func_80166CD8_ovl_17(arg0, M2C_FIELD(arg0, s16 *, 0x2C2)) != 0) || (M2C_FIELD(arg0, u8 *, 0xD) != 0xFF) || (M2C_FIELD(arg0, s32 *, 0x1AC) & 1)) {
            M2C_FIELD(arg0, u8 *, 6) = 3U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x07000300;
        }
        if (func_8016739C_ovl_17(arg0, 0x7D0, 0x10CC) != 0) {
            var_v1 = 0x07000300;
            var_v0 = 3;
            goto block_16;
        }
        break;
    case 3:
        if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x400) != 0) {
            M2C_FIELD(arg0, s8 *, 5) = 4;
            M2C_FIELD(arg0, u8 *, 6) = 0;
            M2C_FIELD(arg0, s8 *, 0x2CD) = 0;
        }
        break;
    }
    func_801678B8_ovl_17(arg0);
}
