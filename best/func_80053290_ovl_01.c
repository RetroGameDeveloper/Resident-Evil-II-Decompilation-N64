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

extern M2C_UNK D_8010C220_ovl_01;
extern void *D_8010D8E0_ovl_01;

void func_80053290_ovl_01(s8 arg0, s16 arg1, s16 arg2, s8 arg3) {
    void *temp_v1;

    temp_v1 = D_8010D8E0_ovl_01 + 0x300;
    M2C_FIELD(temp_v1, s8 *, 0xE) = arg3;
    M2C_FIELD(temp_v1, s8 *, 0xF) = arg0;
    M2C_FIELD(D_8010D8E0_ovl_01, s16 *, 0x300) = (s16) (M2C_FIELD(&D_8010C220_ovl_01, u16 *, 0) + 0x30);
    M2C_FIELD(temp_v1, s16 *, 4) = arg1;
    M2C_FIELD(temp_v1, s16 *, 6) = arg2;
    M2C_FIELD(temp_v1, s16 *, 2) = (s16) (M2C_FIELD(&D_8010C220_ovl_01, u16 *, 2) + 0x8E);
    M2C_FIELD(D_8010D8E0_ovl_01, s8 *, 0x31F) = arg0;
    M2C_FIELD(D_8010D8E0_ovl_01, s8 *, 2) = 1;
    M2C_FIELD(D_8010D8E0_ovl_01, s8 *, 3) = 0;
    M2C_FIELD(D_8010D8E0_ovl_01, s8 *, 0x2DE) = 0;
}
