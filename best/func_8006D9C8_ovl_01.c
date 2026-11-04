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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2 -mcpu=r4600, tried by autopilot */

s32 func_8006D2B4_ovl_01();
s32 func_8006D658_ovl_01();
s32 func_8006D8C0_ovl_01();
s32 func_8006DA44_ovl_01();
extern char D_800C7650_ovl_01[];
extern char D_80113A70_ovl_01[];

void func_8006D9C8_ovl_01(void) {
    func_8006D8C0_ovl_01();
    if (!(*(s32 *)(D_800C7650_ovl_01 + 0x19A60) & 0x02000000)) {
        func_8006D2B4_ovl_01();
        *(s8 *)(D_80113A70_ovl_01 + 0x1464) = 0;
        *(s32 *)(D_80113A70_ovl_01 + 0x145C) = (s32) M2C_FIELD(*(void * *)(D_800C7650_ovl_01 + 0x1827C), s32 *, 0x4C);
        func_8006D658_ovl_01(0);
        func_8006DA44_ovl_01();
    }
}
