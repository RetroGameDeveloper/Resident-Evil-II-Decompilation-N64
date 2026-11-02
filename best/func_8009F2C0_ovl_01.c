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

M2C_UNK func_80025D60_ovl_01(M2C_UNK, s32 *, s32, M2C_UNK *); /* extern */
M2C_UNK func_80052E24_ovl_01();                     /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_800E909C_ovl_01;
extern s32 D_80134450_ovl_01;
extern M2C_UNK D_801344B0_ovl_01;
extern s32 D_80135C3C_ovl_01;
extern s32 D_801853FC_ovl_02;

void func_8009F2C0_ovl_01(s32 arg0) {
    s32 var_a2;
    s32 var_v1;

    var_a2 = 0x1000;
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) < 0) {
        var_a2 = 0x2000;
    }
    D_80134450_ovl_01 = 0;
loop_4:
    if ((*((D_80134450_ovl_01 * 0x112) + &D_801344B0_ovl_01) != arg0) || !(M2C_FIELD(((D_80134450_ovl_01 * 0x112) + &D_801344B0_ovl_01), u16 *, 2) & var_a2)) {
        D_80134450_ovl_01 += 1;
        if (D_80134450_ovl_01 < D_80135C3C_ovl_01) {
            goto loop_4;
        }
    }
    var_v1 = 0;
    if (D_801853FC_ovl_02 != 0) {
        var_v1 = (M2C_FIELD(((D_80134450_ovl_01 * 0x112) + &D_801344B0_ovl_01), u16 *, 2) & 0x20) != 0;
    }
    if (var_v1 == 0) {
        D_801853FC_ovl_02 = 0;
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) = (s32) ((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) | 0x200) & 0xFFFF7FFF);
        func_80025D60_ovl_01(0xFFFF7FFF, &D_801853FC_ovl_02, var_a2, &D_801344B0_ovl_01);
        func_80052E24_ovl_01();
        D_800E909C_ovl_01 = 1;
    }
}
