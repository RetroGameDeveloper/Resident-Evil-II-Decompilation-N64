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

M2C_UNK func_8000C9E0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8000CB60(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_800B4D4C_ovl_01(void *);               /* extern */
extern M2C_UNK (*D_80143FAC)(s32);
extern M2C_UNK D_80158AC0;
extern s32 D_8015AF30;
extern M2C_UNK D_8015AF40;

void func_800B392C_ovl_01(s32 arg0) {
    s32 temp_v1;
    void *temp_s1;

    temp_s1 = (arg0 * 0x1228) + &D_80158AC0;
    temp_v1 = M2C_FIELD(temp_s1, u8 *, 0x1200) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 1:
        M2C_FIELD(temp_s1, u8 *, 0x1200) = 0U;
        if (!(D_8015AF30 & 1)) {
            D_80143FAC(M2C_FIELD(temp_s1, s32 *, 0x1210));
            return;
        }
        return;
    case 2:
        func_8000C9E0(&D_8015AF40, 0, 1);
        func_800B4D4C_ovl_01(temp_s1);
        M2C_FIELD(temp_s1, u8 *, 0x1200) = 3U;
        M2C_FIELD(temp_s1, s8 *, 0x1218) = 4;
        func_8000CB60(&D_8015AF40, 0, 0);
        break;
    }
}
