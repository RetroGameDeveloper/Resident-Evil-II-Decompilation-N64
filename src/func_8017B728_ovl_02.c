/* identical to func_80173658_overlay_002 in Resident Evil II (matched), with its names changed by decompdecomp */
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

M2C_UNK func_8017BB68_ovl_02(M2C_UNK);         /* extern */
extern void *D_80186C14_overlay_002;

void func_8017B728_ovl_02(void) {
    s32 temp_v1;

    M2C_FIELD(D_80186C14_overlay_002, s32 *, 0x10) = 0;
    M2C_FIELD(D_80186C14_overlay_002, s32 *, 0x14) = 0;
    M2C_FIELD(D_80186C14_overlay_002, s32 *, 0xC) = 0;
    temp_v1 = M2C_FIELD(D_80186C14_overlay_002, s32 *, 0) + 0x800;
    M2C_FIELD(D_80186C14_overlay_002, s32 *, 8) = temp_v1;
    M2C_FIELD(D_80186C14_overlay_002, s32 *, 0x18) = temp_v1;
    func_8017BB68_ovl_02(0);
}
