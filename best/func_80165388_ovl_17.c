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

s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80164748_ovl_17(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166FBC_ovl_17(void *, s32, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80165388_ovl_17(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_a0;
    s32 temp_s1;
    s32 var_v1;
    u8 temp_a1;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_t0;

    temp_s0 = arg0 + 0x2B4;
    temp_a0 = func_80033634_ovl_01() & 7;
    temp_s1 = (temp_a0 * 2) + 3;
    if ((u8) M2C_FIELD(temp_s0, u8 *, 9) >= 3U) {
        temp_a1 = M2C_FIELD(temp_s0, u8 *, 8);
        if (!(((s32) temp_a1 >> temp_a0) & 1)) {
            M2C_FIELD(temp_s0, u8 *, 8) = (u8) (temp_a1 | (1 << temp_a0));
            M2C_FIELD(temp_s0, u8 *, 9) = (u8) (M2C_FIELD(temp_s0, u8 *, 9) - 1);
            temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x234) + (temp_s1 * 0x178);
            var_v1 = M2C_FIELD(temp_a0_2, s32 *, 0x178);
            temp_t0 = temp_a0_2 + 0x178;
            if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21962) & 8) {
                var_v1 |= 0x1062;
            }
            M2C_FIELD(temp_a0_2, s32 *, 0x178) = var_v1;
            M2C_FIELD(temp_t0, s32 *, 0x60) = 0x101F3F;
            M2C_FIELD(temp_t0, s16 *, 0x2C) = 0x64;
            M2C_FIELD(temp_t0, s16 *, 0x11E) = 0;
            M2C_FIELD(temp_t0, s16 *, 0x2A) = 0;
            M2C_FIELD(temp_t0, s8 *, 0x111) = 0x1E;
            M2C_FIELD(temp_t0, s16 *, 0x2E) = 0;
            M2C_FIELD(temp_t0, s16 *, 0x28) = (s16) (M2C_FIELD(arg0, u16 *, 0x66) + 0x800);
            M2C_FIELD(temp_t0, s16 *, 0x32) = 0x400;
            M2C_FIELD(temp_t0, u16 *, 0x30) = (u16) M2C_FIELD(arg0, u16 *, 0x66);
        }
    }
    func_80166FBC_ovl_17(arg0, temp_s1, 7);
    M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x234) + (temp_s1 * 0x178)), s32 *, 0x60) = 0x102F4F;
    M2C_FIELD(arg0, s8 *, 5) = 2;
    func_80164748_ovl_17(arg0, arg1, arg2, 0x102F4F);
}
