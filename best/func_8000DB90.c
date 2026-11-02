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
M2C_UNK func_80000F08(void **, void *);             /* extern */
void *func_80000F50(void **);                       /* extern */
M2C_UNK func_80000F60(void *);                      /* extern */
s32 func_800072E0();                                /* extern */
M2C_UNK func_80007300(s32);                         /* extern */
extern void *D_80012948;
extern void *D_80012950;

void func_8000DB90(void *arg0) {
    s32 temp_s2;
    u16 temp_v1;
    void **temp_v0;
    void *var_a1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x10);
    temp_s2 = func_800072E0();
    if (temp_v1 != 1) {
        if (temp_v1 == 8) {
            M2C_FIELD(arg0, u16 *, 0x10) = 2U;
            var_a1 = arg0;
            goto block_7;
        }
    } else {
        temp_v0 = M2C_FIELD(arg0, void ***, 8);
        if ((temp_v0 == NULL) || (temp_v0 == &D_80012948)) {
            M2C_FIELD(arg0, u16 *, 0x10) = 2U;
            var_a1 = arg0;
        } else {
            M2C_FIELD(arg0, u16 *, 0x10) = 8U;
            func_80000F08(M2C_FIELD(arg0, void ***, 8), arg0);
            var_a1 = func_80000F50(M2C_FIELD(arg0, void ***, 8));
        }
block_7:
        func_80000F08(&D_80012948, var_a1);
    }
    if (D_80012950 == NULL) {
        func_80000F60(D_80012950);
    } else if (M2C_FIELD(D_80012950, s32 *, 4) < M2C_FIELD(D_80012948, s32 *, 4)) {
        M2C_FIELD(D_80012950, s16 *, 0x10) = 2;
        func_80000DD4(&D_80012948);
    }
    func_80007300(temp_s2);
}
