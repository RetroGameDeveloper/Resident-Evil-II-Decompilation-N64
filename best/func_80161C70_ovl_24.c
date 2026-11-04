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

M2C_UNK func_80161CC8_ovl_24(s32, s32);             /* extern */
M2C_UNK func_80161D30_ovl_24(s32, s32);             /* extern */

void func_80161C70_ovl_24(void *arg0) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 4);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_80161CC8_ovl_24(M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218));
        return;
    case 1:
        func_80161D30_ovl_24(M2C_FIELD(arg0, s32 *, 0x1A4), M2C_FIELD(arg0, s32 *, 0x218));
        return;
    }
}
