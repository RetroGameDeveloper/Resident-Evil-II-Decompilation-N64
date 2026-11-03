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

M2C_UNK func_80042B08_ovl_01();                     /* extern */
M2C_UNK func_80042B24_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_8004C24C_ovl_01(M2C_UNK, M2C_UNK, void *, M2C_UNK); /* extern */
M2C_UNK func_8004CDB8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_800789BC_ovl_01();                     /* extern */
M2C_UNK func_8009B854_ovl_01();                     /* extern */
M2C_UNK func_8009BA0C_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_800DF650_ovl_01;
extern M2C_UNK D_800E7650_ovl_01;
extern M2C_UNK D_80113A70_ovl_01;
extern M2C_UNK D_80131EC0_ovl_01;
extern M2C_UNK D_80131EFC_ovl_01;
extern s32 D_801320AC_ovl_01;
extern s32 D_801320B0_ovl_01;
extern void *D_801320B8_ovl_01;
extern void *D_8013A3D0;

void func_8009B644_ovl_01(void) {
    s16 temp_v1_3;
    s32 temp_s6;
    void *temp_v1;
    void *temp_v1_2;

    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x10000) {
        do {
            func_8004CDB8_ovl_01(1);
        } while (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x10000);
    }
    func_800789BC_ovl_01();
    D_801320B0_ovl_01 = 1;
    temp_s6 = (M2C_FIELD(D_801320B8_ovl_01, u16 *, 0x1E0) & 0x8000) == 0;
loop_4:
    if (M2C_FIELD(&D_80113A70_ovl_01, u8 *, 0xE89) != 0) {
        if (D_801320AC_ovl_01 != 0) {
            func_8009B854_ovl_01();
            if (temp_s6 != 0) {
                func_8009B854_ovl_01();
            }
        }
        func_80042B24_ovl_01(0);
        temp_v1 = M2C_FIELD(&D_800DF650_ovl_01, void **, 0x200);
        M2C_FIELD(&D_800DF650_ovl_01, void **, 0x200) = (void *) (M2C_FIELD(&D_800DF650_ovl_01, void **, 0x200) + 8);
        M2C_FIELD(temp_v1, s32 *, 0) = 0xE3001801;
        M2C_FIELD(temp_v1, s32 *, 4) = 0;
        temp_v1_2 = M2C_FIELD(&D_800DF650_ovl_01, void **, 0x200);
        M2C_FIELD(&D_800DF650_ovl_01, void **, 0x200) = (void *) (M2C_FIELD(&D_800DF650_ovl_01, void **, 0x200) + 8);
        M2C_FIELD(temp_v1_2, s32 *, 0) = 0xE3001A01;
        M2C_FIELD(temp_v1_2, s32 *, 4) = 0x10;
        func_8009BA0C_ovl_01(0xE3001801, 0xE3001A01);
        if ((u32) (M2C_FIELD(D_8013A3D0, u16 *, 0x22A) - 0x29) < 0xDBU) {
            temp_v1_3 = M2C_FIELD(&D_800E7650_ovl_01, s16 *, 0x15E6);
            if (temp_v1_3 == 0x32) {
                func_8004C24C_ovl_01(0x20, 0xC8, M2C_FIELD(&D_80131EFC_ovl_01, u16 *, 0) + &D_80131EC0_ovl_01, 0x4000);
            }
            if (temp_v1_3 == 0x34) {
                func_8004C24C_ovl_01(0x20, 0xB8, M2C_FIELD(&D_80131EFC_ovl_01, u16 *, 2) + &D_80131EC0_ovl_01, 0x4000);
                func_8004C24C_ovl_01(0x20, 0xC8, M2C_FIELD(&D_80131EFC_ovl_01, u16 *, 4) + &D_80131EC0_ovl_01, 0x4000);
            }
        }
        func_80042B08_ovl_01();
        M2C_FIELD(D_8013A3D0, u16 *, 0x22A) = (u16) (M2C_FIELD(D_8013A3D0, u16 *, 0x22A) + 1);
        func_8004CDB8_ovl_01(1);
        goto loop_4;
    }
    D_801320B0_ovl_01 = 0;
}
