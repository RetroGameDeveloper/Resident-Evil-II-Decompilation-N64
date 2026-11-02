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

M2C_UNK func_800292C8_ovl_01(void *, s32);          /* extern */
M2C_UNK func_800293C0_ovl_01(void *);               /* extern */
M2C_UNK func_80029718_ovl_01(void *);               /* extern */
M2C_UNK func_8002A528_ovl_01(void *);               /* extern */
M2C_UNK func_8002AD8C_ovl_01(void *, M2C_UNK);      /* extern */
s32 func_8002D290_ovl_01(void *);                   /* extern */
M2C_UNK func_8002D360_ovl_01();                     /* extern */
M2C_UNK func_8002D948_ovl_01(void *);               /* extern */
M2C_UNK func_8002E52C_ovl_01(void *);               /* extern */
M2C_UNK func_8002E72C_ovl_01(void *, s32);          /* extern */
M2C_UNK func_8002E838_ovl_01(void *);               /* extern */

void func_8002DA80_ovl_01(void *arg0) {
    void *temp_s1;

    temp_s1 = M2C_FIELD(arg0, void **, 0x164);
    func_8002D360_ovl_01();
    func_8002D948_ovl_01(arg0);
    M2C_FIELD(temp_s1, s32 *, 0xC) = 0;
    M2C_FIELD(temp_s1, s32 *, 0x18) = 0;
    M2C_FIELD(temp_s1, s32 *, 0x20) = 0;
    if (M2C_FIELD(arg0, s32 *, 0x118) == M2C_FIELD(arg0, s32 *, 0x20)) {
        M2C_FIELD(temp_s1, s32 *, 0x14) = 0;
        M2C_FIELD(temp_s1, s32 *, 0x1C) = 1;
    } else {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x28;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *), 0)(arg0);
    }
    M2C_FIELD(temp_s1, s32 *, 0x10) = func_8002D290_ovl_01(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x27;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *), 0)(arg0);
        }
        M2C_FIELD(arg0, s32 *, 0x48) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x28;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *), 0)(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0x40) == 0) {
        if (M2C_FIELD(temp_s1, s32 *, 0x10) != 0) {
            func_8002E52C_ovl_01(arg0);
        } else {
            func_800293C0_ovl_01(arg0);
            func_8002E838_ovl_01(arg0);
        }
        func_8002E72C_ovl_01(arg0, M2C_FIELD(temp_s1, s32 *, 0x20));
    }
    func_80029718_ovl_01(arg0);
    if (M2C_FIELD(arg0, s32 *, 0xE4) != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 1;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *), 0)(arg0);
    } else {
        func_8002A528_ovl_01(arg0);
    }
    func_800292C8_ovl_01(arg0, M2C_FIELD(temp_s1, s32 *, 0x14) == 1);
    func_8002AD8C_ovl_01(arg0, 0);
    M2C_FIELD(M2C_FIELD(arg0, void **, 4), M2C_UNK (**)(void *), 0x18)(arg0);
}
