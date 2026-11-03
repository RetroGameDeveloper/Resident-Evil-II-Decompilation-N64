/* Partial candidate from function #264004 in project #68; rechecked locally. */
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

M2C_UNK func_8017D070_ovl_02();                /* extern */
M2C_UNK func_8017DD30_ovl_02(s32);             /* extern */
extern s32 D_80186C18_overlay_002;

void func_80181358_ovl_02(void) {
    func_8017DD30_ovl_02(D_80186C18_overlay_002);
    D_80186C18_overlay_002 += 1;
    func_8017D070_ovl_02();
}
