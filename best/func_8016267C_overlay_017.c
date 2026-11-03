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

s32 func_80033634_ovl_01(s32 *, M2C_UNK);           /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_80166A84_ovl_17(void *, s16);              /* extern */
M2C_UNK func_801678B8_ovl_17(void *);               /* extern */
extern M2C_UNK D_80167B80_ovl_17;

void func_8016267C_overlay_017(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 temp_a0;
    u16 temp_v0;
    u16 temp_v1_2;
    u8 temp_v1;

    sp10 = M2C_FIELD(&D_80167B80_ovl_17, s32 *, 0);
    sp14 = M2C_FIELD(&D_80167B80_ovl_17, s32 *, 4);
    sp18 = M2C_FIELD(&D_80167B80_ovl_17, s32 *, 8);
    sp1C = M2C_FIELD(&D_80167B80_ovl_17, s32 *, 0xC);
    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((*(&sp10 + ((M2C_FIELD(arg0, u8 *, 5) - 5) * 8)) << 0x18) + 0x300);
        M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) ((func_80033634_ovl_01(&sp10, 1) & 0x1F) + 0x3C);
        /* fallthrough */
    case 1:
        temp_a0 = func_80166A84_ovl_17(arg0, (s16) M2C_FIELD((&sp10 + ((M2C_FIELD(arg0, u8 *, 5) - 5) * 8)), u16 *, 6));
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x66) + temp_a0;
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F6) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F6) = temp_v0;
        M2C_FIELD(arg0, u16 *, 0x66) = temp_v1_2;
        if (((s16) temp_v0 == -1) || ((temp_a0 << 0x10) == 0)) {
            M2C_FIELD(arg0, u8 *, 6) = 2U;
        }
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x400);
        func_801678B8_ovl_17(arg0);
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
        return;
    }
}
