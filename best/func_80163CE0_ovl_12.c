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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
s16 func_80032EA4_ovl_01(void *, s16, s16, s16);    /* extern */
M2C_UNK func_80065400_ovl_01(void *, M2C_UNK, u8, M2C_UNK); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166458_ovl_12(void *);               /* extern */
M2C_UNK func_80166510_ovl_12(void *, s16);          /* extern */
M2C_UNK func_80166AE0_ovl_12(void *);               /* extern */
M2C_UNK func_80166B54_ovl_12(void *);               /* extern */

void func_80163CE0_ovl_12(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 temp_v0;
    u16 temp_v0_2;
    void *temp_s1;

    temp_s1 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u8 *, 0x2B4) = func_80065658_ovl_01();
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) (D_80166C08_ovl_12[func_80033634_ovl_01() & 7] + 0x1E);
        M2C_FIELD(temp_s1, u16 *, 2) = (u16) (M2C_FIELD(temp_s1, u16 *, 2) + 0x12C);
    }
    func_80166B54_ovl_12(arg0);
    func_80065400_ovl_01(arg0, 0, M2C_FIELD(arg0, u8 *, 0x2B4), 1);
    temp_v0 = func_80032EA4_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), M2C_FIELD(temp_s1, s16 *, 0xC));
    M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + temp_v0);
    func_80032B8C_ovl_01(arg0, 0);
    temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
    M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_2;
    if ((temp_v0_2 << 0x10) == 0) {
        M2C_FIELD(arg0, s8 *, 5) = 2;
        M2C_FIELD(arg0, u8 *, 6) = 0;
        M2C_FIELD(temp_s1, s8 *, 5) = 0;
    }
    func_80166510_ovl_12(arg0, temp_v0);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    func_80166458_ovl_12(arg0);
    func_80166AE0_ovl_12(arg0);
}
