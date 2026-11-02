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

s32 func_80007000();                                /* extern */
M2C_UNK func_8000CB60(s32, s32, M2C_UNK, u32);      /* extern */
M2C_UNK func_8000DE30(M2C_UNK);                     /* extern */
M2C_UNK func_8000E0A0(u32, u32, M2C_UNK, u32);      /* extern */
M2C_UNK func_8000E100(void *);                      /* extern */
extern void **D_80012960;
extern s32 D_80017830;

void func_8000DF64(void) {
    s32 temp_a0_2;
    s32 temp_v0;
    s32 temp_v1;
    u32 temp_a0;
    u32 temp_a1;
    u32 temp_a1_2;
    u32 temp_v0_2;
    u32 temp_v1_2;
    void *temp_s0;

    if (*D_80012960 != D_80012960) {
loop_1:
        temp_s0 = *D_80012960;
        if (temp_s0 == D_80012960) {
            func_8000DE30(0);
            D_80017830 = 0;
            return;
        }
        temp_v0 = func_80007000();
        temp_v1 = D_80017830;
        D_80017830 = temp_v0;
        temp_v0_2 = temp_v0 - temp_v1;
        temp_v1_2 = M2C_FIELD(temp_s0, u32 *, 0x10);
        if ((temp_v1_2 > 0U) || ((temp_v1_2 == 0) && (temp_v0_2 < (u32) M2C_FIELD(temp_s0, u32 *, 0x14)))) {
            temp_a1 = M2C_FIELD(temp_s0, u32 *, 0x14);
            temp_a1_2 = temp_a1 - temp_v0_2;
            temp_a0 = (M2C_FIELD(temp_s0, u32 *, 0x10) - 0) - (temp_a1 < temp_v0_2);
            M2C_FIELD(temp_s0, u32 *, 0x10) = temp_a0;
            M2C_FIELD(temp_s0, u32 *, 0x14) = temp_a1_2;
            func_8000E0A0(temp_a0, temp_a1_2, 0, temp_v0_2);
            return;
        }
        *M2C_FIELD(temp_s0, void ***, 4) = M2C_FIELD(temp_s0, void **, 0);
        M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), void ***, 4) = (void **) M2C_FIELD(temp_s0, void ***, 4);
        temp_a0_2 = M2C_FIELD(temp_s0, s32 *, 0x18);
        M2C_FIELD(temp_s0, void **, 0) = NULL;
        M2C_FIELD(temp_s0, void ***, 4) = NULL;
        if (temp_a0_2 != 0) {
            func_8000CB60(temp_a0_2, M2C_FIELD(temp_s0, s32 *, 0x1C), 0, temp_v0_2);
        }
        if ((M2C_FIELD(temp_s0, u32 *, 8) != 0) || (M2C_FIELD(temp_s0, u32 *, 0xC) != 0)) {
            M2C_FIELD(temp_s0, u32 *, 0x10) = (u32) M2C_FIELD(temp_s0, u32 *, 8);
            M2C_FIELD(temp_s0, u32 *, 0x14) = (u32) M2C_FIELD(temp_s0, u32 *, 0xC);
            func_8000E100(temp_s0);
        }
        goto loop_1;
    }
}
