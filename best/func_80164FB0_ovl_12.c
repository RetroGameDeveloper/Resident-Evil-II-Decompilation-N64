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

M2C_UNK func_80032B8C_ovl_01(void *, s16);          /* extern */
s32 func_80032EA4_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_80089D34_ovl_01(void *, s32, s32, s16);    /* extern */
M2C_UNK func_801659DC_ovl_12(void *, M2C_UNK);      /* extern */
M2C_UNK func_801664DC_ovl_12(void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E10D0_ovl_01;

void func_80164FB0_ovl_12(void *arg0, s32 arg1, s32 arg2) {
    M2C_UNK *var_s1;
    s32 var_v0;
    u8 temp_v1;

    if (M2C_FIELD(arg0, u8 *, 0x2C3) != 0) {
        var_s1 = M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x19D3C);
    } else {
        var_s1 = &D_800E10D0_ovl_01;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2BC) == 0) {
        func_80032B8C_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x1F4));
        func_801664DC_ovl_12(arg0, 0xA, 0);
    }
    if (func_80089D34_ovl_01(arg0, arg1, arg2, M2C_FIELD(arg0, s16 *, 0x1F6)) != 0) {
        temp_v1 = M2C_FIELD(arg0, u8 *, 7);
        switch (temp_v1) {                          /* irregular */
        case 0:
            M2C_FIELD(arg0, u8 *, 7) = 1U;
            M2C_FIELD(arg0, u8 *, 0x2BF) = (u8) ((M2C_FIELD(arg0, u8 *, 0x2BF) & 0xC0) | 2);
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((M2C_FIELD(arg0, u8 *, 0x1EA) << 8) + 0x12000000);
            return;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x07000F00;
            M2C_FIELD(arg0, u8 *, 7) = 2U;
            M2C_FIELD(arg0, s16 *, 0x1F6) = 0x100;
            return;
        case 2:
            func_801659DC_ovl_12(arg0, 1);
            M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) & 0xDFFF);
            M2C_FIELD(arg0, u8 *, 0x2BF) = 0U;
            M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
            if (M2C_FIELD(arg0, u8 *, 0x2C9) != 0) {
                var_v0 = 0x010D0100;
            } else {
                var_v0 = 0x01060000;
                if (func_80032EA4_ovl_01(arg0, M2C_FIELD(var_s1, s32 *, 0x28), M2C_FIELD(var_s1, s32 *, 0x30), 0x200) == 0) {
                    var_v0 = 0x01050000;
                }
            }
            M2C_FIELD(arg0, s32 *, 4) = var_v0;
            break;
        }
    }
}
