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
M2C_UNK func_800AB4A4_ovl_01(u32 *);                /* extern */
M2C_UNK func_800AB4B4_ovl_01(u32 *, void *);        /* extern */

s32 func_800AF150_ovl_01(void *arg0, void *arg1) {
    u32 sp10;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_4;
    u16 temp_v0;
    u32 temp_a0;
    u32 var_v0_3;

    temp_v0 = M2C_FIELD(arg1, u16 *, 4);
    sp10 = (u32) temp_v0;
    if (temp_v0 != 0) {
        if (((u32) M2C_FIELD(arg1, u32 *, 0) >> 8) & 1) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x24);
            if (!(temp_v1 & 8)) {
                var_v0 = temp_v1 | 4;
                goto block_5;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return 0;
        }
        var_v0 = M2C_FIELD(arg0, s32 *, 0x24) & ~4;
block_5:
        M2C_FIELD(arg0, s32 *, 0x24) = var_v0;
        if ((u8) M2C_FIELD(arg1, u32 *, 0) & 1) {
            if ((M2C_FIELD(arg0, s32 *, 0x24) & 0x20) || (func_800A5830_ovl_01(M2C_FIELD(arg0, u8 *, 0x63)) & 0xFF)) {
                var_v0_2 = M2C_FIELD(arg0, s32 *, 0x24) | 0x100000;
                goto block_10;
            }
            goto block_22;
        }
        var_v0_2 = M2C_FIELD(arg0, s32 *, 0x24) & 0xFFEFFFFF;
block_10:
        M2C_FIELD(arg0, s32 *, 0x24) = var_v0_2;
        if ((u16) M2C_FIELD(arg1, u32 *, 0) & 1) {
            sp10 = (u32) (func_800AB36C_ovl_01() & 0xFFFF) % sp10;
        }
        var_v0_3 = -1U;
        if (sp10 != 0xFFFF) {
            temp_v0_2 = ((u32) M2C_FIELD(arg1, u16 *, 4) >> 8) & 1;
            if (temp_v0_2 & 0xFF) {
                func_800AB4A4_ovl_01(&sp10);
                var_v0_4 = temp_v0_2 & 0xFF;
            } else {
                func_800AB4B4_ovl_01(&sp10, arg0);
                var_v0_4 = temp_v0_2 & 0xFF;
            }
            if (var_v0_4 != 0) {
                var_v0_3 = M2C_FIELD(arg0, u32 *, 0xA4) + sp10;
                goto block_20;
            }
            temp_a0 = M2C_FIELD(arg0, u32 *, 0xA0) + sp10;
            M2C_FIELD(arg0, u32 *, 0x9C) = temp_a0;
            if ((u32) M2C_FIELD(arg0, u32 *, 0xA4) >= temp_a0) {
                M2C_FIELD(arg0, u32 *, 0xA0) = temp_a0;
                M2C_FIELD(arg0, u32 *, 0x9C) = 0U;
            }
        } else {
block_20:
            M2C_FIELD(arg0, u32 *, 0x9C) = var_v0_3;
        }
        return M2C_FIELD(arg0, u32 *, 0x9C) != 0;
    }
block_22:
    return 0;
}
