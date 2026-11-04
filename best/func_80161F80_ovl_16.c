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

void func_80161F80_ovl_16(void *arg0) {
    s32 sp10;
    s32 sp18;

    sp10 = (s32) M2C_FIELD(arg0, s16 *, 0x2D0);
    sp18 = (s32) M2C_FIELD(arg0, s16 *, 0x2D4);
    if (!(M2C_FIELD(arg0, u16 *, 0x2C8) & 0x10) && (func_80036764_ovl_01_2FC(arg0 + 0x28, &sp10, 0x30) != 0)) {
        M2C_FIELD(arg0, u16 *, 0x2C8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C8) | 0x10);
    }
    if (!(M2C_FIELD(arg0, u16 *, 0x2C8) & 0x20) && (func_80036764_ovl_01_510_24(arg0 + 0x2C, (s32) M2C_FIELD(arg0, s16 *, 0x2D2), 0x30, M2C_ERROR(/* Read from unset register $a3 */)) != 0)) {
        M2C_FIELD(arg0, u16 *, 0x2C8) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C8) | 0x10);
    }
    D_800371D4(arg0, M2C_FIELD(arg0, u8 *, 0x2B4) << 0xA, 0x20);
}
