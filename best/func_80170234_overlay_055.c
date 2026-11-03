/* Partial candidate from function #265157 in project #68; rechecked locally. */
/* machine draft (m2c) for sn-n64-272-0004 -G0 -mips3 -O1 -mgas -meb -mhard-float, tried by autopilot */
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

void func_80170234_overlay_055(void *arg0, void *arg1, s32 arg2) {
    void *temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x234) + (arg2 * 0x178);
    M2C_FIELD(arg1, u16 *, 0) = (u16) M2C_FIELD(temp_v0, u16 *, 0x4E);
    M2C_FIELD(arg1, u16 *, 2) = (u16) M2C_FIELD(temp_v0, u16 *, 0x52);
    M2C_FIELD(arg1, u16 *, 4) = (u16) M2C_FIELD(temp_v0, u16 *, 0x56);
}
