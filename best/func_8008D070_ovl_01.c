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

M2C_UNK func_8008C31C_ovl_01(u8, s32);              /* extern */
s32 func_8008C4FC_ovl_01(u8);                       /* extern */
M2C_UNK func_8008C548_ovl_01(void *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern u8 D_8012BF40_ovl_01;
extern M2C_UNK D_8012FF48_ovl_01;

void func_8008D070_ovl_01(void) {
    u8 temp_v1;
    u8 var_s2;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = (M2C_FIELD(((D_8012BF40_ovl_01 * 4) + &D_800C7650_ovl_01), u8 *, 0x21818) * 8) + &D_8012FF48_ovl_01;
    var_s2 = M2C_FIELD(temp_v0, u8 *, 0);
    temp_v0_2 = (func_8008C4FC_ovl_01(*M2C_FIELD(temp_v0, u8 **, 4)) * 4) + &D_800C7650_ovl_01;
    temp_v1 = M2C_FIELD(temp_v0_2, u8 *, 0x21819);
    if (var_s2 < temp_v1) {
        M2C_FIELD(temp_v0_2, u8 *, 0x21819) = (u8) (temp_v1 - var_s2);
    } else {
        var_s2 = temp_v1;
        M2C_FIELD(temp_v0_2, s8 *, 0x21818) = 0;
        func_8008C548_ovl_01(temp_v0_2 + 0x20000);
    }
    func_8008C31C_ovl_01(D_8012BF40_ovl_01, M2C_FIELD(((D_8012BF40_ovl_01 * 4) + &D_800C7650_ovl_01), u8 *, 0x21819) + var_s2);
}
