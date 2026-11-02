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

M2C_UNK func_8003D174_ovl_01();                     /* extern */
s32 func_80060A0C_ovl_01(s32 *, s16, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK D_800B86E8_ovl_01;
extern void *D_800EBB34_ovl_01;

void func_8003C208_ovl_01(void) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    M2C_UNK sp20;
    M2C_UNK sp24;

    sp20 = M2C_UNALIGNED32(M2C_FIELD(&D_800B86E8_ovl_01, M2C_UNK *, 0));
    sp24 = M2C_UNALIGNED32(M2C_FIELD(&D_800B86E8_ovl_01, M2C_UNK *, 4));
    sp10 = (s32) M2C_FIELD(D_800EBB34_ovl_01, s16 *, 0x34);
    sp14 = M2C_FIELD(D_800EBB34_ovl_01, s16 *, 0x36) - 0x64;
    sp18 = (s32) M2C_FIELD(D_800EBB34_ovl_01, s16 *, 0x38);
    if (func_80060A0C_ovl_01(&sp10, M2C_FIELD(D_800EBB34_ovl_01, s16 *, 0x22), &sp20, 0x2002000A) != 0) {
        func_8003D174_ovl_01();
    }
}
