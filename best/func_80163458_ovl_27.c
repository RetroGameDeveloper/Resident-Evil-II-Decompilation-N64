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

M2C_UNK func_80083788_ovl_01(M2C_UNK *, M2C_UNK);   /* extern */
M2C_UNK func_8016281C_ovl_27(void *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_800E8CA0_ovl_01;
extern u32 D_80163CD0_ovl_27;

void func_80163458_ovl_27(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if ((u32) D_80163CD0_ovl_27 < 4U) {
        D_80163CD0_ovl_27 += 1;
    } else {
        func_80083788_ovl_01(&D_800E8CA0_ovl_01, 0x14);
    }
    M2C_FIELD(arg0, s16 *, 0x1F2) = 1;
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, u8 *, 0x2C9) << 8) + (M2C_FIELD(arg0, u8 *, 0x2CA) + 0x90000) + 0x01000000);
    func_8016281C_ovl_27(arg0, arg1, arg2);
}
