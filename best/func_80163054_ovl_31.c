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
M2C_UNK func_80032DEC_ovl_01(void *, s16, s16, M2C_UNK); /* extern */
s32 func_80032EA4_ovl_01(void *, s16, s16, M2C_UNK); /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80066804_ovl_01(s32 *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern s16 D_8016C29A_ovl_31;
extern s16 D_8016C29C_ovl_31;
extern s16 D_8016C29E_ovl_31;

void func_80163054_ovl_31(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    M2C_UNK var_a3;
    s16 var_a1;
    s16 var_a2;
    u16 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02001F00;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
        D_8016C29E_ovl_31 = 0;
        func_80077D48_ovl_01(0, arg0);
        /* fallthrough */
    case 1:
        if (D_8016C29E_ovl_31 != 0) {
            var_a3 = -0x10;
            var_a1 = D_8016C29A_ovl_31;
            var_a2 = D_8016C29C_ovl_31;
            D_8016C29E_ovl_31 = (u16) D_8016C29E_ovl_31 - 1;
            goto block_8;
        }
        func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 0x10);
        if (func_80032EA4_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 0x338) != 0) {
            var_a1 = M2C_FIELD(arg0, s16 *, 0x260);
            var_a2 = M2C_FIELD(arg0, s16 *, 0x262);
            var_a3 = 0x20;
block_8:
            func_80032DEC_ovl_01(arg0, var_a1, var_a2, var_a3);
        }
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E0) + 0xA);
        if (M2C_FIELD(arg0, s32 *, 0x1AC) & 1) {
            temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) + 1;
            M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
            if ((s16) temp_v0 >= 0x5B) {
                sp10 = M2C_FIELD(arg0, s32 *, 0x120);
                sp14 = M2C_FIELD(arg0, s32 *, 0x124);
                sp18 = M2C_FIELD(arg0, s32 *, 0x128);
                func_80066804_ovl_01(&sp10, 0x6A4, 1, 0x500);
                if (M2C_FIELD(&D_800C7650_ovl_01, void **, 0x199B8) != NULL) {
                    D_8016C29E_ovl_31 = 8;
                    D_8016C29A_ovl_31 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x199B8), u16 *, 0) + ((u16) M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x199B8), u16 *, 4) >> 1);
                    D_8016C29C_ovl_31 = M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x199B8), u16 *, 2) + ((u16) M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x199B8), u16 *, 6) >> 1);
                }
            }
        } else {
            M2C_FIELD(arg0, u16 *, 0x1F4) = 0U;
        }
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x80);
        func_80032B8C_ovl_01(arg0, 0);
        return;
    }
}
