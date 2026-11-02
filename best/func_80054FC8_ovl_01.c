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

M2C_UNK func_80027180_ovl_01(s32);                  /* extern */
M2C_UNK func_800479F8_ovl_01(s32, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8004CDB8_ovl_01(M2C_UNK);              /* extern */
s32 func_80053874_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80053D68_ovl_01();                     /* extern */
M2C_UNK func_80053EE8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_800540B4_ovl_01(void *, M2C_UNK *);    /* extern */
M2C_UNK func_80077B0C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
extern s32 D_800C527C_ovl_01;
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800E9118_ovl_01;
extern M2C_UNK D_8010C220_ovl_01;
extern void *D_8010D8E0_ovl_01;
extern M2C_UNK D_8010D8E4_ovl_01;

void func_80054FC8_ovl_01(s32 arg0, s32 arg1) {
    M2C_UNK *var_s0;
    s32 var_s2;
    u32 var_s3;
    void *temp_s1;

    var_s3 = 0;
    var_s2 = 0x300;
    M2C_FIELD(&D_800E9118_ovl_01, s8 *, 0xE) = 0;
    temp_s1 = D_8010D8E0_ovl_01;
    func_800479F8_ovl_01(D_800C527C_ovl_01 + 0x3B800, &D_8010D8E4_ovl_01, 0x14D4, 1);
    M2C_FIELD(&D_800E9118_ovl_01, s8 *, 0xE) = 0;
    func_80053D68_ovl_01();
    var_s0 = &D_8010C220_ovl_01;
    do {
        func_800540B4_ovl_01(temp_s1 + var_s2, var_s0);
        var_s0 += 0x10;
        var_s3 += 1;
        var_s2 += 0x10;
    } while (var_s3 < 0x16CU);
    M2C_FIELD(temp_s1, s8 *, 0x2DA) = 0x40;
    M2C_FIELD(temp_s1, s8 *, 0x2DB) = 4;
    M2C_FIELD(temp_s1, s8 *, 3) = 0;
    M2C_FIELD(temp_s1, s8 *, 2) = 0;
    M2C_FIELD(temp_s1, s8 *, 0x2D5) = 0;
    M2C_FIELD(temp_s1, s8 *, 0x2D8) = 0;
    M2C_FIELD(temp_s1, s8 *, 0x2DC) = 0;
    M2C_FIELD(temp_s1, u8 *, 0x2DD) = (u8) M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x215FD);
    func_80027180_ovl_01(arg0);
    func_8004CDB8_ovl_01(1);
    if (arg1 != 0) {
        func_80077B0C_ovl_01(0x02060000, 0);
        M2C_FIELD(&D_800C7650_ovl_01, s8 *, 0x20F5B) = 0;
loop_4:
        if (func_80053874_ovl_01(0xC, 0xA, 0xFC, 0x8B) != 0) {
            func_80053EE8_ovl_01(0x16C);
            func_8004CDB8_ovl_01(1);
            goto loop_4;
        }
    }
}
