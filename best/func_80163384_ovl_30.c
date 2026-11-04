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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_80032EA4_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_800334F8_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80163154_ovl_30(void *);               /* extern */
M2C_UNK func_801635A0_ovl_30(void *, s32);          /* extern */
M2C_UNK func_801637A4_ovl_30(void *);               /* extern */
M2C_UNK func_801672F4_ovl_30(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_8016764C_ovl_30(void *, s16);              /* extern */
extern M2C_UNK D_800E10D0_ovl_01;
extern M2C_UNK D_80167CEC_ovl_30;

void func_80163384_ovl_30(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_s0;
    s32 var_s1;
    void *temp_s3;

    temp_s3 = arg0 + 0x2B4;
    func_800334F8_ovl_01(0);
    if (func_80089D34_ovl_01(arg0, arg1, arg2, 0x100) != 0) {
        var_s1 = *M2C_FIELD(arg0, s32 **, 0x214);
        M2C_FIELD(arg0, s8 *, 5) = 2;
        M2C_FIELD(arg0, s16 *, 6) = 0;
        if (M2C_FIELD(temp_s3, u8 *, 0xC) == 0) {
            M2C_FIELD((temp_s3 + M2C_FIELD(temp_s3, s16 *, 2)), s8 *, 4) = (s8) (M2C_FIELD(arg0, u8 *, 0x206) + 0xA + (func_80033634_ovl_01() & 7));
        }
        func_80163154_ovl_30(arg0);
        func_801637A4_ovl_30(arg0);
        M2C_FIELD(temp_s3, u8 *, 0xC) = 0U;
        M2C_FIELD(temp_s3, s8 *, 0x13) = (s8) ((M2C_FIELD(arg0, u8 *, 0x206) * 4) + 0x3C);
    } else {
        var_s1 = *M2C_FIELD(arg0, s32 **, 0x214);
        if ((M2C_FIELD(arg0, u8 *, 7) == 0) && (M2C_FIELD(arg0, s16 *, 0x1F6) != 0)) {
            var_s0 = 0;
            if (var_s1 & 0x20000) {
                if (func_80032EA4_ovl_01(arg0, M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x28), M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x30), 0x440) != 0) {
                    var_s0 = ((0x5A0 >> (func_80033634_ovl_01() & 0xF)) & 1) == 0;
                }
                if (var_s0 != 0) {
                    M2C_FIELD(arg0, u8 *, 7) = 1U;
                    M2C_FIELD(temp_s3, u8 *, 0xC) = 1U;
                } else {
                    func_80032DEC_ovl_01(arg0, M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x28), M2C_FIELD(&D_800E10D0_ovl_01, s32 *, 0x30), 0x40);
                    M2C_FIELD(arg0, s16 *, 6) = 1;
                    M2C_FIELD(temp_s3, s16 *, 2) = (s16) ((u16) M2C_FIELD(temp_s3, s16 *, 2) ^ 1);
                }
            }
        }
    }
    func_80032B8C_ovl_01(arg0, 0);
    D_80033678(arg0);
    if ((var_s1 & 0x10000) && ((s8) M2C_FIELD(arg0, u8 *, 0x206) == 0)) {
        if (func_8016764C_ovl_30(arg0, M2C_FIELD(temp_s3, s16 *, 2)) != 0) {
            func_80077D48_ovl_01(3, arg0);
            M2C_FIELD(arg0, u8 *, 0x206) = 0xFU;
            M2C_FIELD(arg0, s8 *, 0x207) = 3;
            func_801672F4_ovl_30(&D_800E10D0_ovl_01, 8, 0);
        }
    }
    func_801635A0_ovl_30(arg0, (*((M2C_FIELD(temp_s3, s16 *, 2) * 4) + &D_80167CEC_ovl_30) + 1) & 0xFF);
}
