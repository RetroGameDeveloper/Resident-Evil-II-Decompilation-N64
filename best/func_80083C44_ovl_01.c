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

M2C_UNK func_800269B8_ovl_01(s32);                  /* extern */
M2C_UNK func_80027180_ovl_01();                     /* extern */
M2C_UNK func_80042910_ovl_01(u32);                  /* extern */
M2C_UNK func_80062D2C_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_800758A8_ovl_01(s32, s32);             /* extern */
M2C_UNK func_800828DC_ovl_01(s32, s32);             /* extern */
s32 func_80083D1C_ovl_01(s32);                      /* extern */
s32 func_80083FB8_ovl_01();                         /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80083C44_ovl_01(s32 arg0) {
    s32 temp_a1;
    s32 temp_a1_2;

    func_80027180_ovl_01();
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18294) = func_80083D1C_ovl_01(arg0);
    if (M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C) != NULL) {
        temp_a1 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x24) + (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC) << 5);
        func_800828DC_ovl_01(temp_a1 + 4, temp_a1 + 0x10);
        temp_a1_2 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x24) + (M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC) << 5);
        func_800758A8_ovl_01(temp_a1_2 + 4, temp_a1_2 + 0x10);
        func_80042910_ovl_01((u16) M2C_FIELD(((M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x215FC) << 5) + M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x24)), u16 *, 2) >> 7);
    }
    func_800269B8_ovl_01(func_80083FB8_ovl_01());
    func_80062D2C_ovl_01(0);
}
