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

M2C_UNK func_80032C08_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80165BE8_ovl_13(void *, M2C_UNK);      /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_801638CC_ovl_13(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    u8 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x04000700;
        temp_v1_2 = M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19CDE) - 0xA8C;
        M2C_FIELD(arg0, s16 *, 0x2C0) = temp_v1_2;
        if ((temp_v1_2 - M2C_FIELD(arg0, s32 *, 0x2C)) < 0) {
            M2C_FIELD(arg0, u8 *, 0x2B4) = 0U;
        } else {
            M2C_FIELD(arg0, u8 *, 0x2B4) = 1U;
        }
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        M2C_FIELD(arg0, u8 *, 0x2B5) = 0U;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        /* fallthrough */
    case 1:
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x2B5) - 1;
        M2C_FIELD(arg0, u8 *, 0x2B5) = temp_v0;
        if ((temp_v0 & 0xFF) == 0xFF) {
            func_80077D48_ovl_01(1, arg0);
            M2C_FIELD(arg0, s8 *, 0x2B6) = 0xE;
        }
        func_80032DEC_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x60);
        if (M2C_FIELD(arg0, s16 *, 0x1E0) < 0x12C) {
            M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x1E0) + 5);
        }
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
        if (M2C_FIELD(arg0, u8 *, 0x2B4) == 0) {
            temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x2C);
            if (M2C_FIELD(arg0, s16 *, 0x2C0) < temp_v1_3) {
                M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_v1_3 - 0x28);
            }
        } else {
            temp_v1_4 = M2C_FIELD(arg0, s32 *, 0x2C);
            if (temp_v1_4 < M2C_FIELD(arg0, s16 *, 0x2C0)) {
                M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_v1_4 + 0x28);
            }
        }
        if (M2C_FIELD(arg0, u8 *, 0xD) == 0) {
            if ((u32) ((M2C_FIELD(arg0, s16 *, 0x2C0) - M2C_FIELD(arg0, s32 *, 0x2C)) + 0x167) < 0x2CFU) {
                if (M2C_FIELD(arg0, s16 *, 0x1E0) >= 0xE7) {
                    func_80165BE8_ovl_13(arg0, 0xC);
                    return;
                }
                M2C_FIELD(arg0, s8 *, 0x2BC) = (s8) (func_80033634_ovl_01() & 0x7F);
                M2C_FIELD(arg0, s8 *, 0x2BB) = func_80065658_ovl_01();
                func_80165BE8_ovl_13(arg0, 8);
                return;
            }
        } else {
            func_80032C08_ovl_01(arg0, 0, 0);
            return;
        }
        break;
    }
}
