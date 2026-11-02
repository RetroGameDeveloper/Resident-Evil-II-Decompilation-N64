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

extern M2C_UNK D_800B7DF8_ovl_01;
extern M2C_UNK func_8002E838_ovl_01;

void func_8002E8C0_ovl_01(void *arg0) {
    M2C_FIELD(arg0, void **, 0) = (void *) (&func_8002E838_ovl_01 + 8);
    M2C_FIELD(arg0, void **, 4) = (void *) (&func_8002E838_ovl_01 + 0x64);
    M2C_FIELD(arg0, void **, 8) = (void *) (&func_8002E838_ovl_01 + 0x40);
    M2C_FIELD(arg0, void **, 0xC) = (void *) (&func_8002E838_ovl_01 + 0x6C);
    M2C_FIELD(arg0, void **, 0x10) = (void *) (&func_8002E838_ovl_01 + 0x74);
    M2C_FIELD(arg0, M2C_UNK **, 0x70) = &D_800B7DF8_ovl_01;
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0x6D;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    M2C_FIELD(arg0, s32 *, 0x7C) = 0;
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
}
