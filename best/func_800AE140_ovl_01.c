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

M2C_UNK func_800B1AA8_ovl_01();                     /* extern */
extern M2C_UNK D_801443E8;
extern M2C_UNK *D_801583D0;
extern M2C_UNK *D_801583D4;

void func_800AE140_ovl_01(void *arg0) {
    M2C_UNK **temp_v1_2;
    M2C_UNK *temp_v0_2;
    M2C_UNK *temp_v0_3;
    M2C_UNK *temp_v1_3;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;

    func_800B1AA8_ovl_01();
    if (M2C_FIELD(arg0, s32 *, 0x60) != -1) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_a1 != -1) {
            M2C_FIELD((((temp_a1 & 0xFF) * 0x1A0) + &D_801443E8), s32 *, 0x10) = (s32) M2C_FIELD(arg0, s32 *, 0x10);
            temp_v0 = M2C_FIELD(arg0, s32 *, 0x10);
            if (temp_v0 != -1) {
                M2C_FIELD((((temp_v0 & 0xFF) * 0x1A0) + &D_801443E8), s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
            }
        } else {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
            if (temp_v1 != temp_a1) {
                M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x18), s32 *, 0xC) = temp_v1;
                M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x13) * 0x1A0) + &D_801443E8), s32 *, 0x14) = temp_a1;
                M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x13) * 0x1A0) + &D_801443E8), M2C_UNK **, 0x18) = (M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 0x18);
                return;
            }
            temp_v0_2 = M2C_FIELD(arg0, M2C_UNK **, 0x18);
            temp_v1_2 = M2C_FIELD(temp_v0_2, M2C_UNK ***, 4);
            if (temp_v1_2 != NULL) {
                *temp_v1_2 = M2C_FIELD(temp_v0_2, M2C_UNK **, 0);
            } else {
                D_801583D0 = M2C_FIELD(temp_v0_2, M2C_UNK **, 0);
            }
            temp_v0_3 = M2C_FIELD(arg0, M2C_UNK **, 0x18);
            temp_v1_3 = M2C_FIELD(temp_v0_3, M2C_UNK **, 0);
            if (temp_v1_3 != NULL) {
                M2C_FIELD(temp_v1_3, M2C_UNK ***, 4) = (M2C_UNK **) M2C_FIELD(temp_v0_3, M2C_UNK ***, 4);
            }
            M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x18), M2C_UNK **, 0) = D_801583D4;
            if (D_801583D4 != NULL) {
                M2C_FIELD(D_801583D4, M2C_UNK **, 4) = (M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 0x18);
            }
            M2C_FIELD(M2C_FIELD(arg0, M2C_UNK **, 0x18), M2C_UNK ***, 4) = NULL;
            D_801583D4 = M2C_FIELD(arg0, M2C_UNK **, 0x18);
        }
    }
}
