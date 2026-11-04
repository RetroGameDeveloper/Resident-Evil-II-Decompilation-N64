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

s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
M2C_UNK func_80032F24_ovl_01(void *, s16, M2C_UNK); /* extern */
M2C_UNK func_80052D40_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077B0C_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80164D84_ovl_15(u8);                   /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80164810_ovl_15(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_v1;
    void *temp_s1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    temp_s1 = M2C_FIELD(arg0, void **, 0x250);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_80077B0C_ovl_01(0x04030001, arg0 + 0x28);
        func_80052D40_ovl_01(0x35, 0xF0, 0x28, 0);
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x30000;
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x04000000);
        M2C_FIELD(arg0, u8 *, 7) = 0U;
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        /* fallthrough */
    case 1:
        if ((u8) M2C_FIELD(arg0, u8 *, 7) < 3U) {
            func_80164D84_ovl_15(M2C_FIELD(arg0, u8 *, 7));
            M2C_FIELD(arg0, u8 *, 7) = (u8) (M2C_FIELD(arg0, u8 *, 7) + 1);
        }
        func_80032F24_ovl_01(arg0, func_80032D44_ovl_01(M2C_FIELD(temp_s1, s16 *, 0x2A), M2C_FIELD(temp_s1, s16 *, 0x32), M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32)), 0x80);
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + func_80089D34_ovl_01(arg0, arg1, arg2, 0x400));
        break;
    }
}
