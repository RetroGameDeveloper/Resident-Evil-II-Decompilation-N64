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

M2C_UNK func_80066804_ovl_01(s32 *, M2C_UNK, s32, M2C_UNK); /* extern */
s32 func_8006A45C_ovl_01(void *, s32);              /* extern */
M2C_UNK func_8008386C_ovl_01(s16, s32, s16 *, s16 *); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_801686D8_ovl_14;

s32 func_80162ED8_ovl_14(void *arg0, s32 arg1, s32 arg2) {
    s16 sp10;
    s16 sp14;
    s32 sp18;
    s32 sp20;
    s32 var_v0;
    s32 var_v1;

    sp10 = M2C_UNALIGNED32(M2C_FIELD(&D_801686D8_ovl_14, M2C_UNK *, 0));
    sp14 = M2C_UNALIGNED32(M2C_FIELD(&D_801686D8_ovl_14, M2C_UNK *, 4));
    func_8008386C_ovl_01(M2C_FIELD(arg0, s16 *, 0x66), M2C_FIELD(arg0, s32 *, 0x70), &sp10, &sp10);
    sp18 = M2C_FIELD(arg0, s32 *, 0x28) + sp10;
    sp20 = M2C_FIELD(arg0, s32 *, 0x30) + sp14;
    func_80066804_ovl_01(&sp18, 0x190, 1 << M2C_FIELD(arg0, u8 *, 0x1A2), 0x400);
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x199B8) == 0) {
        M2C_FIELD(arg0, u8 *, 0x2CC) = 0U;
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2CC) == 0) {
        var_v1 = ((u16) M2C_FIELD(arg0, s16 *, 0x66) & 0xFFF) - ((((func_8006A45C_ovl_01(arg0 + 0x28, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x199B8)) & 0xFFFF) << 0xA) + 0x800) & 0xFFF);
        var_v0 = var_v1;
        if (var_v1 < 0) {
            var_v0 = -var_v1;
        }
        if (var_v0 >= 0x801) {
            var_v1 -= 0x1000;
        }
        if (var_v1 != 0) {
            M2C_FIELD(arg0, u8 *, 0x2CC) = (u8) arg1;
        } else {
            M2C_FIELD(arg0, u8 *, 0x2CC) = (u8) -arg1;
        }
        if (arg2 != 0) {
            M2C_FIELD(arg0, u8 *, 0x2CC) = (u8) -(s32) M2C_FIELD(arg0, u8 *, 0x2CC);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x66) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x66) + (s8) M2C_FIELD(arg0, u8 *, 0x2CC));
    return 1;
}
