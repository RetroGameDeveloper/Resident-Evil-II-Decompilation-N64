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
M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK, s32); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_8016232C_ovl_35(void *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80164060_ovl_35(void *arg0, s32 arg2) {
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u8 temp_v0;
    u8 temp_v1;

    var_a2 = arg2;
    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    switch (temp_v1) {                              /* irregular */
    case 0:
        var_a2 = 0;
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0xFU;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x03000700;
        var_v0 = M2C_FIELD(arg0, s32 *, 0x28) - M2C_FIELD(arg0, s16 *, 0x2DA);
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (var_v0 < 0x320) {
            var_v0_2 = M2C_FIELD(arg0, s32 *, 0x30) - M2C_FIELD(arg0, s16 *, 0x2DC);
            if (var_v0_2 < 0) {
                var_v0_2 = -var_v0_2;
            }
            if (var_v0_2 < 0x320) {
                var_a2 = 1;
            }
        }
        if (var_a2 == 0) {
            M2C_FIELD(arg0, u8 *, 0x2DE) = 0U;
            goto block_18;
        }
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x2DE) + 1;
        M2C_FIELD(arg0, u8 *, 0x2DE) = temp_v0;
        if ((u32) (temp_v0 & 0xFF) >= 3U) {
            M2C_FIELD(arg0, s32 *, 4) = 0x010C0000;
            return;
        }
    case 1:
block_18:
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0x4B;
        if (!(*M2C_FIELD(arg0, s32 **, 0x214) & 0x10000)) {
            M2C_FIELD(arg0, s16 *, 0x1E0) = 0x25;
        }
        func_80032B8C_ovl_01(arg0, 0, var_a2);
        temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_2;
        if (((temp_v0_2 << 0x10) == 0) || (M2C_FIELD(arg0, s32 *, 0x1AC) & 1)) {
            M2C_FIELD(arg0, u8 *, 7) = 2U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x700;
            M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) ((func_80033634_ovl_01() & 0xF) + 0xF);
        }
        D_80033678(arg0);
    default:
block_27:
        func_8016232C_ovl_35(arg0);
        return;
    case 2:
        temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0_3;
        if ((temp_v0_3 << 0x10) == 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
            if (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19C72) < 0) {
                M2C_FIELD(arg0, s32 *, 4) = 0x01090000;
            }
        }
        goto block_27;
    }
}
