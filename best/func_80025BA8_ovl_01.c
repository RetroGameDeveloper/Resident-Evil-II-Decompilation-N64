/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_80025A60_ovl_01(s32);                  /* extern */
M2C_UNK func_80025B1C_ovl_01(s32, s32, void *, s32); /* extern */
M2C_UNK func_80042AC0_ovl_01();                     /* extern */
extern u32 D_800C4E54_ovl_01;
extern s32 D_800C4F00_ovl_01;
extern M2C_UNK D_800C4F20_ovl_01;
extern s32 D_800C5680_ovl_01;
extern s32 D_800C75E0_ovl_01;
extern s32 D_800C75EC_ovl_01;
extern s32 D_800C75F0_ovl_01;
extern s32 D_800C75F4_ovl_01;
extern s32 D_800C75F8_ovl_01;
extern s32 D_800C75FC_ovl_01;
extern s32 D_800C7600_ovl_01;
extern s32 D_800C7604_ovl_01;
extern s32 D_800C7608_ovl_01;
extern s32 D_800C760C_ovl_01;
extern s32 D_800C7610_ovl_01;
extern s32 D_80113778_ovl_01;
extern s32 D_8011377C_ovl_01;
extern s32 D_80113790_ovl_01;
extern s32 D_80113794_ovl_01;

void func_80025BA8_ovl_01(s32 arg0) {
    s32 var_a1;
    s32 var_a3;
    u32 temp_lo;
    void *temp_v0;
    void *var_a2;

    var_a3 = arg0;
    var_a2 = (var_a3 * 0x28) + &D_800C4F20_ovl_01;
    temp_lo = D_80113790_ovl_01 * D_80113794_ovl_01;
    var_a1 = (M2C_FIELD(var_a2, s32 *, 0) - M2C_FIELD(var_a2, s32 *, 0xC)) - M2C_FIELD(var_a2, s32 *, 8);
    if (temp_lo < (u32) (var_a1 * ((M2C_FIELD(var_a2, s32 *, 4) - M2C_FIELD(var_a2, s32 *, 0x14)) - M2C_FIELD(var_a2, s32 *, 0x10)))) {
        do {
            var_a2 -= 0x28;
            var_a1 = (M2C_FIELD(var_a2, s32 *, 0) - M2C_FIELD(var_a2, s32 *, 0xC)) - M2C_FIELD(var_a2, s32 *, 8);
            var_a3 -= 1;
        } while (temp_lo < (u32) (var_a1 * ((M2C_FIELD(var_a2, s32 *, 4) - M2C_FIELD(var_a2, s32 *, 0x14)) - M2C_FIELD(var_a2, s32 *, 0x10))));
    }
    D_800C75E0_ovl_01 = var_a3;
    func_80025B1C_ovl_01(var_a3, var_a1, var_a2, var_a3);
    func_80042AC0_ovl_01();
    D_800C4F00_ovl_01 = 1;
    D_800C4E54_ovl_01 = (u32) ((D_80113778_ovl_01 * D_8011377C_ovl_01) + 0x1FF) >> 9;
    func_80025A60_ovl_01(D_80113778_ovl_01);
    D_800C5680_ovl_01 = D_800C75E0_ovl_01;
    temp_v0 = (D_800C75E0_ovl_01 * 0x28) + &D_800C4F20_ovl_01;
    D_800C75EC_ovl_01 = M2C_FIELD(temp_v0, s32 *, 0);
    D_800C75F0_ovl_01 = M2C_FIELD(temp_v0, s32 *, 4);
    D_800C75F4_ovl_01 = M2C_FIELD(temp_v0, s32 *, 8);
    D_800C75F8_ovl_01 = M2C_FIELD(temp_v0, s32 *, 0xC);
    D_800C75FC_ovl_01 = M2C_FIELD(temp_v0, s32 *, 0x10);
    D_800C7600_ovl_01 = M2C_FIELD(temp_v0, s32 *, 0x14);
    D_800C7604_ovl_01 = M2C_FIELD(temp_v0, s32 *, 0x18);
    D_800C7608_ovl_01 = M2C_FIELD(temp_v0, s32 *, 0x1C);
    D_800C760C_ovl_01 = M2C_FIELD(temp_v0, s32 *, 0x20);
    D_800C7610_ovl_01 = M2C_FIELD(temp_v0, s32 *, 0x24);
}
