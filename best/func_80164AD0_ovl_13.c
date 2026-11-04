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

s32 func_80033634_ovl_01();                         /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80164AD0_ovl_13(void *arg0, s32 arg1) {
    if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21962) & 8) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x1062);
    } else {
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) (arg1 + ((func_80033634_ovl_01() & 0xFF) * 4));
    M2C_FIELD(arg0, s16 *, 0x11E) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) ((func_80033634_ovl_01() & 0x7F) + 0x64);
    M2C_FIELD(arg0, s16 *, 0x2A) = 0;
    M2C_FIELD(arg0, s8 *, 0x111) = 0x14;
    M2C_FIELD(arg0, s16 *, 0x2E) = 0;
    M2C_FIELD(arg0, s16 *, 0x30) = (s16) ((func_80033634_ovl_01() & 0xFF) * 0x10);
    M2C_FIELD(arg0, s16 *, 0x32) = 0;
}
