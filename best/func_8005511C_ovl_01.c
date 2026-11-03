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

M2C_UNK func_80027180_ovl_01(u8, M2C_UNK);          /* extern */
M2C_UNK func_8004CDB8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8004CE04_ovl_01();                     /* extern */
M2C_UNK func_8004CEF4_ovl_01(M2C_UNK);              /* extern */
s32 func_80053874_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077B0C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E9118_ovl_01;
extern s32 D_8010BF48_ovl_01;
extern void *D_8010D8E0_ovl_01;

void func_8005511C_ovl_01(s32 arg0) {
    void *temp_s0;

    temp_s0 = D_8010D8E0_ovl_01;
    if (arg0 != 0) {
        func_80077B0C_ovl_01(0x02070000, 0);
        M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x20F5B) = 1;
loop_2:
        if (func_80053874_ovl_01(0xC, 0xA, 0xFC, 0x8B) != 0) {
            func_8004CDB8_ovl_01(1);
            goto loop_2;
        }
    }
    M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x20F58) = 0;
    M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x20F59) = 0;
    M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) = (s32) (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x18284) - 0x5320);
    func_80027180_ovl_01(M2C_FIELD(temp_s0, u8 *, 0x2DD), 0x20000);
    M2C_FIELD(&D_800E9118_ovl_01, s8 *, 0xE) = 2;
    D_8010BF48_ovl_01 *= 2;
    func_8004CEF4_ovl_01(0);
    M2C_FIELD(&D_800E9118_ovl_01, s8 *, 0xE) = 2;
    func_8004CE04_ovl_01();
}
