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
M2C_UNK func_8016232C_ovl_35(void *);               /* extern */
extern M2C_UNK D_80166624_ovl_35;
extern M2C_UNK D_8016662C_ovl_35;

void func_801621A8_ovl_35(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_v1;
    void *temp_s0;

    temp_s0 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, u8 *, 0x2B4) != 0) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x290) & 0x3FFFFFFF;
    } else {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x28C);
    }
    if (var_v1 >= 0x2711) {
        M2C_FIELD(temp_s0, s8 *, 0xA) = 0;
        M2C_FIELD(arg0, u8 *, 5) = (u8) *((func_80033634_ovl_01() & 7) + &D_80166624_ovl_35);
        if (!(M2C_FIELD(temp_s0, u8 *, 9) & 1)) {
            M2C_FIELD(arg0, u8 *, 5) = 9U;
        }
        M2C_FIELD(temp_s0, s8 *, 0x13) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x12) = 0;
    } else if ((var_v1 >= 0x1771) || (M2C_FIELD(temp_s0, u8 *, 0x14) != 0)) {
        M2C_FIELD(temp_s0, s8 *, 0xA) = 1;
        M2C_FIELD(arg0, u8 *, 5) = (u8) *((func_80033634_ovl_01() & 7) + &D_80166624_ovl_35);
        if (!(M2C_FIELD(temp_s0, u8 *, 9) & 1)) {
            M2C_FIELD(arg0, u8 *, 5) = 9U;
        }
        M2C_FIELD(temp_s0, s8 *, 0x13) = 1;
        M2C_FIELD(temp_s0, s8 *, 0x12) = 0;
    } else {
        M2C_FIELD(arg0, s8 *, 0x2BE) = 2;
        M2C_FIELD(arg0, u8 *, 5) = 4U;
        if (M2C_FIELD(temp_s0, u8 *, 9) & 1) {
            M2C_FIELD(arg0, u8 *, 5) = (u8) *((func_80033634_ovl_01() & 7) + &D_8016662C_ovl_35);
        }
        M2C_FIELD(temp_s0, s8 *, 0x13) = 0;
        M2C_FIELD(temp_s0, s8 *, 0x12) = 1;
    }
    M2C_FIELD(arg0, s16 *, 6) = 0;
    M2C_FIELD(arg0, s16 *, 0x64) = 0;
    func_8016232C_ovl_35(arg0);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
}
