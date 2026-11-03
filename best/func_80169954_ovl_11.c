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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, M2C_UNK, void *, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80167890_ovl_11(void *);               /* extern */
M2C_UNK func_80167A3C_ovl_11(void *);               /* extern */
M2C_UNK func_80167B24_ovl_11(void *);               /* extern */
M2C_UNK func_80167C08_ovl_11(void *);               /* extern */
M2C_UNK func_8016B174_ovl_11(void *, M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s32 D_800E10D4_ovl_01;
extern M2C_UNK D_8016E4E8_ovl_11;
extern M2C_UNK D_8016E770_ovl_11;

void func_80169954_ovl_11(void *arg0, M2C_UNK *arg1, M2C_UNK arg2) {
    M2C_UNK (*var_v0)(void *, M2C_UNK *, M2C_UNK, M2C_UNK *);
    M2C_UNK *temp_a1;
    M2C_UNK *var_a3;
    M2C_UNK var_a0;
    u16 temp_v1_6;
    u8 temp_v1_7;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    M2C_UNK *phi_a1;

    var_a3 = arg1;
    if (!(M2C_FIELD(arg0, u16 *, 0x2B6) & 0x4000)) {
        M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x2149C) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x2149C) + 1);
        M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) | 0x4000);
    }
    M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) & 0xFDFF);
    if ((M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19A84) == 5) && (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19CD0) == arg0)) {
        M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) = (u8) (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) & 0x7F);
        M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CDC) = (u8) (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CDC) & 0xED);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x1004);
        D_800E10D4_ovl_01 = 0x01000000;
        M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A80) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A80) & ~0x1004);
    }
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        temp_v1 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_v1, s32 *, 0x468) = (s32) (M2C_FIELD(temp_v1, s32 *, 0x468) | 0x8000);
        temp_v1_2 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_v1_2, s32 *, 0x5E0) = (s32) (M2C_FIELD(temp_v1_2, s32 *, 0x5E0) | 0x8000);
        temp_v1_3 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_v1_3, s32 *, 0x8D0) = (s32) (M2C_FIELD(temp_v1_3, s32 *, 0x8D0) | 0x8000);
        temp_v1_4 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_v1_4, s32 *, 0xA48) = (s32) (M2C_FIELD(temp_v1_4, s32 *, 0xA48) | 0x8000);
        temp_v1_5 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_v1_5, s32 *, 0xBC0) = (s32) (M2C_FIELD(temp_v1_5, s32 *, 0xBC0) | 0x8000);
    }
    if (M2C_FIELD(arg0, u16 *, 0x1AA) & 1) {
        var_v0 = *(((M2C_FIELD(arg0, u8 *, 5) - 1) * 4) + &D_8016E770_ovl_11);
        phi_a1 = var_a3;
        goto block_28;
    }
    temp_v1_6 = M2C_FIELD(arg0, u16 *, 0x2B6);
    if (temp_v1_6 & 0x10) {
        func_8016B174_ovl_11(arg0, var_a3, arg2, var_a3);
        return;
    }
    if (temp_v1_6 & 2) {
        func_800377B0_ovl_01(0x1F40, 0, M2C_FIELD(arg0, void **, 0x234) + 0x38, 0);
        var_a0 = 0xB;
        if (func_80033634_ovl_01() & 1) {
            var_a0 = 0xD;
        }
        func_80077D48_ovl_01(var_a0, arg0);
        if ((M2C_FIELD(arg0, u8 *, 5) == 0xA) && !(M2C_FIELD(arg0, u16 *, 0x1AA) & 0x80)) {
            func_80167890_ovl_11(arg0);
        }
        if (M2C_FIELD(arg0, u8 *, 5) == 0xB) {
            func_80167A3C_ovl_11(arg0);
        }
        temp_v1_7 = M2C_FIELD(arg0, u8 *, 5);
        if ((temp_v1_7 == 9) || (temp_v1_7 == 0x11)) {
            if (!(M2C_FIELD(arg0, u16 *, 0x1AA) & 0x80)) {
                func_80167B24_ovl_11(arg0);
            }
        }
        if (M2C_FIELD(arg0, u8 *, 5) == 0xE) {
            func_80167C08_ovl_11(arg0);
        }
        M2C_FIELD(arg0, s32 *, 4) = 0x07090000;
        return;
    }
    temp_a1 = var_a3;
    var_a3 = &D_8016E4E8_ovl_11;
    var_v0 = *(((((M2C_FIELD(arg0, u8 *, 5) - 1) * 9) + M2C_FIELD(arg0, u8 *, 0x26E)) * 4) + &D_8016E4E8_ovl_11);
    phi_a1 = temp_a1;
block_28:
    var_v0(arg0, phi_a1, arg2, var_a3);
}
