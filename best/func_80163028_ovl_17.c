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

s32 func_80040BE4_ovl_01(s32);                      /* extern */
s32 func_80066804_ovl_01(void *, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_801623D4_ovl_17();                     /* extern */
u8 func_80166B14_ovl_17(void *);                    /* extern */
s32 func_80166CD8_ovl_17(void *, M2C_UNK);          /* extern */
s32 func_80166D98_ovl_17(void *, s32, u8);          /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80163028_ovl_17(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s2;
    s8 var_v0;
    u8 temp_v0_3;
    void *temp_s1;
    void *var_s3;

    func_801623D4_ovl_17();
    temp_s1 = M2C_FIELD(arg0, void **, 0x2DC);
    var_s2 = 0x270F;
    if (temp_s1 != NULL) {
        var_s3 = arg0 + 0x28;
        if (M2C_FIELD(temp_s1, u8 *, 4) != 7) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(temp_s1, s32 *, 0x28);
            temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x30) - M2C_FIELD(temp_s1, s32 *, 0x30);
            var_s2 = func_80040BE4_ovl_01((temp_v0 * temp_v0) + (temp_v0_2 * temp_v0_2));
            if ((u8) M2C_FIELD(temp_s1, u8 *, 0x2BE) < 2U) {
                var_s2 = 0x270F;
            }
            goto block_4;
        }
    } else {
block_4:
        var_s3 = arg0 + 0x28;
    }
    if ((func_80066804_ovl_01(var_s3, 0x320, 1 << M2C_FIELD(arg0, u8 *, 0x1A2), 0x200) == 0) && (func_80066804_ovl_01(var_s3, 0x320, 1 << M2C_FIELD(arg0, u8 *, 0x1A2), 0x400) != 0)) {
        if (var_s2 < 0x9C4) {
            var_v0 = 4;
            if (temp_s1 != NULL) {
                var_v0 = 0xB;
            }
            goto block_18;
        }
        var_v0 = 4;
        if ((M2C_FIELD(arg0, u8 *, 0x2CE) == 0) && (var_v0 = 4, ((M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0x20) == 0))) {
            temp_v0_3 = func_80166B14_ovl_17(arg0);
            M2C_FIELD(arg0, u8 *, 0x2CC) = temp_v0_3;
            var_s1 = 0;
            if (temp_v0_3 & 0xFF) {
                M2C_FIELD(arg0, u8 *, 0x2CC) = (u8) (M2C_FIELD(arg0, u8 *, 0x2CC) - 1);
                if (func_80166CD8_ovl_17(arg0, 0x400) == 0) {
                    var_s1 = func_80166CD8_ovl_17(arg0, -0x400) == 0;
                }
                if ((var_s1 != 0) && (func_80166D98_ovl_17(arg0, M2C_FIELD(arg0, s32 *, 0x2C4), M2C_FIELD(arg0, u8 *, 0x2CC)) != 0)) {
                    M2C_FIELD(arg0, s8 *, 5) = 0xA;
                    M2C_FIELD(arg0, s16 *, 6) = 0;
                    M2C_FIELD(arg0, s8 *, 0x2D2) = 1;
                    M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) | 0x20);
                }
            }
        } else {
block_18:
            M2C_FIELD(arg0, s8 *, 5) = var_v0;
            M2C_FIELD(arg0, s16 *, 6) = 0;
        }
    }
}
