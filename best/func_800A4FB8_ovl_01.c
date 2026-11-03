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

M2C_UNK func_80006D30(M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_80006D60(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_8000CC90(M2C_UNK, M2C_UNK *, s8 *);    /* extern */
M2C_UNK func_8000DB90(M2C_UNK *);                   /* extern */
s32 func_800113E0(s32);                             /* extern */
M2C_UNK func_800A4D64_ovl_01(s32 *, s32, s32, s32); /* extern */
M2C_UNK func_800A5734_ovl_01();                     /* extern */
extern M2C_UNK D_800A2500_ovl_01;
extern M2C_UNK D_80143C40;
extern s32 D_80143DF0;
extern M2C_UNK D_80143E00;
extern M2C_UNK D_80143E20;
extern s8 D_80143E30;
extern s32 D_80143EA4;
extern s8 D_80143EA8;
extern s8 D_80143F88;
extern s32 (*D_80143FA8)(M2C_UNK, M2C_UNK);

s32 func_800A4FB8_ovl_01(s32 *arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    D_80143EA8 = 0;
    func_800A5734_ovl_01();
    D_80143F88 = (arg3 >> 0x14) & 1;
    D_80143E30 = 1;
    func_80006D30(&D_80143E00, &D_80143E20, 4);
    func_8000CC90(6, &D_80143E00, &D_80143E30);
    temp_v0 = func_800113E0(*arg0);
    D_80143EA4 = temp_v0;
    *arg0 = temp_v0;
    temp_v0_2 = D_80143FA8(0x400, 0x80);
    D_80143DF0 = temp_v0_2;
    func_80006D60(&D_80143C40, 0, &D_800A2500_ovl_01, 0, temp_v0_2 + 0x400, 0x7A);
    func_8000DB90(&D_80143C40);
    var_v0 = 2;
    if (!(arg3 & 0x10000)) {
        var_v0 = 3;
        if (!(arg3 & 0x20000)) {
            var_v0 = 4;
            if (!(arg3 & 0x40000)) {
                var_v0 = (arg3 & 0x80000) == 0;
            }
        }
    }
    func_800A4D64_ovl_01(arg0, arg1 & 0xFFFF, arg2 & 0xFFFF, var_v0);
    return 0;
}
