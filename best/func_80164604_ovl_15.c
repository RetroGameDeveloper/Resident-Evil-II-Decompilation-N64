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

M2C_UNK func_8003334C_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_80052C00_ovl_01(M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_80052D40_ovl_01(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80077B0C_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
extern volatile u8 D_800C7650_ovl_01;

void func_80164604_ovl_15(void *arg0, s32 arg1, s32 arg2) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_80052D40_ovl_01(0xA, 0x28, 0x96, 0xB);
        func_80052C00_ovl_01(3, 0x16);
        func_80052C00_ovl_01(3, 0x1A);
        func_80052D40_ovl_01(0x41, 0xF0, 0x78, 0x15);
        func_80052D40_ovl_01(0xA, 0xF5, 0x46, 0x56);
        func_80052D40_ovl_01(5, 0x46, 0x8C, 0x6A);
        func_80052C00_ovl_01(3, 0x6E);
        func_80052D40_ovl_01(0x14, 0xFF, 0x78, 0x6C);
        func_80052D40_ovl_01(0x14, 0xBE, 0x64, 0x80);
        func_80052D40_ovl_01(0x91, 0xA0, 0x1E, 0x94);
        M2C_FIELD(arg0, s16 *, 0x1F4) = 0;
        *(volatile s32*)((s8*)&D_800C7650_ovl_01+0x19A60) |= 0x01000000;
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
        /* fallthrough */
    case 1:
        M2C_FIELD(arg0, u8 *, 0x1E9) = 0U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x02000300;
        func_80089D34_ovl_01(arg0, M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218), 0x400);
        if (M2C_FIELD(arg0, s16 *, 0x1F4) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000000;
            M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + 1);
            return;
        }
        return;
    case 2:
        func_8003334C_ovl_01(arg0, arg1, arg2, 0);
        if (M2C_FIELD(arg0, u8 *, 0x1E9) == 3) {
            func_80077B0C_ovl_01(0x04020001, arg0 + 0x28);
        }
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + func_80089D34_ovl_01(arg0, arg1, arg2, 0x1000));
        return;
    case 3:
        *(volatile s8*)((s8*)&D_800C7650_ovl_01+0x19CEF) = (s8)0x80;
        break;
    }
}
