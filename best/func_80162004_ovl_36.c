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

extern M2C_UNK D_800C7650_ovl_01;

void func_80162004_ovl_36(void *arg0, s16 arg1, s16 arg2, s16 arg3) {
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x190;
    M2C_FIELD(arg0, s16 *, 0x64) = arg1;
    M2C_FIELD(arg0, s16 *, 0x66) = arg2;
    M2C_FIELD(arg0, s16 *, 0x68) = arg3;
    M2C_FIELD(arg0, s16 *, 0x134) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C0) = 1;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x0800040C);
    if ((M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AAC) - 0xE10) < M2C_FIELD(arg0, s32 *, 0x2C)) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x04000000);
    }
}
