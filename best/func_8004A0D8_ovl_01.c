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

void func_8004A0D8_ovl_01(void *arg0) {
    s32 *var_a1;
    s32 *var_a2;
    s32 temp_v0;
    u8 var_a3;
    void *var_a0;
    void *var_v1;

    var_a2 = M2C_FIELD(arg0, s32 **, 0x234);
    var_a1 = M2C_FIELD(arg0, s32 **, 0x240);
    var_a3 = M2C_FIELD(arg0, u8 *, 0x1A3);
    var_a0 = var_a1 + 0x140;
    var_v1 = var_a2 + 0x140;
    do {
        *var_a1 = *var_a2;
        M2C_FIELD(var_a0, s32 *, -0x138) = (s32) M2C_FIELD(var_v1, s32 *, -0x138);
        M2C_FIELD(var_a0, s32 *, -0x134) = (s32) M2C_FIELD(var_v1, s32 *, -0x134);
        M2C_FIELD(var_a0, s32 *, -0x130) = (s32) M2C_FIELD(var_v1, s32 *, -0x130);
        M2C_FIELD(var_a0, s32 *, -0x12C) = (s32) M2C_FIELD(var_v1, s32 *, -0x12C);
        M2C_FIELD(var_a0, s32 *, -0x128) = (s32) M2C_FIELD(var_v1, s32 *, -0x128);
        M2C_FIELD(var_a0, s32 *, -0x124) = (s32) M2C_FIELD(var_v1, s32 *, -0x124);
        M2C_FIELD(var_a0, s32 *, -0x120) = (s32) M2C_FIELD(var_v1, s32 *, -0x120);
        M2C_FIELD(var_a0, s32 *, -0x11C) = (s32) M2C_FIELD(var_v1, s32 *, -0x11C);
        M2C_FIELD(var_a0, s32 *, -0x108) = (s32) M2C_FIELD(var_v1, s32 *, -0x108);
        M2C_FIELD(var_a0, s32 *, -0x104) = (s32) M2C_FIELD(var_v1, s32 *, -0x104);
        M2C_FIELD(var_a0, s32 *, -0x100) = (s32) M2C_FIELD(var_v1, s32 *, -0x100);
        M2C_FIELD(var_a0, s32 *, -0xFC) = (s32) M2C_FIELD(var_v1, s32 *, -0xFC);
        M2C_FIELD(var_a0, s32 *, -0xF8) = (s32) M2C_FIELD(var_v1, s32 *, -0xF8);
        M2C_FIELD(var_a0, s32 *, -0xF4) = (s32) M2C_FIELD(var_v1, s32 *, -0xF4);
        M2C_FIELD(var_a0, s32 *, -0xF0) = (s32) M2C_FIELD(var_v1, s32 *, -0xF0);
        M2C_FIELD(var_a0, s32 *, -0xEC) = (s32) M2C_FIELD(var_v1, s32 *, -0xEC);
        M2C_FIELD(var_a0, s32 *, -0xDC) = (s32) M2C_FIELD(var_v1, s32 *, -0xDC);
        M2C_FIELD(var_a0, s32 *, -0x14) = (s32) M2C_FIELD(var_v1, s32 *, -0x14);
        M2C_FIELD(var_a0, u16 *, -0x24) = (u16) M2C_FIELD(var_v1, u16 *, -0x24);
        M2C_FIELD(var_a0, u8 *, -0x2F) = (u8) M2C_FIELD(var_v1, u8 *, -0x2F);
        M2C_FIELD(var_a0, u8 *, -0x2E) = (u8) M2C_FIELD(var_v1, u8 *, -0x2E);
        M2C_FIELD(var_a0, u16 *, -0x22) = (u16) M2C_FIELD(var_v1, u16 *, -0x22);
        M2C_FIELD(var_a0, M2C_UNK *, -0x1C) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, -0x1C));
        M2C_FIELD(var_a0, M2C_UNK *, -0x18) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, -0x18));
        M2C_FIELD(var_a0, M2C_UNK *, -0x2C) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, -0x2C));
        M2C_FIELD(var_a0, M2C_UNK *, -0x28) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, -0x28));
        M2C_FIELD(var_a0, M2C_UNK *, -0xE8) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, -0xE8));
        M2C_FIELD(var_a0, M2C_UNK *, -0xE4) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, -0xE4));
        M2C_FIELD(var_a0, M2C_UNK *, -0x118) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, -0x118));
        M2C_FIELD(var_a0, M2C_UNK *, -0x114) = M2C_UNALIGNED32(M2C_FIELD(var_v1, M2C_UNK *, -0x114));
        M2C_FIELD(var_a0, s32 *, -0x10) = (s32) M2C_FIELD(var_v1, s32 *, -0x10);
        var_a2 += 0x178;
        M2C_FIELD(var_a0, s32 *, -0xC) = (s32) M2C_FIELD(var_v1, s32 *, -0xC);
        var_a3 -= 1;
        M2C_FIELD(var_a0, s32 *, -8) = (s32) M2C_FIELD(var_v1, s32 *, -8);
        var_a1 += 0x178;
        M2C_FIELD(var_a0, s32 *, -4) = (s32) M2C_FIELD(var_v1, s32 *, -4);
        temp_v0 = M2C_FIELD(var_v1, s32 *, 0);
        var_v1 += 0x178;
        M2C_FIELD(var_a0, s32 *, 0) = temp_v0;
        var_a0 += 0x178;
    } while (var_a3 != 0);
}
