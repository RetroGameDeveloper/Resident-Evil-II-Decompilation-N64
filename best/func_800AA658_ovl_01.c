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

M2C_UNK func_800A5618_ovl_01();                     /* extern */
M2C_UNK func_800A5660_ovl_01();                     /* extern */
M2C_UNK func_800AAF30_ovl_01(void *, f32 *);        /* extern */
M2C_UNK func_800AB26C_ovl_01(void *, void *, void *); /* extern */
extern f32 D_800BA7D4_ovl_01;
extern u8 D_801362B0_ovl_01;

s32 func_800AA658_ovl_01(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, u8 arg5) {
    f32 sp10;
    f32 sp14;
    M2C_UNK32 sp18;
    f32 sp1C;
    f32 sp20;
    M2C_UNK32 sp24;
    f32 sp28;
    f32 sp2C;
    M2C_UNK32 sp30;
    M2C_UNK32 sp34;
    M2C_UNK32 sp38;
    M2C_UNK32 sp3C;

    if (D_801362B0_ovl_01 == 0) {
        return 0;
    }
    func_800A5618_ovl_01();
    M2C_FIELD(arg0, M2C_UNK32 *, 0xC) = (M2C_UNK32) M2C_FIELD(arg1, M2C_UNK32 *, 0);
    M2C_FIELD(arg0, M2C_UNK32 *, 0x10) = (M2C_UNK32) M2C_FIELD(arg1, M2C_UNK32 *, 4);
    M2C_FIELD(arg0, M2C_UNK32 *, 0x14) = (M2C_UNK32) M2C_FIELD(arg1, M2C_UNK32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg2, s32 *, 8);
    M2C_FIELD(arg0, M2C_UNK32 *, 0x24) = (M2C_UNK32) M2C_FIELD(arg3, M2C_UNK32 *, 0);
    M2C_FIELD(arg0, M2C_UNK32 *, 0x28) = (M2C_UNK32) M2C_FIELD(arg3, M2C_UNK32 *, 4);
    M2C_FIELD(arg0, M2C_UNK32 *, 0x2C) = (M2C_UNK32) M2C_FIELD(arg3, M2C_UNK32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) -M2C_FIELD(arg4, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) -M2C_FIELD(arg4, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) -M2C_FIELD(arg4, f32 *, 8);
    func_800AB26C_ovl_01(arg0 + 0x30, arg0 + 0x3C, arg0 + 0x24);
    sp10 = M2C_FIELD(arg0, f32 *, 0x30);
    sp1C = M2C_FIELD(arg0, f32 *, 0x34);
    sp28 = M2C_FIELD(arg0, f32 *, 0x38);
    sp14 = M2C_FIELD(arg0, f32 *, 0x3C);
    sp20 = M2C_FIELD(arg0, f32 *, 0x40);
    sp2C = M2C_FIELD(arg0, f32 *, 0x44);
    sp18 = M2C_FIELD(arg0, M2C_UNK32 *, 0x24);
    sp24 = M2C_FIELD(arg0, M2C_UNK32 *, 0x28);
    sp30 = M2C_FIELD(arg0, M2C_UNK32 *, 0x2C);
    sp34 = M2C_FIELD(arg0, M2C_UNK32 *, 0xC);
    sp38 = M2C_FIELD(arg0, M2C_UNK32 *, 0x10);
    sp3C = M2C_FIELD(arg0, M2C_UNK32 *, 0x14);
    func_800AAF30_ovl_01(arg0 + 0x48, &sp10);
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) ((f32) (arg5 & 0xFF) / D_800BA7D4_ovl_01);
    func_800A5660_ovl_01();
    return 1;
}
