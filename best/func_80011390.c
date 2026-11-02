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

M2C_UNK func_80000DD4(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_800072E0();                                /* extern */
M2C_UNK func_80007300(s32);                         /* extern */
extern M2C_UNK D_80012948;
extern void *D_80012950;

void func_80011390(void) {
    s32 temp_s0;

    temp_s0 = func_800072E0();
    M2C_FIELD(D_80012950, s16 *, 0x10) = 2;
    func_80000DD4(&D_80012948, 2);
    func_80007300(temp_s0);
}
