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

s32 func_80032EA4_ovl_01(s32, s32, M2C_UNK);        /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80163288_ovl_30(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_s1;

    M2C_FIELD(arg0, s8 *, 6) = 1;
    temp_s1 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, u8 *, 7) == 0) {
        if (func_80032EA4_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 1) >= 0) {
            M2C_FIELD(temp_s1, s16 *, 2) = 0;
        } else {
            M2C_FIELD(temp_s1, s16 *, 2) = 1;
        }
        M2C_FIELD(arg0, s16 *, 0x1F6) = (s16) ((1 << (func_80033634_ovl_01() & 0xF)) & 0x5A0);
    }
    M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((M2C_FIELD(temp_s1, s16 *, 2) + 7) << 0x18) + 0xF00);
    func_800334F8_ovl_01(arg0, arg1, arg2, 0);
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    M2C_FIELD(arg0, s8 *, 0x206) = 0;
    M2C_FIELD(arg0, s8 *, 0x207) = 0;
    M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 1);
    M2C_FIELD(temp_s1, s8 *, 0x19) = 0;
}
