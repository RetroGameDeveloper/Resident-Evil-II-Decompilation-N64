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

s16 func_800844FC_ovl_01(s16);                      /* extern */
extern M2C_UNK D_800E8AFC_ovl_01;
extern M2C_UNK D_801170B8_ovl_01;

void func_80077AB0_ovl_01(u32 arg0) {
    s16 *temp_s0;

    temp_s0 = (M2C_FIELD(((arg0 >> 0x18) + &D_801170B8_ovl_01), u8 *, -1) * 2) + &D_800E8AFC_ovl_01 + ((arg0 >> 0xF) & 0x1FE);
    *temp_s0 = func_800844FC_ovl_01((s16) arg0);
}
