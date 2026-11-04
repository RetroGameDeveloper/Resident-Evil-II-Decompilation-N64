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

s32 func_80033174_ovl_01(void *, M2C_UNK *);        /* extern */
s32 func_80033634_ovl_01();                         /* extern */
M2C_UNK func_80035AAC_ovl_01_108(void *);           /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80165AB8_ovl_12(void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80165D54_ovl_12(void *);               /* extern */
M2C_UNK func_80166A48_ovl_12(M2C_UNK, s32);         /* extern */
extern M2C_UNK D_800E10D0_ovl_01;

void func_80165C58_ovl_12(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_v1;

    temp_v1 = arg0 + 0x2B4;
    if (M2C_FIELD(temp_v1, u8 *, 1) != 0) {
        if ((M2C_FIELD(temp_v1, u8 *, 0xA) != 0) && (func_80033634_ovl_01() & 5)) {
            if ((u8) M2C_FIELD(arg0, u8 *, 0x26E) >= 3U) {
                goto block_4;
            }
            func_80035AAC_ovl_01_108(arg0);
            M2C_FIELD(arg0, s16 *, 6) = 0x100;
            func_80165D54_ovl_12(arg0);
            if (M2C_FIELD(arg0, u8 *, 0x2C3) == 0) {
                func_80166A48_ovl_12(0, func_80033174_ovl_01(arg0, &D_800E10D0_ovl_01) & 0xFF);
            }
            M2C_FIELD(arg0, s8 *, 0x2BB) = 0x12;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x11000700;
            func_80089D34_ovl_01(arg0, arg1, arg2, 0x200);
            return;
        }
        goto block_5;
    }
block_4:
block_5:
    M2C_FIELD(arg0, s8 *, 5) = 1;
    func_80165AB8_ovl_12(arg0, arg1, arg2);
}
