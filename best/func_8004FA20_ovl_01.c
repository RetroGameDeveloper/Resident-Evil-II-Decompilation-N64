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

M2C_UNK func_8000DE9C(s32, s32, s32);               /* extern */
s32 func_80031BB0_ovl_01(void *, s32);              /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E1898_ovl_01;
extern s16 D_8010BAA0_ovl_01;

void func_8004FA20_ovl_01(s32 arg0, void *arg1) {
    s16 *var_a2;
    s32 temp_a0_2;
    s32 var_v1;
    void *temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;
    void *var_a1;

    temp_s1 = (arg0 * 0x368) + &D_800E1898_ovl_01;
    M2C_FIELD(temp_s1, s32 *, 0xB8) = (s32) M2C_FIELD(arg1, s32 *, 0x40);
    M2C_FIELD(temp_s1, s32 *, 0xBC) = (s32) M2C_FIELD(arg1, s32 *, 0x44);
    M2C_FIELD(temp_s1, s32 *, 0xC0) = (s32) M2C_FIELD(arg1, s32 *, 0x48);
    M2C_FIELD(temp_s1, void **, 0xC4) = (void *) M2C_FIELD(arg1, void **, 0x4C);
    M2C_FIELD(temp_s1, u16 *, 0xD4) = (u16) M2C_FIELD(arg1, u16 *, 0x5C);
    M2C_FIELD(temp_s1, u16 *, 0xD6) = (u16) M2C_FIELD(arg1, u16 *, 0x5E);
    M2C_FIELD(temp_s1, s32 *, 0xDC) = (s32) M2C_FIELD(arg1, s32 *, 0x64);
    M2C_FIELD(temp_s1, void **, 0xD8) = (void *) M2C_FIELD(arg1, void **, 0x60);
    M2C_FIELD(temp_s1, s32 *, 0x290) = (s32) M2C_FIELD(arg1, s32 *, 0x40);
    M2C_FIELD(temp_s1, s32 *, 0x294) = (s32) M2C_FIELD(arg1, s32 *, 0x44);
    M2C_FIELD(temp_s1, s32 *, 0x298) = (s32) M2C_FIELD(arg1, s32 *, 0x48);
    M2C_FIELD(temp_s1, void **, 0x29C) = (void *) M2C_FIELD(arg1, void **, 0x4C);
    M2C_FIELD(temp_s1, u16 *, 0x2AC) = (u16) M2C_FIELD(arg1, u16 *, 0x5C);
    M2C_FIELD(temp_s1, u16 *, 0x2AE) = (u16) M2C_FIELD(arg1, u16 *, 0x5E);
    M2C_FIELD(temp_s1, s32 *, 0x2B4) = (s32) M2C_FIELD(arg1, s32 *, 0x64);
    temp_a0 = M2C_FIELD(temp_s1, void **, 0xC4);
    M2C_FIELD(temp_s1, void **, 0x2B0) = (void *) M2C_FIELD(arg1, void **, 0x60);
    if (temp_a0 != NULL) {
        M2C_FIELD(temp_s1, void **, 0x2B0) = (void *) M2C_FIELD(temp_a0, void **, 8);
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) = func_80031BB0_ovl_01(temp_s1 + 0x78, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284));
    } else {
        M2C_FIELD(temp_s1, void **, 0x2B0) = NULL;
    }
    M2C_FIELD(temp_s1, s32 *, 0x290) = (s32) M2C_FIELD(arg1, s32 *, 0x40);
    var_a2 = &D_8010BAA0_ovl_01;
    M2C_FIELD(temp_s1, s32 *, 4) = 0;
    M2C_FIELD(temp_s1, s32 *, 0x6C) = 0x808080;
    M2C_FIELD(temp_s1, s32 *, 0xDC) = -1;
    M2C_FIELD(temp_s1, s32 *, 0x294) = (s32) M2C_FIELD(arg1, s32 *, 0x44);
    M2C_FIELD(temp_s1, s16 **, 0x364) = NULL;
    if (D_8010BAA0_ovl_01 != -1) {
loop_6:
        if ((M2C_FIELD(var_a2, s16 *, 0) != (s16) (((M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x215F8) + 1) << 0xC) + (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x215FA) * 0x10))) || (arg0 != M2C_FIELD(var_a2, s16 *, 2))) {
            var_a2 += 8;
            if (*var_a2 != -1) {
                goto loop_6;
            }
        } else {
            M2C_FIELD(temp_s1, s16 **, 0x364) = (s16 *) (var_a2 + 4);
            M2C_FIELD(temp_s1, u8 *, 8) = 1U;
        }
    }
    if (M2C_FIELD(temp_s1, u8 *, 8) == 1) {
        temp_v0 = M2C_FIELD(M2C_FIELD(temp_s1, void **, 0xC4), void **, 8);
        temp_s0 = M2C_FIELD(temp_v0, void **, 8);
        M2C_FIELD(temp_v0, void **, 4) = temp_s0;
        temp_a0_2 = M2C_FIELD(temp_s1, s32 *, 0xC0);
        if (temp_a0_2 != 0) {
            func_8000DE9C(temp_a0_2, M2C_FIELD(temp_s0, s32 *, 0), M2C_FIELD(temp_s0, s16 *, 0xE) * 0x10);
        }
        var_v1 = M2C_FIELD(temp_s0, s16 *, 0xE) - 1;
        if (var_v1 != -1) {
            var_a1 = M2C_FIELD(temp_s0, s32 *, 0) + 0xF;
            do {
                M2C_FIELD(var_a1, s8 *, -3) = 0xFF;
                M2C_FIELD(var_a1, s8 *, -2) = 0xFF;
                M2C_FIELD(var_a1, s8 *, -1) = 0xFF;
                M2C_FIELD(var_a1, s8 *, 0) = 0xFF;
                var_v1 -= 1;
                var_a1 += 0x10;
            } while (var_v1 != -1);
        }
    }
}
