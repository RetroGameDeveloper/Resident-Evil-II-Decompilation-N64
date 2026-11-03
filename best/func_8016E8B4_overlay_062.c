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

M2C_UNK func_80033A0C_ovl_01(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_800C7650;
extern M2C_UNK func_8016EDA0_overlay_062;
extern M2C_UNK func_8016F078_overlay_062;

void func_8016E8B4_overlay_062(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0x01000000;
    M2C_FIELD(arg0, s16 *, 0x1F2) = 0xC8;
    M2C_FIELD(arg0, s8 *, 0x1ED) = -0x7E;
    M2C_FIELD(arg0, s8 *, 0x1EE) = -0x7E;
    M2C_FIELD(arg0, s8 *, 0x1EF) = -0x7E;
    M2C_FIELD(arg0, s32 *, 0x284) = 1;
    M2C_FIELD(arg0, s16 *, 0x134) = -0x5DC;
    M2C_FIELD(arg0, s16 *, 0x13A) = 0x5DC;
    M2C_FIELD(arg0, s16 *, 0x136) = 0x320;
    M2C_FIELD(arg0, s16 *, 0x138) = 0x320;
    M2C_FIELD(arg0, s16 *, 0x12C) = 0x320;
    M2C_FIELD(arg0, s16 *, 0x12E) = 0x320;
    M2C_FIELD(arg0, s16 *, 0x28A) = 0x320;
    M2C_FIELD(arg0, s16 *, 0x26C) = 0;
    M2C_FIELD(arg0, s16 *, 0x268) = 0;
    M2C_FIELD(arg0, s16 *, 0x264) = 0;
    M2C_FIELD(arg0, s8 *, 0x26F) = 0;
    M2C_FIELD(arg0, s16 *, 0x130) = 0;
    M2C_FIELD(arg0, s16 *, 0x132) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x0C000000);
    func_80033A0C_ovl_01(arg0 + 0x208, 0, 0x02BC0320, 0, M2C_FIELD(arg0, s32 *, 0x234) + 0x4C);
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650), M2C_UNK **, 0x18298) = &func_8016EDA0_overlay_062;
    M2C_FIELD((((M2C_FIELD(arg0, u8 *, 8) - 0x10) * 4) + &D_800C7650), M2C_UNK **, 0x18398) = &func_8016F078_overlay_062;
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) | 4);
}
