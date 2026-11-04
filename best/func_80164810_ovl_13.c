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

s16 func_80032D44_ovl_01(s16, s16, s16, s16);       /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80035AAC_ovl_01_108(void *);           /* extern */
M2C_UNK func_80164A70_ovl_13(s32, s16);             /* extern */
M2C_UNK func_80164AD0_ovl_13(s32, s16);             /* extern */
M2C_UNK func_80165BD8_ovl_13(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166080_ovl_13(void *);               /* extern */
M2C_UNK func_80166158_ovl_13(void *, s32);          /* extern */
extern M2C_UNK D_800C7650_ovl_01;

void func_80164810_ovl_13(void *arg0) {
    s16 temp_s0;
    s32 temp_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    M2C_FIELD(arg0, s16 *, 0x1E2) = 0;
    temp_s0 = func_80032D44_ovl_01(M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AAA), M2C_FIELD(&D_800C7650_ovl_01, s16 *, 0x19AB2), M2C_FIELD(arg0, s16 *, 0x2A), M2C_FIELD(arg0, s16 *, 0x32));
    temp_s2 = func_80033634_ovl_01() & 0xFF;
    func_80164A70_ovl_13(M2C_FIELD(arg0, s32 *, 0x234), temp_s0);
    if (temp_s2 & 1) {
        func_80164A70_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x178, temp_s0);
        func_80164A70_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x2F0, temp_s0);
        var_v0 = temp_s2 & 2;
    } else {
        func_80164AD0_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x178, temp_s0);
        func_80164AD0_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x2F0, temp_s0);
        var_v0 = temp_s2 & 2;
    }
    if (var_v0 != 0) {
        func_80164A70_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x468, temp_s0);
        func_80164A70_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x5E0, temp_s0);
        func_80164A70_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x758, temp_s0);
        var_v0_2 = temp_s2 & 4;
    } else {
        func_80164AD0_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x468, temp_s0);
        func_80164AD0_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x5E0, temp_s0);
        func_80164AD0_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x758, temp_s0);
        var_v0_2 = temp_s2 & 4;
    }
    if (var_v0_2 != 0) {
        func_80164A70_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x8D0, temp_s0);
        func_80164A70_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0xA48, temp_s0);
        func_80164A70_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0xBC0, temp_s0);
    } else {
        func_80164AD0_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x8D0, temp_s0);
        func_80164AD0_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0xA48, temp_s0);
        func_80164AD0_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0xBC0, temp_s0);
    }
    func_80164A70_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0xD38, temp_s0);
    func_80164A70_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0xEB0, temp_s0);
    if (temp_s2 & 8) {
        func_80164A70_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x1028, temp_s0);
        var_v0_3 = temp_s2 & 0x10;
    } else {
        func_80164AD0_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x1028, temp_s0);
        var_v0_3 = temp_s2 & 0x10;
    }
    if (var_v0_3 != 0) {
        func_80164A70_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x11A0, temp_s0);
    } else {
        func_80164AD0_ovl_13(M2C_FIELD(arg0, s32 *, 0x234) + 0x11A0, temp_s0);
    }
    func_80166080_ovl_13(arg0);
    func_80166080_ovl_13(arg0);
    func_80166080_ovl_13(arg0);
    func_80166158_ovl_13(arg0, (func_80033634_ovl_01() & 3) | 8);
    func_80035AAC_ovl_01_108(arg0);
    func_80165BD8_ovl_13(arg0, 7, 1);
}
