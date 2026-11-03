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

void func_80089B5C_ovl_01(void *arg0) {
    s32 var_a0;
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x136);
    if (temp_v1 & 0x7FFF) {
        M2C_FIELD(arg0, u16 *, 0x136) = (u16) (temp_v1 - 1);
        M2C_FIELD(arg0, u16 *, 0x132) = (u16) (M2C_FIELD(arg0, u16 *, 0x132) + (s8) M2C_FIELD(arg0, u8 *, 0x135));
        M2C_FIELD(arg0, u16 *, 0x130) = (u16) (M2C_FIELD(arg0, u16 *, 0x130) + (s8) M2C_FIELD(arg0, u8 *, 0x134));
        if (M2C_FIELD(arg0, u16 *, 0x136) == 0x8000) {
            var_a0 = M2C_FIELD(arg0, s32 *, 0);
            if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21962) & 8) {
                var_a0 |= 0x1062;
            }
            M2C_FIELD(arg0, s32 *, 0) = var_a0;
            M2C_FIELD(arg0, s16 *, 0x28) = 0;
            M2C_FIELD(arg0, s16 *, 0x11E) = 0;
            M2C_FIELD(arg0, s16 *, 0x2C) = 0;
            M2C_FIELD(arg0, s16 *, 0x2A) = 0;
            M2C_FIELD(arg0, s8 *, 0x111) = 0x1E;
            M2C_FIELD(arg0, s16 *, 0x2E) = 0;
            M2C_FIELD(arg0, s16 *, 0x32) = 0x400;
            M2C_FIELD(arg0, u16 *, 0x30) = (u16) M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x18288), u16 *, 0x66);
        }
    }
}
