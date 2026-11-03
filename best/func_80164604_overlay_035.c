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

M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80164354_ovl_35(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8016472C_ovl_35(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801661F0_ovl_35(void *, M2C_UNK, u8);  /* extern */
extern M2C_UNK D_80166700_ovl_35;

void func_80164604_overlay_035(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_s1;

    temp_s1 = arg0 + 0x2B4;
    func_80077D48_ovl_01(3, arg0);
    M2C_FIELD(temp_s1, s8 *, 0x2A) = 0;
    if (M2C_FIELD(arg0, u8 *, 0x2BC) == 0) {
        M2C_FIELD(arg0, s8 *, 0x2BA) = 0;
        M2C_FIELD(arg0, s8 *, 0x2BB) = 0;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x03000000;
        M2C_FIELD(arg0, u8 *, 0x2BD) = (u8) (M2C_FIELD(arg0, u8 *, 0x2BD) | 0x80);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
        M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
        M2C_FIELD(temp_s1, s8 *, 0x2B) = 1;
        M2C_FIELD(temp_s1, s8 *, 0x14) = 0;
        M2C_FIELD(temp_s1, u8 *, 0xC) = (u8) M2C_FIELD(arg0, u8 *, 5);
        M2C_FIELD(temp_s1, u8 *, 0xD) = (u8) M2C_FIELD(arg0, u8 *, 6);
        M2C_FIELD(temp_s1, u8 *, 0xE) = (u8) M2C_FIELD(arg0, u8 *, 7);
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2C5) != 0) {
        func_80164354_ovl_35(arg0, arg1, arg2);
        return;
    }
    M2C_FIELD(arg0, u8 *, 6) = 1U;
    if (M2C_FIELD(arg0, u8 *, 0x2D7) == 0) {
        func_80077D48_ovl_01(3, arg0);
    }
    M2C_FIELD(arg0, u8 *, 0x2D7) = 0U;
    func_801661F0_ovl_35(arg0, 0, M2C_FIELD((M2C_FIELD(arg0, u8 *, 5) + &D_80166700_ovl_35), u8 *, -1));
    func_8016472C_ovl_35(arg0, arg1, arg2);
}
