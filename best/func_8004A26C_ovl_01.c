/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */
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

void func_8004A26C_ovl_01(void *arg0, void *arg1, s32 arg2, s16 arg3) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    M2C_FIELD(arg1, s32 *, 0) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg1, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(arg1, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 0xC);
    M2C_FIELD(arg1, s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg1, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    temp_a2 = arg2 & 0xFF;
    M2C_FIELD(arg1, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_a2 == 1) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg1, s32 *, 4) = (s32) (temp_a0 + ((arg3 - temp_a0) * 2));
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
        M2C_FIELD(arg1, s32 *, 0x10) = (s32) (temp_v0 + ((arg3 - temp_v0) * 2));
        return;
    }
    if (temp_a2 == 0) {
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0xC);
        M2C_FIELD(arg1, s32 *, 0xC) = (s32) (temp_a0_2 + ((arg3 - temp_a0_2) * 2));
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x18);
        M2C_FIELD(arg1, s32 *, 0x18) = (s32) (temp_v0_2 + ((arg3 - temp_v0_2) * 2));
        return;
    }
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg1, s32 *, 8) = (s32) (temp_a0_3 + ((arg3 - temp_a0_3) * 2));
    temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg1, s32 *, 0x14) = (s32) (temp_v0_3 + ((arg3 - temp_v0_3) * 2));
}
