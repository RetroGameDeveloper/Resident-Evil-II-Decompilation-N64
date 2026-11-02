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

s32 func_80033634_ovl_01(u16, u16);                 /* extern */
M2C_UNK func_80039AD0_ovl_01(void *, s32);          /* extern */
extern void *D_800EBB34_ovl_01;

void func_80039C64_ovl_01(void) {
    u16 temp_a0;
    u16 temp_a1;

    temp_a0 = M2C_FIELD(D_800EBB34_ovl_01, u16 *, 0x14);
    temp_a1 = M2C_FIELD(D_800EBB34_ovl_01, u16 *, 0x12);
    M2C_FIELD(D_800EBB34_ovl_01, u16 *, 0x18) = temp_a1;
    M2C_FIELD(D_800EBB34_ovl_01, u16 *, 0x2A) = (u16) (M2C_FIELD(D_800EBB34_ovl_01, u16 *, 0x2A) | temp_a0);
    M2C_FIELD(D_800EBB34_ovl_01, u8 *, 0x21) = (u8) (M2C_FIELD(D_800EBB34_ovl_01, u8 *, 2) + ((s32) (func_80033634_ovl_01(temp_a0, temp_a1) & 0xFF) % (s32) (M2C_FIELD(D_800EBB34_ovl_01, u16 *, 0x16) + 1)));
    M2C_FIELD(D_800EBB34_ovl_01, u8 *, 0x20) = (u8) M2C_FIELD((M2C_FIELD(D_800EBB34_ovl_01, s32 *, 0x70) + (M2C_FIELD(D_800EBB34_ovl_01, u8 *, 0x21) * 8)), u8 *, 2);
    M2C_FIELD(D_800EBB34_ovl_01, u8 *, 0x1F) = (u8) (M2C_FIELD(D_800EBB34_ovl_01, u8 *, 0x1F) + M2C_FIELD(D_800EBB34_ovl_01, u8 *, 0xB));
    func_80039AD0_ovl_01(D_800EBB34_ovl_01, M2C_FIELD(D_800EBB34_ovl_01, s32 *, 0x78) + (M2C_FIELD(D_800EBB34_ovl_01, u8 *, 0x1F) * 0x18));
}
