/* machine draft (m2c) for gcc-2.7.2-kmc -O2 -mips3 -G0 -mgp32 -mfp32 -mcpu=r4600, tried by autopilot */
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

M2C_UNK func_80032B8C_ovl_01(void *, M2C_UNK);      /* extern */
M2C_UNK func_80032DEC_ovl_01(void *, s16, s16, M2C_UNK); /* extern */
s32 func_80065400_ovl_01(void *, M2C_UNK, u8, M2C_UNK); /* extern */
M2C_UNK func_80089D34_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80166458_ovl_12(void *);               /* extern */
extern M2C_UNK func_80166C00_ovl_12;

s32 func_80162120_ovl_12(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_s3;
    u16 temp_v0;
    u8 temp_v1;
    u8 var_v1;
    void *temp_s2;

    var_s3 = 0;
    temp_v1 = M2C_FIELD(arg0, u8 *, 6);
    temp_s2 = arg0 + 0x2B4;
    switch (temp_v1) {                              /* irregular */
    case 0:
        M2C_FIELD(arg0, s16 *, 0x1E0) = 0x1E;
        M2C_FIELD(arg0, u8 *, 6) = 1U;
        M2C_FIELD(arg0, s16 *, 0x1E4) = 0;
        M2C_FIELD(arg0, u8 *, 0x25C) = (u8) (M2C_FIELD(arg0, u8 *, 0x25C) | 2);
        M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & 0xEFFFFFFF) | 0x04000000);
        M2C_FIELD(temp_s2, s8 *, 1) = 0;
        M2C_FIELD(temp_s2, s8 *, 0x15) = 0;
        M2C_FIELD(arg0, u8 *, 0x26F) = (u8) (M2C_FIELD(arg0, u8 *, 0x26F) & 0x7F);
        break;
    case 1:
        func_80032B8C_ovl_01(arg0, 0);
        if (M2C_FIELD(arg0, s32 *, 0x1AC) & 1) {
            var_v1 = 3;
            if (!(func_80033634_ovl_01() & 0x1F)) {
                var_v1 = 2;
            }
            M2C_FIELD(arg0, u8 *, 6) = var_v1;
            M2C_FIELD(arg0, u8 *, 0x2B4) = func_80065658_ovl_01();
            if (M2C_FIELD(arg0, u8 *, 6) == 2) {
                M2C_FIELD(arg0, u16 *, 0x1F6) = 0x5AU;
                M2C_FIELD(arg0, s32 *, 0x1E8) = 0xF00;
            }
        }
        break;
    case 2:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1F6) - 1;
        M2C_FIELD(arg0, u16 *, 0x1F6) = temp_v0;
        if ((temp_v0 << 0x10) == 0) {
            M2C_FIELD(arg0, u8 *, 6) = 3U;
            M2C_FIELD(arg0, s32 *, 0x1E8) = 0x01000F00;
        }
        break;
    case 3:
        var_s3 = func_80065400_ovl_01(arg0, 0, M2C_FIELD(arg0, u8 *, 0x2B4), 1) & 0xFF;
        func_80032DEC_ovl_01(arg0, M2C_FIELD(arg0, s16 *, 0x260), M2C_FIELD(arg0, s16 *, 0x262), 0x10);
        func_80032B8C_ovl_01(arg0, 0);
        if (!(M2C_FIELD(arg0, s32 *, 0x1AC) & 1)) {
            M2C_FIELD(arg0, u8 *, 6) = 1U;
        }
        break;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    func_80166458_ovl_12(arg0);
    if ((M2C_FIELD(temp_s2, u8 *, 7) == 0) && !(func_80033634_ovl_01() & 0x3F)) {
        M2C_FIELD(temp_s2, u8 *, 7) = (u8) *((func_80033634_ovl_01() & 7) + &func_80166C00_ovl_12);
    }
    func_80166900_ovl_12(arg0, 4, 6);
    return var_s3;
}
