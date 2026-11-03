/* Partial candidate from function #265497 in project #68; rechecked locally. */
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

M2C_UNK func_800362C0_ovl_01(void *, s32, M2C_UNK *); /* extern */
M2C_UNK func_80036764_ovl_01(void *, s32);     /* extern */
M2C_UNK func_80040E88_ovl_01(s32, s32);        /* extern */
M2C_UNK func_8004251C_ovl_01(s32, s32, s32);   /* extern */
extern M2C_UNK D_80173E2C_overlay_060;
extern M2C_UNK D_80173E98_overlay_060;

void func_801720C4_overlay_060(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;

    temp_s1 = arg0 + 0x14;
    temp_s0 = M2C_FIELD(arg0, s32 *, 0x234);
    func_80040E88_ovl_01(arg0 + 0x64, temp_s1);
    temp_s1_2 = temp_s0 + 0x38;
    func_8004251C_ovl_01(temp_s1, temp_s0 + 8, temp_s1_2);
    func_8004251C_ovl_01(temp_s1_2, temp_s0 + 0x180, temp_s0 + 0x1B0);
    func_8004251C_ovl_01(temp_s1_2, temp_s0 + 0x2F8, temp_s0 + 0x328);
    func_8004251C_ovl_01(temp_s1_2, temp_s0 + 0x470, temp_s0 + 0x4A0);
    func_800362C0_ovl_01(arg0, temp_s0, &D_80173E2C_overlay_060);
    func_800362C0_ovl_01(arg0, temp_s0, &D_80173E98_overlay_060);
    func_80036764_ovl_01(arg0, temp_s0);
}
