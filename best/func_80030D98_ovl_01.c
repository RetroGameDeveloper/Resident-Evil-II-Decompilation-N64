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

void *func_8002FCA8_ovl_01(void *, M2C_UNK);        /* extern */
s32 func_8002FD08_ovl_01();                         /* extern */
M2C_UNK func_8002FD1C_ovl_01(void *);               /* extern */
extern M2C_UNK D_8003028C_ovl_01;
extern M2C_UNK D_80030354_ovl_01;
extern M2C_UNK D_8003041C_ovl_01;
extern M2C_UNK D_8003091C_ovl_01;
extern M2C_UNK D_80030A6C_ovl_01;
extern M2C_UNK D_80030D3C_ovl_01;
extern M2C_UNK func_8002FD68_ovl_01;
extern M2C_UNK func_8002FF24_ovl_01;
extern M2C_UNK func_8003001C_ovl_01;
extern M2C_UNK func_8003014C_ovl_01;
extern M2C_UNK func_80030BBC_ovl_01;

void func_80030D98_ovl_01(void *arg0) {
    s32 temp_s2;
    s32 var_a0;
    void *temp_v0;
    void *var_v1;

    M2C_FIELD(arg0, void **, 4) = NULL;
    temp_s2 = func_8002FD08_ovl_01();
    temp_v0 = func_8002FCA8_ovl_01(arg0, 0x50);
    var_a0 = 1;
    if (temp_v0 == NULL) {
        func_8002FD1C_ovl_01(arg0);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x14) = 0x2E;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x18) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(void *), 0)(arg0);
        var_a0 = 1;
    }
    var_v1 = temp_v0 + 4;
    M2C_FIELD(temp_v0, M2C_UNK **, 0) = &func_8002FD68_ovl_01;
    M2C_FIELD(temp_v0, M2C_UNK **, 4) = &func_8002FF24_ovl_01;
    M2C_FIELD(temp_v0, M2C_UNK **, 8) = &func_8003001C_ovl_01;
    M2C_FIELD(temp_v0, M2C_UNK **, 0xC) = &func_8003014C_ovl_01;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x10) = &D_8003028C_ovl_01;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x14) = &D_80030354_ovl_01;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x18) = &D_8003041C_ovl_01;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x1C) = &D_8003091C_ovl_01;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x20) = &D_80030A6C_ovl_01;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x24) = &func_80030BBC_ovl_01;
    M2C_FIELD(temp_v0, M2C_UNK **, 0x28) = &D_80030D3C_ovl_01;
    M2C_FIELD(temp_v0, s32 *, 0x2C) = temp_s2;
    do {
        M2C_FIELD(var_v1, s32 *, 0x30) = 0;
        M2C_FIELD(var_v1, s32 *, 0x38) = 0;
        var_a0 -= 1;
        var_v1 -= 4;
    } while (var_a0 >= 0);
    M2C_FIELD(temp_v0, s32 *, 0x40) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x44) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x48) = 0x50;
    M2C_FIELD(arg0, void **, 4) = temp_v0;
}
