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

s32 func_8004D3D0_ovl_01(s32 *, void *);            /* extern */
M2C_UNK func_8004DA70_ovl_01(s32);                  /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s32 *D_800E1388_ovl_01;

void func_8004DC28_ovl_01(void *arg0) {
    s16 var_s2;
    s32 **var_s0;
    s32 *temp_a0_2;
    u32 var_s1;
    void *temp_a0;

    func_8004DA70_ovl_01(arg0 + 0x28);
    var_s1 = 0x8000;
    M2C_FIELD(arg0, s8 *, 0xD) = 0xFF;
    temp_a0 = &D_800C7650_ovl_01 + (0x10000 | 0x8000);
    var_s0 = &D_800E1388_ovl_01;
    var_s2 = 0;
    if (M2C_FIELD(temp_a0, s32 *, 0x28C) != &D_800E1388_ovl_01) {
        do {
            temp_a0_2 = *var_s0;
            if ((arg0 != temp_a0_2) && (*temp_a0_2 & 1) && (func_8004D3D0_ovl_01(temp_a0_2, arg0) != 0)) {
                var_s2 |= var_s1;
            }
            var_s0 += 4;
            var_s1 = var_s1 >> 1;
        } while (var_s0 != M2C_FIELD(temp_a0, s32 *, 0x28C));
    }
    M2C_FIELD(arg0, s16 *, 0xE) = var_s2;
}
