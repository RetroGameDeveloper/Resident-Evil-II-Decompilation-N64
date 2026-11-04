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

M2C_UNK func_80032B8C_ovl_01(void *, s32, s16);     /* extern */
M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
s32 func_80032EA4_ovl_01(void *, s32, s32, M2C_UNK); /* extern */
M2C_UNK func_800377B0_ovl_01(s32, s16, s32, s16 *); /* extern */
M2C_UNK func_80077D48_ovl_01(M2C_UNK, void *);      /* extern */
s32 func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern M2C_UNK D_8016DD9C_ovl_11;

void func_801695CC_ovl_11(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s16 sp10;
    s16 sp12;
    s16 sp14;
    M2C_UNK sp18;
    M2C_UNK sp1C;
    s16 temp_a2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 var_a0;
    s32 var_a2;
    s32 var_s1;
    u8 temp_v0;
    u8 temp_v1;

    sp18 = M2C_UNALIGNED32(M2C_FIELD(&D_8016DD9C_ovl_11, M2C_UNK *, 0));
    sp1C = M2C_UNALIGNED32(M2C_FIELD(&D_8016DD9C_ovl_11, M2C_UNK *, 4));
    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    switch (temp_v1) {                              /* irregular */
    case 0:
        temp_v0 = *(&sp18 + (func_80033634_ovl_01() & 7));
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) ((temp_v0 << 0x18) + 0x700);
        M2C_FIELD(arg0, s16 *, 0x1F4) = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AAA), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AB2));
        if ((M2C_FIELD(arg0, u8 *, 0x26E) % 3) & 0xFF) {
            temp_s1 = M2C_FIELD(arg0, s32 *, 0x234);
            sp10 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            sp12 = 0x138 - ((func_80033634_ovl_01() & 0xFF) * 4);
            sp14 = 0x100 - ((func_80033634_ovl_01() & 0xFF) * 2);
            temp_s0 = func_80033634_ovl_01();
            var_a0 = ((temp_s0 & 1) << 0x10) | (((func_80033634_ovl_01() & 0xFF) * 8) + 0x1B58);
            var_a2 = temp_s1 + 0x38;
        } else {
            temp_s1_2 = M2C_FIELD(arg0, s32 *, 0x234);
            sp10 = 0x7F - (func_80033634_ovl_01() & 0xFF);
            sp12 = 0x39F - (func_80033634_ovl_01() & 0xFF);
            sp14 = 0x7F - (func_80033634_ovl_01() & 0xFF);
            temp_s0_2 = func_80033634_ovl_01();
            var_a0 = ((temp_s0_2 & 1) << 0x10) | (((func_80033634_ovl_01() & 0xFF) * 8) + 0x17D0);
            var_a2 = temp_s1_2 + 0x1B0;
        }
        func_800377B0_ovl_01(var_a0, M2C_FIELD(arg0, s16 *, 0x1F4), var_a2, &sp10);
        if (M2C_FIELD(arg0, u8 *, 0x2D5) == 0) {
            func_80077D48_ovl_01(0xC, arg0);
            M2C_FIELD(arg0, u8 *, 0x2D5) = 0x96U;
        }
        M2C_FIELD(arg0, s16 *, 0x1F4) = func_80032D44_ovl_01(M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AAA), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AB2));
        M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) ((func_80033634_ovl_01() & 0x3F) + 0x14);
        temp_a2 = M2C_FIELD(arg0, s16 *, 0x66);
        M2C_FIELD(arg0, s16 *, 0x1E4) = (s16) (0x40 - (func_80033634_ovl_01() & 0x7F));
        func_80032B8C_ovl_01(arg0, (M2C_FIELD(arg0, s16 *, 0x1F4) - temp_a2) + 0x800, temp_a2);
        M2C_FIELD(arg0, s16 *, 0x66) = (s16) ((u16) M2C_FIELD(arg0, s16 *, 0x66) - ((func_80033634_ovl_01() & 0x7F) - 0x40));
        func_80032DEC_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x10);
        /* fallthrough */
    case 1:
        M2C_FIELD(arg0, u8 *, 6) = (u8) (M2C_FIELD(arg0, u8 *, 6) + func_80089D34_ovl_01(arg0, arg1, arg2, 0x200));
        return;
    case 2:
        M2C_FIELD(arg0, s32 *, 4) = 0x01010000;
        if (func_80033634_ovl_01() & 1) {
            M2C_FIELD(arg0, s32 *, 4) = 0x01020000;
        }
        var_s1 = 0;
        if ((func_80032EA4_ovl_01(arg0, M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AA8), M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19AB0), 0x200) == 0) && ((u32) M2C_FIELD(arg0, u32 *, 0x28C) < 0x1388U) && !(M2C_FIELD(&D_800C7650_ovl_01, u8 *, 0x19CEF) & 0x80)) {
            var_s1 = (func_80033634_ovl_01() & 7) == 0;
        }
        if (var_s1 != 0) {
            M2C_FIELD(arg0, s32 *, 4) = 0x010B0000;
        }
        return;
    }
}
