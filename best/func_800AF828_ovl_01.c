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

M2C_UNK func_800AB4A4_ovl_01(u32 *);                /* extern */
M2C_UNK func_800AB4B4_ovl_01(u32 *, void *);        /* extern */

s32 func_800AF828_ovl_01(void *arg0, void *arg1) {
    u32 sp10;
    s32 var_v0;
    u32 temp_a0;
    u32 temp_v0;
    u32 temp_v1;
    u32 var_a2;

    if (M2C_FIELD(arg1, u8 *, 0) & 3) {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x24) | 0x8000;
    } else {
        var_v0 = M2C_FIELD(arg0, s32 *, 0x24) & 0xFFFF7FFF;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_v0;
    sp10 = (u32) (u16) M2C_FIELD(arg1, u32 *, 4);
    if (((u32) M2C_FIELD(arg1, u32 *, 4) >> 8) & 1) {
        func_800AB4A4_ovl_01(&sp10);
    } else {
        func_800AB4B4_ovl_01(&sp10, arg0);
    }
    if (sp10 == 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~0x4000);
    } else {
        M2C_FIELD(arg0, u32 *, 0x70) = sp10;
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) | 0x4000);
        temp_v0 = (u32) M2C_FIELD(arg1, u8 *, 0);
        temp_a0 = temp_v0 >> 8;
        temp_v1 = temp_v0 >> 0x10;
        var_a2 = temp_a0;
        if ((s8) temp_a0 < 0) {
            if (!(temp_v1 & 0x80)) {
                M2C_FIELD(arg0, s8 *, 0x79) = (s8) temp_v1;
            } else {
                M2C_FIELD(arg0, s8 *, 0x79) = (s8) -(s8) temp_v1;
            }
            M2C_FIELD(arg0, s8 *, 0x78) = (s8) -(s8) var_a2;
            M2C_FIELD(arg0, u32 *, 0x6C) = (u32) ((u32) M2C_FIELD(arg0, u32 *, 0x70) >> 1);
        } else {
            if (!(temp_v1 & 0x80)) {
                M2C_FIELD(arg0, s8 *, 0x79) = (s8) temp_v1;
                goto block_23;
            }
            if ((s8) temp_a0 != 0) {
                var_a2 = temp_a0 - 1;
                M2C_FIELD(arg0, s8 *, 0x79) = (s8) (0x64 - temp_v1);
block_23:
                M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
            } else {
                M2C_FIELD(arg0, s8 *, 0x79) = (s8) -(s8) temp_v1;
                M2C_FIELD(arg0, u32 *, 0x6C) = (u32) ((u32) M2C_FIELD(arg0, u32 *, 0x70) >> 1);
            }
            M2C_FIELD(arg0, s8 *, 0x78) = (s8) var_a2;
        }
    }
    return 0;
}
