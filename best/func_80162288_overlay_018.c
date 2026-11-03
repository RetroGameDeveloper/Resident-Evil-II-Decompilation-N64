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

M2C_UNK func_80032B8C_ovl_01(void *, s8);           /* extern */
M2C_UNK func_80032DEC_ovl_01(void *, s32, s32, s8); /* extern */
s32 func_80033634_ovl_01();                         /* extern */
s32 func_80074D94_ovl_01(s32, s32);                 /* extern */
s32 func_80162C10_ovl_18(void *);                   /* extern */

void func_80162288_overlay_018(void *arg0) {
    u16 temp_v0;
    u8 temp_v1;
    void *temp_s1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 7);
    temp_s1 = M2C_FIELD(arg0, void **, 0x2B4);
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 7) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E0) = (s16) ((func_80033634_ovl_01() & 0x3F) + 0x5A);
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, u16 *, 0x1F4) = (u16) (func_80033634_ovl_01() & 0x4E);
        /* fallthrough */
    case 1:
        func_80032DEC_ovl_01(arg0, M2C_FIELD(temp_s1, s32 *, 0x28), M2C_FIELD(temp_s1, s32 *, 0x30), M2C_FIELD(arg0, s8 *, 0x2BF));
        M2C_FIELD(arg0, u16 *, 0x66) = (u16) (M2C_FIELD(arg0, u16 *, 0x66) + (s8) M2C_FIELD(arg0, u8 *, 0x2BA));
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F4) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F4) = temp_v0;
        M2C_FIELD(arg0, u8 *, 0x2BA) = (u8) -(s8) M2C_FIELD(arg0, u8 *, 0x2BA);
        if ((s16) temp_v0 == -1) {
            M2C_FIELD(arg0, s16 *, 6) = 0;
        }
        break;
    }
    func_80032B8C_ovl_01(arg0, (s8) M2C_FIELD(arg0, u8 *, 0x2BA));
    if (func_80074D94_ovl_01(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x30)) != 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s16 *, 0x34);
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s16 *, 0x36);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s16 *, 0x38);
        return;
    }
    if (func_80162C10_ovl_18(arg0) == 0) {
        M2C_FIELD(arg0, s8 *, 5) = 2;
        M2C_FIELD(arg0, s16 *, 6) = 0;
    }
}
