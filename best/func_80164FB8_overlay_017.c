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

M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166C3C_ovl_17(s16, s16, M2C_UNK);    /* extern */
extern M2C_UNK D_80167C90_ovl_17;

void func_80164FB8_overlay_017(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK var_a0;
    s16 temp_v1;
    u8 temp_t0;

    func_80166C3C_ovl_17(M2C_FIELD(arg0, s16 *, 0x1F4), M2C_FIELD(arg0, s16 *, 0x1F6), 0);
    M2C_FIELD(arg0, u16 *, 0x1E0) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E0) + 0x28);
    temp_v1 = M2C_FIELD(arg0, s16 *, 0x25E);
    if ((M2C_FIELD(arg0, s32 *, 0x2C) + 0x190) >= temp_v1) {
        temp_t0 = M2C_FIELD(arg0, u8 *, 0x2CC);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) temp_v1;
        M2C_FIELD(arg0, s16 *, 0x64) = 0;
        M2C_FIELD(arg0, s16 *, 0x68) = 0;
        M2C_FIELD(arg0, s8 *, 6) = 2;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x09000300;
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xEFFFFFFF) | 0x0C000000);
        M2C_FIELD(arg0, s16 *, 0x66) = (s16) -(M2C_FIELD(arg0, u16 *, 0x2C2) + ((temp_t0 << 0xA) * (temp_t0 & 1)));
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        M2C_FIELD(arg0, s32 *, 0x120) = (s32) M2C_FIELD(&D_80167C90_ovl_17, s32 *, 0);
        M2C_FIELD(arg0, s32 *, 0x124) = (s32) M2C_FIELD(&D_80167C90_ovl_17, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 0x128) = (s32) M2C_FIELD(&D_80167C90_ovl_17, s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0x12C) = (s32) M2C_FIELD(&D_80167C90_ovl_17, s32 *, 0xC);
        M2C_FIELD(arg0, s32 *, 0x130) = (s32) M2C_FIELD(&D_80167C90_ovl_17, s32 *, 0x10);
        M2C_FIELD(arg0, s32 *, 0x134) = (s32) M2C_FIELD(&D_80167C90_ovl_17, s32 *, 0x14);
        M2C_FIELD(arg0, s32 *, 0x138) = (s32) M2C_FIELD(&D_80167C90_ovl_17, s32 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0x13C) = (s32) M2C_FIELD(&D_80167C90_ovl_17, s32 *, 0x1C);
        var_a0 = 5;
        M2C_FIELD(arg0, s8 *, 0x2C1) = 0;
        if (M2C_FIELD(arg0, s8 *, 0x2D6) < 0) {
            var_a0 = 6;
        }
        func_80077D48_ovl_01(var_a0, arg0);
    }
}
