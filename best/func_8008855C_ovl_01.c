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

M2C_UNK func_80088528_ovl_01(s32, M2C_UNK);         /* extern */
s32 func_8008AF60_ovl_01(M2C_UNK);                  /* extern */
M2C_UNK func_800B1F60_ovl_01(M2C_UNK *);            /* extern */
extern s32 D_800C75D8_ovl_01;
extern M2C_UNK D_8012BA60_ovl_01;

void func_8008855C_ovl_01(void) {
    s32 temp_v0;

    temp_v0 = func_8008AF60_ovl_01(0x50000);
    D_800C75D8_ovl_01 = temp_v0;
    func_80088528_ovl_01(temp_v0, 0x50000);
    func_800B1F60_ovl_01(&D_8012BA60_ovl_01);
}
