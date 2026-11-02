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

M2C_UNK func_80006650(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_80006F60(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_80007320(s32 *, M2C_UNK);              /* extern */
M2C_UNK func_8000C9E0(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_8000CD40(s32);                             /* extern */
M2C_UNK func_8009C1B0_ovl_01(M2C_UNK *);            /* extern */
extern M2C_UNK D_801320E0_ovl_01;
extern M2C_UNK D_801320F8_ovl_01;
extern M2C_UNK D_801320FC_ovl_01;

s32 func_8009BED4_ovl_01(s32 *arg0) {
    M2C_UNK sp10;
    s8 sp12;
    M2C_UNK *sp14;
    s32 *sp18;
    s32 sp1C;
    s32 sp20;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 var_v0;

    func_8009C1B0_ovl_01(&D_801320FC_ovl_01);
    temp_s0 = func_8000CD40(1);
    func_80007320(arg0, 0x8000);
    func_8000CD40(temp_s0);
    sp12 = 0;
    sp14 = &D_801320E0_ovl_01;
    sp18 = arg0;
    sp1C = 0x08000000;
    sp20 = 0x8000;
    func_80006F60(&D_801320FC_ovl_01, &sp10, 0);
    func_8000C9E0(&D_801320E0_ovl_01, &D_801320F8_ovl_01, 1);
    if (*arg0 == 0x42494F32) {
        return 0;
    }
    func_80006650(arg0, 0x8000);
    *arg0 = 0x42494F32;
    temp_s0_2 = func_8000CD40(1);
    func_80007320(arg0, 0x8000);
    func_8000CD40(temp_s0_2);
    sp12 = 0;
    sp14 = &D_801320E0_ovl_01;
    sp18 = arg0;
    sp1C = 0x08000000;
    sp20 = 0x8000;
    func_80006F60(&D_801320FC_ovl_01, &sp10, 1);
    func_8000C9E0(&D_801320E0_ovl_01, &D_801320F8_ovl_01, 1);
    func_80006650(arg0, 0x8000);
    temp_s0_3 = func_8000CD40(1);
    func_80007320(arg0, 0x8000);
    func_8000CD40(temp_s0_3);
    sp12 = 0;
    sp14 = &D_801320E0_ovl_01;
    sp18 = arg0;
    sp1C = 0x08000000;
    sp20 = 0x8000;
    func_80006F60(&D_801320FC_ovl_01, &sp10, 0);
    func_8000C9E0(&D_801320E0_ovl_01, &D_801320F8_ovl_01, 1);
    var_v0 = -2;
    if (*arg0 == 0x42494F32) {
        var_v0 = 1;
    }
    return var_v0;
}
