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

M2C_UNK func_8006D150_ovl_01();                     /* extern */
M2C_UNK func_8006D2B4_ovl_01();                     /* extern */
M2C_UNK func_8006D364_ovl_01();                     /* extern */
M2C_UNK func_8006D488_ovl_01();                     /* extern */
M2C_UNK func_8006D658_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_8006D748_ovl_01();                     /* extern */
M2C_UNK func_8006D7D4_ovl_01();                     /* extern */
M2C_UNK func_8006D7DC_ovl_01();                     /* extern */
M2C_UNK func_8006DA44_ovl_01();                     /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_80113A70_ovl_01;

void func_8006D920_ovl_01(void) {
    func_8006D2B4_ovl_01();
    func_8006D364_ovl_01();
    func_8006D488_ovl_01();
    M2C_FIELD(&D_80113A70_ovl_01, s8 *, 0x1464) = 0;
    M2C_FIELD(&D_80113A70_ovl_01, s32 *, 0x145C) = (s32) M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x48);
    func_8006D658_ovl_01(0, 0);
    M2C_FIELD(&D_80113A70_ovl_01, s32 *, 0x145C) = (s32) M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x1827C), s32 *, 0x4C);
    func_8006D658_ovl_01(1, 0);
    func_8006DA44_ovl_01();
    func_8006D150_ovl_01();
    func_8006D748_ovl_01();
    func_8006D7D4_ovl_01();
    func_8006D7DC_ovl_01();
}
