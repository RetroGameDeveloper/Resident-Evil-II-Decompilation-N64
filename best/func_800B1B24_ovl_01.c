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

extern M2C_UNK D_80158A20;
extern M2C_UNK D_80158A40;

void func_800B1B24_ovl_01(void *arg0) {
    u8 temp_a1;

    if ((M2C_FIELD(arg0, s32 *, 0x60) != -1) && (M2C_FIELD(arg0, u8 *, 0x4A) != 0xFF)) {
        temp_a1 = M2C_FIELD(arg0, u8 *, 0x63);
        if (M2C_FIELD(arg0, u8 *, 0x4B) == 0xFF) {
            *(temp_a1 + &D_80158A20) = temp_a1;
            return;
        }
        *(M2C_FIELD(arg0, u8 *, 0x4A) + (M2C_FIELD(arg0, u8 *, 0x4B) * 0x10) + &D_80158A40) = temp_a1;
    }
}
