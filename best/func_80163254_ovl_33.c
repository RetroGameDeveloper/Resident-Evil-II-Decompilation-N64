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

M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166684_ovl_33(void *, s32, s32, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80163254_ovl_33(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_s0;
    s32 temp_s0_2;
    u16 temp_v0_2;
    u32 temp_hi;
    u32 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_s0 = func_80033634_ovl_01();
        temp_v0 = func_80033634_ovl_01() & 0xFF;
        temp_hi = MULTU_HI((temp_v0 >> 1), 0xB60B60B7);
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((temp_s0 & 3) + 9) << 0x18) + (((temp_v0 - ((temp_hi >> 5) * 0x5A)) & 0xFF) << 0x10) + 0x3F00);
        M2C_FIELD(arg0, u16 *, 0x1F6) = (u16) ((func_80033634_ovl_01() & 0xF) + 0x3C);
        M2C_FIELD(arg0, s8 *, 0x206) = 3;
        /* fallthrough */
    case 1:
        func_80166684_ovl_33(arg0, M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CB4), s32 *, 0x50), M2C_FIELD(M2C_FIELD(&D_800C7650_ovl_01, void **, 0x19CB4), s32 *, 0x54), 8);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
        temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x1F6) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F6) = temp_v0_2;
        if ((s16) temp_v0_2 == -1) {
            temp_s0_2 = func_80033634_ovl_01();
            M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((((((temp_s0_2 & 0xFF) % 3) & 0xFF) + 9) << 0x18) + ((((func_80033634_ovl_01() & 0xFF) % 90) & 0xFF) << 0x10) + 0x3F00);
            M2C_FIELD(arg0, s16 *, 0x1F4) = (s16) ((func_80033634_ovl_01() & 0xF) + 0x3C);
        }
        return;
    }
}
