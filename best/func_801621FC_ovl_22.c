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

s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
M2C_UNK func_80032F24_ovl_01(M2C_UNK *, s16, M2C_UNK); /* extern */
extern M2C_UNK D_800E10D0_ovl_01;

void func_801621FC_ovl_22(void *arg0, void *arg1, s32 arg2) {
    void *temp_s1;

    M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 4) = 0x05000000;
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x234) + (arg2 * 0x178);
    if ((((func_80032D44_ovl_01(M2C_FIELD(arg1, s16 *, 0), M2C_FIELD(arg1, s16 *, 4), M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x34), M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x38)) - M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x66)) + 0x400) & 0xFFF) < 0x800) {
        func_80032F24_ovl_01(&D_800E10D0_ovl_01, M2C_FIELD(arg0, s16 *, 0x66), 0x200);
        M2C_FIELD(arg1, s16 *, 0) = (s16) (M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x2A) + (M2C_FIELD(temp_s1, u16 *, 0x4E) - (u16) M2C_FIELD(arg1, s16 *, 0)));
        M2C_FIELD(arg1, s16 *, 4) = (s16) (M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x32) + (M2C_FIELD(temp_s1, u16 *, 0x56) - (u16) M2C_FIELD(arg1, s16 *, 4)));
        M2C_FIELD(&D_800E10D0_ovl_01, u8 *, 5) = (u8) (M2C_FIELD(&D_800E10D0_ovl_01, u8 *, 5) + 1);
    } else {
        func_80032F24_ovl_01(&D_800E10D0_ovl_01, (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x66) - 0x800), 0x200);
        M2C_FIELD(arg1, s16 *, 0) = (s16) (M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x2A) - (M2C_FIELD(temp_s1, u16 *, 0x4E) - (u16) M2C_FIELD(arg1, s16 *, 0)));
        M2C_FIELD(arg1, s16 *, 4) = (s16) (M2C_FIELD(&D_800E10D0_ovl_01, u16 *, 0x32) - (M2C_FIELD(temp_s1, u16 *, 0x56) - (u16) M2C_FIELD(arg1, s16 *, 4)));
    }
    M2C_FIELD(&D_800E10D0_ovl_01, void **, 0x250) = arg0;
    M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x224) = (s32) M2C_FIELD(arg0, s32 *, 0x224);
    M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x228) = (s32) M2C_FIELD(arg0, s32 *, 0x228);
}
