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

M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_801625F8_ovl_26(void *);               /* extern */

void func_801644CC_ovl_26(void *arg0) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 var_v0;
    u8 temp_v1;
    void *temp_s1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    temp_s1 = arg0 + 0x2B4;
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 2);
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x804);
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((M2C_FIELD(arg0, u8 *, 0x2CD) * 0xD) + 0xC) << 0x18) + 0x760000);
        func_80089D34_ovl_01(arg0, 0x100);
        M2C_FIELD(temp_s1, s8 *, 0xD) = 9;
        M2C_FIELD(temp_s1, s8 *, 0xF) = 3;
        M2C_FIELD(temp_s1, s16 *, 6) = 0x60;
        var_v0 = 0x1000;
        M2C_FIELD(temp_s1, s8 *, 4) = 1;
        M2C_FIELD(temp_s1, s8 *, 0x25) = 1;
block_11:
        M2C_FIELD(arg0, u16 *, 0x212) = var_v0;
        break;
    case 1:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x212) + 4;
        M2C_FIELD(arg0, u16 *, 0x212) = temp_v0;
        if ((s16) temp_v0 >= 0x1101) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
            var_v0 = 0x1100;
            goto block_11;
        }
        break;
    case 2:
        temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x212) - 4;
        M2C_FIELD(arg0, u16 *, 0x212) = temp_v0_2;
        var_v0 = 0x1000;
        if ((s16) temp_v0_2 < 0x1001) {
            M2C_FIELD(arg0, u8 *, 6) = 1U;
            goto block_11;
        }
        break;
    }
    M2C_FIELD(temp_s1, s8 *, 0x22) = 1;
    M2C_FIELD(temp_s1, s8 *, 0x23) = 1;
    func_801625F8_ovl_26(arg0);
}
