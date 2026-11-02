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

u32 func_80009640(void *, u16, s32, s32, s32, s32, void *); /* extern */
u32 func_8000B7C0(void *, s32, u8, s32, s32, s32);  /* extern */
u32 func_8000BBF0(void *, u16, s32, s32, s32, void *); /* extern */
M2C_UNK func_8000CB60(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK D_80129E34_ovl_01;

void func_80087F08_ovl_01(void *arg0) {
    s32 temp_s1;
    s32 temp_s3;
    u32 temp_v1;
    u32 temp_v1_2;
    void *temp_s2;

    temp_s3 = arg0 + 0x22;
    temp_s1 = arg0 + 0x1E;
    temp_s2 = arg0 + 0x10;
    *M2C_FIELD(arg0, u32 **, 4) = func_8000BBF0((M2C_FIELD(arg0, s32 *, 0) * 0x68) + &D_80129E34_ovl_01, M2C_FIELD(arg0, u16 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x18), temp_s3, temp_s1, temp_s2);
    temp_v1 = *M2C_FIELD(arg0, u32 **, 4);
    switch (temp_v1) {                              /* irregular */
    case 5:
        if (M2C_FIELD(arg0, s32 *, 0xC) == 0) {

        } else {
            *M2C_FIELD(arg0, u32 **, 4) = func_80009640((M2C_FIELD(arg0, s32 *, 0) * 0x68) + &D_80129E34_ovl_01, M2C_FIELD(arg0, u16 *, 0x1C), M2C_FIELD(arg0, s32 *, 0x18), temp_s3, temp_s1, M2C_FIELD(arg0, s32 *, 0x14), temp_s2);
            temp_v1_2 = *M2C_FIELD(arg0, u32 **, 4);
            if ((temp_v1_2 != 0) && ((temp_v1_2 < 6U) || ((temp_v1_2 < 0xAU) && (temp_v1_2 >= 7U)))) {

            } else {
            default:
            case 0:
                *M2C_FIELD(arg0, u32 **, 4) = func_8000B7C0((M2C_FIELD(arg0, s32 *, 0) * 0x68) + &D_80129E34_ovl_01, M2C_FIELD(arg0, s32 *, 0x10), M2C_FIELD(arg0, u8 *, 0xF), M2C_FIELD(arg0, s32 *, 8), M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0x34));
            }
        }
        break;
    }
    func_8000CB60(M2C_FIELD(arg0, s32 *, 0x38), 0, 0);
}
