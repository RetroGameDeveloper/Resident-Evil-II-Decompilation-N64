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

s32 func_800A5830_ovl_01(u8);                       /* extern */
s32 func_800AB36C_ovl_01();                         /* extern */

s32 func_800AF2EC_ovl_01(void *arg0, void *arg1) {
    u16 temp_v0;
    u16 temp_v1;
    u16 temp_v1_2;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x68);
    if (temp_v1 == 0) {
        if (M2C_FIELD(arg1, u16 *, 0) & 1) {
            M2C_FIELD(arg0, u16 *, 0x68) = (u16) ((u32) (func_800AB36C_ovl_01() & 0xFFFF) % (u16) M2C_FIELD(arg1, u16 *, 4));
        } else {
            M2C_FIELD(arg0, u16 *, 0x68) = (u16) M2C_FIELD(arg1, u16 *, 4);
        }
        temp_v1_2 = M2C_FIELD(arg0, u16 *, 0x68);
        if (temp_v1_2 != 0xFFFF) {
            M2C_FIELD(arg0, u16 *, 0x68) = (u16) (temp_v1_2 + 1);
            goto block_7;
        }
        goto block_8;
    }
    if (temp_v1 != 0xFFFF) {
block_7:
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x68) - 1;
        M2C_FIELD(arg0, u16 *, 0x68) = temp_v0;
        if (temp_v0 & 0xFFFF) {
            goto block_8;
        }
    } else {
block_8:
        if ((((u32) M2C_FIELD(arg1, u16 *, 0) >> 8) & 1) && ((M2C_FIELD(arg0, s32 *, 0x24) & 0x40000008) == 8)) {
            M2C_FIELD(arg0, u16 *, 0x68) = 0U;
        } else if (((u8) M2C_FIELD(arg1, u16 *, 0) & 1) && !(M2C_FIELD(arg0, s32 *, 0x24) & 0x20)) {
            if (!(func_800A5830_ovl_01(M2C_FIELD(arg0, u8 *, 0x63)) & 0xFF)) {
                M2C_FIELD(arg0, u16 *, 0x68) = 0U;
            } else {
                goto block_16;
            }
        } else {
block_16:
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg1, u16 *, 6) * 8));
        }
    }
    return 0;
}
