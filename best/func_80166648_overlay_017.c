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
s32 func_80089D34_ovl_01(M2C_UNK);                  /* extern */
M2C_UNK func_80166834_ovl_17(void *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80166648_overlay_017(void *arg0) {
    s32 temp_a1;
    u8 temp_v0;

    if (M2C_FIELD(arg0, u8 *, 5) == 0) {
        if (func_80089D34_ovl_01(0x200) != 0) {
            M2C_FIELD(arg0, u8 *, 5) = 1U;
            M2C_FIELD(arg0, u8 *, 0x206) = (u8) ((func_80033634_ovl_01() & 0x1F) + 0x1E);
        }
    } else {
        temp_v0 = M2C_FIELD(arg0, u8 *, 0x206) - 1;
        M2C_FIELD(arg0, u8 *, 0x206) = temp_v0;
        if ((temp_v0 << 0x18) == 0) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x0D000700;
            M2C_FIELD(arg0, u8 *, 5) = 0U;
        }
    }
    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s8 *, 0x2C1) = 2;
        M2C_FIELD(arg0, s16 *, 0x1F6) = 0;
    }
    if (M2C_FIELD(arg0, s8 *, 0x2D6) < 0) {
        func_80166834_ovl_17(arg0);
    }
    temp_a1 = M2C_FIELD(arg0, s32 *, 0) | 0x04000000;
    M2C_FIELD(arg0, s32 *, 0) = temp_a1;
    if (M2C_FIELD(arg0, s32 *, 0x2C) < M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AAC)) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_a1 | 0x08000000);
    }
}
