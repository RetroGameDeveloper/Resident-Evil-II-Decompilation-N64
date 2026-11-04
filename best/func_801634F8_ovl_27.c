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

M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80163AD0_ovl_27(void *);               /* extern */
M2C_UNK func_80163B38_ovl_27(void *, s32, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_801634F8_ovl_27(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_UNK var_a2;
    s16 temp_v0_2;
    s32 temp_s0;
    s32 temp_s0_2;
    u16 temp_v0;
    u32 var_s0;

    if (M2C_FIELD(arg0, u8 *, 6) == 0) {
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x212) = 0x1000;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x800);
        temp_s0 = func_80033634_ovl_01();
        temp_s0_2 = (((temp_s0 & 1) + 5) << 0x18) + ((func_80033634_ovl_01() & 7) << 0x10) + 0x700;
        M2C_FIELD(arg0, u16 *, 0x1F4) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = temp_s0_2;
        M2C_FIELD(arg0, s16 *, 0x66) = 0x800;
        func_80035AAC_ovl_01_108(arg0);
        if (!(M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) & 0x10)) {
            func_80077D48_ovl_01(8, arg0);
        }
        M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) = (u16) (M2C_FIELD(&D_800C7650_ovl_01, u16 *, 0x19A78) | 0x10);
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
    M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
    var_s0 = 0;
    if ((temp_v0 << 0x10) == 0) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x800);
        var_a2 = 5;
        do {
            if (M2C_FIELD(arg0, s16 *, 0x212) >= 0x801) {
                var_a2 = 4;
            }
            func_80163B38_ovl_27(arg0, var_s0 & 0xFF, var_a2);
            var_s0 += 1;
            var_a2 = 5;
        } while (var_s0 < 3U);
        M2C_FIELD(arg0, u16 *, 0x1F4) = 0xCU;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x800);
    }
    func_80163AD0_ovl_27(arg0);
    temp_v0_2 = (u16) M2C_FIELD(arg0, s16 *, 0x212) - 0x20;
    M2C_FIELD(arg0, s16 *, 0x212) = temp_v0_2;
    if (temp_v0_2 & 0x8000) {
        M2C_FIELD(arg0, s16 *, 0x212) = 0;
        M2C_FIELD(arg0, s32 *, 4) = 0x07000000;
        M2C_FIELD(arg0, u16 *, 0x1AA) = (u16) (M2C_FIELD(arg0, u16 *, 0x1AA) | 0x4000);
    }
}
