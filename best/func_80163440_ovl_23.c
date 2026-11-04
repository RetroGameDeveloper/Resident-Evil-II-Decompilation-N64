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

M2C_UNK func_80033A0C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK, void *); /* extern */
M2C_UNK func_80089D34_ovl_01(M2C_UNK);              /* extern */
M2C_UNK func_80162E5C_ovl_23(void *);               /* extern */
extern M2C_UNK D_800C7650_ovl_01;
extern u16 D_801660AC_ovl_23;
extern u16 D_801660AE_ovl_23;
extern M2C_UNK func_801656D4_ovl_23;

void func_80163440_ovl_23(void *arg0) {
    s16 var_v0;

    M2C_FIELD(&D_800C7650_ovl_01, M2C_UNK **, 0x18304) = &func_801656D4_ovl_23;
    M2C_FIELD(arg0, s32 *, 4) = 0x01080000;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    func_80089D34_ovl_01(0x1000);
    M2C_FIELD(arg0, s8 *, 0x25D) = 5;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x1C000000);
    if (M2C_FIELD(&D_800C7650_ovl_01, s32 *, 0x19A3C) & 0x20) {
        var_v0 = D_801660AC_ovl_23 + 0x4E20;
    } else {
        var_v0 = D_801660AE_ovl_23 + 0x4E20;
    }
    M2C_FIELD(arg0, s16 *, 0x1F2) = var_v0;
    M2C_FIELD(arg0, s16 *, 0x2B8) = 2;
    M2C_FIELD(arg0, s32 *, 0x284) = 1;
    M2C_FIELD(arg0, s16 *, 0x134) = -0x708;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x708;
    M2C_FIELD(arg0, s8 *, 0x2BA) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C4) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C5) = 0;
    M2C_FIELD(arg0, s32 *, 0x2BC) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C0) = 0;
    M2C_FIELD(arg0, s8 *, 0x2C6) = 0;
    M2C_FIELD(arg0, s16 *, 0x2D0) = 0;
    M2C_FIELD(arg0, s8 *, 0x2D2) = 0;
    M2C_FIELD(arg0, s16 *, 0x270) = 0;
    M2C_FIELD(arg0, s16 *, 0x272) = 0;
    M2C_FIELD(arg0, s16 *, 0x274) = 0;
    M2C_FIELD(arg0, s16 *, 0x276) = 0;
    M2C_FIELD(arg0, s16 *, 0x130) = 0;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s16 *, 0x12C) = 0x3E8;
    M2C_FIELD(arg0, s16 *, 0x136) = 0x3E8;
    M2C_FIELD(arg0, s16 *, 0x12E) = 0x3E8;
    M2C_FIELD(arg0, s16 *, 0x138) = 0x3E8;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x320;
    func_80162E5C_ovl_23(arg0);
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x02EE0226, 0, arg0 + 0x28);
}
