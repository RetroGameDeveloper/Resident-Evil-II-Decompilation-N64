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

s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
M2C_UNK func_80040E88_ovl_01(s16 *, M2C_UNK *);     /* extern */
M2C_UNK func_8004279C_ovl_01(M2C_UNK *, s16 *, void *); /* extern */
M2C_UNK func_80077B0C_ovl_01(s32, void *, M2C_UNK); /* extern */
s32 func_80089D34_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80165B78_ovl_33(void *arg0) {
    M2C_UNK sp10;
    s16 sp30;
    s16 sp32;
    s16 sp34;
    u8 temp_v1;
    u8 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((M2C_FIELD(arg0, u8 *, 5) & 1) + 3) << 0x18) + 0x300);
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        func_80077B0C_ovl_01((((M2C_FIELD(arg0, u8 *, 5) & 1) + 1) << 0x10) | 0x04000001, arg0 + 0x28, 1);
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 0x12);
        sp32 = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D40), s16 *, 0x2A), M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19D40), s16 *, 0x32));
        sp30 = 0;
        sp34 = 0;
        func_80040E88_ovl_01(&sp30, &sp10);
        sp30 = 0x320;
        sp32 = 0;
        func_8004279C_ovl_01(&sp10, &sp30, arg0 + 0x1E0);
        /* fallthrough */
    case 1:
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 6) + func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218), 0x200);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + M2C_FIELD(arg0, s16 *, 0x1E0));
        M2C_FIELD(arg0, u8 *, 6) = temp_v1_2;
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) + M2C_FIELD(arg0, s16 *, 0x1E4));
        M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) ((s32) ((u16) M2C_FIELD(arg0, s16 *, 0x1E0) << 0x10) >> 0x11);
        M2C_FIELD(arg0, s16 *, 0x1E4) = (s16) ((s32) ((u16) M2C_FIELD(arg0, s16 *, 0x1E4) << 0x10) >> 0x11);
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
        M2C_FIELD(arg0, u8 *, 0x26F) = 0U;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) & 0xED);
        return;
    }
}
