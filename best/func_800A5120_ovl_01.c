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

M2C_UNK func_8000CB60(M2C_UNK *, s8 *, M2C_UNK);    /* extern */
M2C_UNK func_80011390();                            /* extern */
M2C_UNK func_800A56F0_ovl_01();                     /* extern */
extern M2C_UNK D_800A4884_ovl_01;
extern u8 D_801362B0_ovl_01;
extern s32 D_80143DF0;
extern M2C_UNK D_80143E00;
extern s32 D_80143E40;
extern u16 D_80143EAA;
extern s32 D_80143EB0;
extern u8 D_80143EEC;
extern u8 D_80143EED;
extern M2C_UNK D_80143EF8;
extern s32 D_80143F04;
extern s32 D_80143F08;
extern s32 D_80143F10;
extern s32 D_80143F18;
extern s32 D_80143F1C;
extern s32 D_80143F2C;
extern s32 D_80143F30;
extern u16 D_80143F42;
extern s32 D_80143F8C;
extern M2C_UNK D_80143F90;

void func_800A5120_ovl_01(void) {
    s8 sp10;

    if (D_801362B0_ovl_01 != 0) {
        D_80143F42 = D_80143EAA;
        do {

        } while ((D_80143F42 << 0x10) > 0);
        M2C_FIELD(&D_80143F90, M2C_UNK (**)(M2C_UNK *), 0xC)(&D_800A4884_ovl_01);
        if (D_80143EED != 0) {
            M2C_FIELD(&D_80143F90, M2C_UNK (**)(), 4)();
            func_80011390();
            D_80143EED = 0;
        }
        if (D_80143F08 != 0) {
            func_800A56F0_ovl_01();
            M2C_FIELD(&D_80143F90, M2C_UNK (**)(s32), 0x1C)(D_80143F08);
            D_80143F08 = 0;
        }
        if (D_80143F10 != 0) {
            M2C_FIELD(&D_80143F90, M2C_UNK (**)(s32), 0x1C)(D_80143F10);
        }
        do {

        } while (D_80143EEC != 0);
        M2C_FIELD(&D_80143F90, M2C_UNK (**)(s32), 0x1C)(D_80143F8C);
        M2C_FIELD(&D_80143F90, M2C_UNK (**)(s32), 0x1C)(D_80143F1C);
        M2C_FIELD(&D_80143F90, M2C_UNK (**)(s32), 0x1C)(D_80143F18);
        M2C_FIELD(&D_80143F90, M2C_UNK (**)(s32), 0x1C)(D_80143F30);
        M2C_FIELD(&D_80143F90, M2C_UNK (**)(s32), 0x1C)(D_80143F2C);
        M2C_FIELD(&D_80143F90, M2C_UNK (**)(s32), 0x1C)(M2C_FIELD(&D_80143EF8, s32 *, 0));
        M2C_FIELD(&D_80143F90, M2C_UNK (**)(s32), 0x1C)(M2C_FIELD(&D_80143EF8, s32 *, 4));
        M2C_FIELD(&D_80143F90, M2C_UNK (**)(s32), 0x1C)(D_80143EB0);
        M2C_FIELD(&D_80143F90, M2C_UNK (**)(s32), 0x1C)(D_80143F04);
        sp10 = 0xFF;
        func_8000CB60(&D_80143E00, &sp10, 1);
        M2C_FIELD(&D_80143F90, M2C_UNK (**)(s32), 0x1C)(D_80143E40);
        M2C_FIELD(&D_80143F90, M2C_UNK (**)(s32), 0x1C)(D_80143DF0);
    }
}
