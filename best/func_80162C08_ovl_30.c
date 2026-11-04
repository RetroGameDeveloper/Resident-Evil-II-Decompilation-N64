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

M2C_UNK D_80033678(void *);                         /* extern */
M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
s32 func_80032EA4_ovl_01(void *, s16, s16, M2C_UNK); /* extern */
M2C_UNK func_800334F8_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80065400_ovl_01(void *, void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_800656BC_ovl_01(s16, s16);                 /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80162E28_ovl_30(void *);                   /* extern */
M2C_UNK func_80163154_ovl_30(void *);               /* extern */
M2C_UNK func_80164D1C_ovl_30(void *);               /* extern */
s32 func_80165D94_ovl_30(void *, M2C_UNK);          /* extern */
extern M2C_UNK D_800E10D0_ovl_01;
extern M2C_UNK D_80167D00_ovl_30;

void func_80162C08_ovl_30(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK var_a3;
    s32 var_s1;
    u16 temp_v0;
    u16 temp_v1_2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0;
        M2C_FIELD(arg0, s8 *, 0x2C0) = 0;
        M2C_FIELD(arg0, u8 *, 0x2C1) = 0U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (((M2C_FIELD(arg0, u8 *, 0x2B4) + 1) << 0x18) + 0xF00);
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xFE);
        /* fallthrough */
    case 1:
        func_80065400_ovl_01(arg0, &D_800E10D0_ovl_01 + 0x28, 0, 0);
        var_a3 = 0x18;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28C) >= 0x1389U) {
            var_a3 = 0x20;
        }
        if (M2C_FIELD(&D_800E10D0_ovl_01, s16 *, 0x1F2) >= 0) {
            M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + func_80032EA4_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), var_a3));
        }
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x2C1) >= 0x15U) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
        }
        break;
    case 2:
        M2C_FIELD(arg0, u8 *, 6) = 3U;
        temp_v1_2 = *(((func_800656BC_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32)) & 0xFF) * 2) + &D_80167D00_ovl_30);
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0x2DU;
        M2C_FIELD(arg0, u16 *, 0x2B6) = temp_v1_2;
        /* fallthrough */
    case 3:
        func_800334F8_ovl_01(arg0, arg1, arg2, 0);
        var_s1 = 0;
        if ((func_80165D94_ovl_30(arg0, 0x10) != 0) || (temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1, M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0, ((temp_v0 << 0x10) == 0))) {
            var_s1 = 1;
        }
        if (var_s1 != 0) {
            M2C_FIELD(arg0, u8 *, 6) = 1U;
            M2C_FIELD(arg0, u8 *, 0x2C1) = 0U;
        }
        break;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    func_80032B8C_ovl_01(arg0, 0);
    D_80033678(arg0);
    if (func_80162E28_ovl_30(arg0) == -1) {
        func_80077D48_ovl_01(0xA, arg0);
    }
    func_80163154_ovl_30(arg0);
    func_80164D1C_ovl_30(arg0);
}
