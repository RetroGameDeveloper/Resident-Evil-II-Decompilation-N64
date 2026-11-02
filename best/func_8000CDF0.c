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

M2C_UNK func_80000DD4(void **);                     /* extern */
M2C_UNK func_80000F08(s32, void *);                 /* extern */
s32 func_800072E0();                                /* extern */
M2C_UNK func_80007300(s32);                         /* extern */
M2C_UNK func_8000DED0(s32, void *);                 /* extern */
extern void *D_80012948;
extern void *D_80012950;

void func_8000CDF0(void *arg0, s32 arg1) {
    s32 temp_s2;
    void *var_s0;

    var_s0 = arg0;
    temp_s2 = func_800072E0();
    if (var_s0 == NULL) {
        var_s0 = D_80012950;
    }
    if (M2C_FIELD(var_s0, s32 *, 4) != arg1) {
        M2C_FIELD(var_s0, s32 *, 4) = arg1;
        if ((var_s0 != D_80012950) && (M2C_FIELD(var_s0, u16 *, 0x10) != 1)) {
            func_8000DED0(M2C_FIELD(var_s0, s32 *, 8), var_s0);
            func_80000F08(M2C_FIELD(var_s0, s32 *, 8), var_s0);
        }
        if (M2C_FIELD(D_80012950, s32 *, 4) < M2C_FIELD(D_80012948, s32 *, 4)) {
            M2C_FIELD(D_80012950, s16 *, 0x10) = 2;
            func_80000DD4(&D_80012948);
        }
    }
    func_80007300(temp_s2);
}
