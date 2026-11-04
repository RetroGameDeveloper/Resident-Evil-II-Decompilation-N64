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

M2C_UNK func_80032C08_ovl_01(s16, M2C_UNK);         /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_801659DC_ovl_12(void *, M2C_UNK, s16); /* extern */

void func_80164E94_ovl_12(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 temp_a2;
    s16 var_v0;
    void *temp_s1;

    temp_s1 = arg0 + 0x2B4;
    func_80032C08_ovl_01(M2C_FIELD(arg0, s16 *, 0x1F4), 0);
    temp_a2 = M2C_FIELD(arg0, s16 *, 0x25E);
    M2C_FIELD(arg0, u16 *, 0x1E2) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E2) + 0x28);
    if (M2C_FIELD(arg0, s32 *, 0x2C) >= temp_a2) {
        M2C_FIELD(arg0, s16 *, 0x1F6) = 0x200;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_a2;
        M2C_FIELD(temp_s1, s8 *, 1) = 0;
        M2C_FIELD(temp_s1, s8 *, 8) = 1;
        func_801659DC_ovl_12(arg0, 0, temp_a2);
        if (((0x404 >> (func_80033634_ovl_01() & 0xF)) & 1) && !(M2C_FIELD(temp_s1, u8 *, 0xB) & 0x80) && (M2C_FIELD(arg0, s16 *, 0x1F2) >= 0) && (M2C_FIELD(temp_s1, u8 *, 0x15) == 0)) {
            func_80077D48_ovl_01(0xA, arg0);
            var_v0 = 0x300;
        } else {
            func_80077D48_ovl_01(0xB, arg0);
            var_v0 = 0x200;
        }
        M2C_FIELD(arg0, s16 *, 6) = var_v0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x1E9) != 3) {
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
    }
}
