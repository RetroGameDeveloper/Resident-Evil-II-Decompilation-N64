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

M2C_UNK func_80032C08_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
s32 func_801629EC_ovl_18(void *, M2C_UNK);          /* extern */
M2C_UNK func_80162B1C_ovl_18(void *, M2C_UNK, M2C_UNK); /* extern */
s32 func_80162C10_ovl_18(void *);                   /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_801624D4_ovl_18(void *arg0) {
    s32 temp_v0;
    void *temp_s2;

    temp_s2 = arg0 + 0x2B4;
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) ((func_80033634_ovl_01() & 0x3F) + 0x5A);
        M2C_FIELD(arg0, u16 *, 0x1E2) = -0x12CU;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x08000000);
        M2C_FIELD(temp_s2, s8 *, 9) = 0;
        M2C_FIELD(temp_s2, s8 *, 0xA) = 1;
    }
    func_80032C08_ovl_01(arg0, 0, 0);
    M2C_FIELD(arg0, u16 *, 0x1E2) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E2) + 0x28);
    if ((func_801629EC_ovl_18(arg0, 0) == 0) && (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A5C) & 0x10000000)) {
        func_801629EC_ovl_18(arg0, 1);
    }
    temp_v0 = func_80162C10_ovl_18(arg0);
    if (temp_v0 != 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & 0xF7FFFFFF);
        M2C_FIELD(temp_s2, s8 *, 0xA) = 0;
        if (temp_v0 < 0) {
            func_80162B1C_ovl_18(arg0, 0, 0x82);
            M2C_FIELD(arg0, s16 *, 0x1F2) = -1;
            M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (temp_v0 + 0xA);
            M2C_FIELD(arg0, s32 *, 4) = 0x03000000;
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x400);
            return;
        }
        M2C_FIELD(arg0, s8 *, 5) = 1;
        M2C_FIELD(arg0, u8 *, 6) = 0;
        M2C_FIELD(temp_s2, s16 *, 4) = (s16) ((func_80033634_ovl_01() & 0x1F) + 0x1E);
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x400);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s16 *, 0x25E);
    }
}
