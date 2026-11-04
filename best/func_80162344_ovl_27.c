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

M2C_UNK D_80033678(void *);                         /* extern */
s32 func_80089D34_ovl_01(M2C_UNK);                  /* extern */
M2C_UNK func_80162424_ovl_27(void *);               /* extern */
u8 func_801639B0_ovl_27(void *, M2C_UNK);           /* extern */

void func_80162344_ovl_27(void *arg0) {
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_v0;
    s32 temp_s1;
    s32 temp_s2;

    M2C_FIELD(arg0, s16 *, 0x2BC) = (s16) (M2C_FIELD(arg0, u16 *, 0x1F6) - M2C_FIELD(M2C_FIELD(arg0, void **, 0x250), u16 *, 0x66));
    temp_s2 = func_80089D34_ovl_01(0x200);
    D_80033678(arg0);
    temp_s1 = *M2C_FIELD(arg0, s32 **, 0x214);
    if ((temp_s1 & 0x20000) && (M2C_FIELD(arg0, u8 *, 0x2C5) == 0)) {
        M2C_FIELD(arg0, u8 *, 0x2C5) = func_801639B0_ovl_27(arg0, 5);
    }
    if (!(temp_s1 & 0x10000)) {
        temp_v1 = M2C_FIELD(arg0, s16 *, 0x2C2);
        var_v0 = temp_v1 - 0x14;
        if (!(M2C_FIELD(arg0, u8 *, 0x2B5) & 1)) {
            var_v0 = temp_v1 + 0x14;
        }
    } else {
        temp_v1_2 = M2C_FIELD(arg0, s16 *, 0x2C2);
        var_v0 = temp_v1_2 + 0x14;
        if (!(M2C_FIELD(arg0, u8 *, 0x2B5) & 1)) {
            var_v0 = temp_v1_2 - 0x14;
        }
    }
    M2C_FIELD(arg0, s16 *, 0x2C2) = var_v0;
    if (temp_s2 != 0) {
        func_80162424_ovl_27(arg0);
    }
}
