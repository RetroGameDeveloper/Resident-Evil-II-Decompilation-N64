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

M2C_UNK func_800336B0_ovl_01(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80035AAC_ovl_01_108(void *);           /* extern */
M2C_UNK func_800377B0_ovl_01(M2C_UNK, s16, s32, u16 *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *, M2C_UNK, void *); /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_8016B994_ovl_11(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u16 sp18;
    u16 sp1A;
    u16 sp1C;
    s32 temp_s0_2;
    s32 var_a1;
    u8 temp_v1;
    void *temp_a3;
    void *temp_s0;
    void *temp_s0_3;
    void *temp_s0_4;

    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s32 *, 0x1E8) = 0x020A0300;
        M2C_FIELD(arg0, s8 *, 0x206) = 1;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        temp_s0 = M2C_FIELD(arg0, void **, 0x234) + 0xBC0;
        M2C_FIELD(arg0, u16 *, 0x2B6) = (u16) (M2C_FIELD(arg0, u16 *, 0x2B6) | 4);
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) | 0x80);
        sp18 = M2C_FIELD(temp_s0, u16 *, 0x1E);
        sp1A = M2C_FIELD(temp_s0, u16 *, 0x22) + 0x12C;
        sp1C = M2C_FIELD(temp_s0, u16 *, 0x26);
        temp_s0_2 = M2C_FIELD(arg0, void **, 0x234) + 0x38;
        func_800377B0_ovl_01(0x1F40, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2, &sp18);
        sp1A -= 0x190;
        func_800377B0_ovl_01(0x08001B58, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2, &sp18);
        func_800377B0_ovl_01(0x21F40, M2C_FIELD(arg0, s16 *, 0x66), temp_s0_2, &sp18);
        temp_a3 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(arg0, s8 *, 0x25C) = 1;
        var_a1 = M2C_FIELD(temp_a3, s32 *, 0xBC0);
        temp_s0_3 = temp_a3 + 0xBC0;
        if (M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x21962) & 8) {
            var_a1 |= 0x4A;
        }
        M2C_FIELD(temp_a3, s32 *, 0xBC0) = var_a1;
        M2C_FIELD(temp_s0_3, s16 *, 0x132) = -0x64;
        M2C_FIELD(temp_s0_3, s16 *, 0x130) = 0;
        M2C_FIELD(temp_s0_3, s16 *, 0x138) = 0;
        M2C_FIELD(temp_s0_3, s16 *, 0x134) = 0;
        M2C_FIELD(temp_s0_3, s16 *, 0x136) = 0xA;
        M2C_FIELD(temp_s0_3, s16 *, 0x13C) = 0;
        M2C_FIELD(temp_s0_3, s32 *, 0x60) = 0x101040;
        temp_s0_4 = M2C_FIELD(arg0, void **, 0x234);
        M2C_FIELD(temp_s0_4, s32 *, 0x130) = 0x40;
        M2C_FIELD(temp_s0_4, s32 *, 0x134) = 0x101010;
        M2C_FIELD(temp_s0_4, s32 *, 0) = (s32) (M2C_FIELD(temp_s0_4, s32 *, 0) | 0x80);
        func_80077D48_ovl_01(2, arg0, 0x101010, temp_a3);
        func_80035AAC_ovl_01_108(arg0);
        /* fallthrough */
    case 1:
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + func_80089D34_ovl_01(arg0, arg1, arg2, 0x100));
        if (M2C_FIELD(arg0, u8 *, 0x1EA) == 0) {
            func_800336B0_ovl_01(arg0, 0, 1);
            return;
        }
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 4) = 0x07000000;
        break;
    }
}
