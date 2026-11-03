extern u8 D_800C7650_ovl_01[];
extern void func_80161C70_ovl_11(void);
extern void func_80164614_ovl_14(void);
extern void func_801643AC_ovl_14(void);
extern void func_801631C8_ovl_12(void);
extern void func_8016E800_ovl_07(void);
extern void func_80171188_ovl_07(void);
extern void func_80170F70_ovl_07(void);
extern void func_8016ED24_ovl_07(void);
extern void func_8016FAC4_ovl_07(void);

typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

#define S(o, v) (*(volatile u32 *)(base + (o)) = (u32)(v))
#define F ((u32)&func_80161C70_ovl_11)
#define E ((u32)&func_8016E800_ovl_07)

void func_800324D8_ovl_01(void) {
    U64 b;
    u32 off;
    u8 *base;

    off = 0x18000;
    b.w.lo = (u32)D_800C7650_ovl_01;
    base = (u8 *)(b.w.lo + off);
    *(volatile u16 *)(base + 0x2240) = 0xFF;
    *(volatile u16 *)(base + 0x2244) = 0xFF;
    S(0x1F40, F); S(0x1F44, F); S(0x1F48, F); S(0x1F4C, F);
    S(0x1F50, F); S(0x1F54, F); S(0x1F58, F); S(0x1F5C, F);
    S(0x1F60, F); S(0x1F64, F); S(0x1F68, F); S(0x1F6C, F);
    S(0x1F70, F); S(0x1F74, F); S(0x1F78, F); S(0x1F7C, F);
    S(0x1F80, F); S(0x1F84, F);
    S(0x1F88, (u32)&func_80164614_ovl_14);
    S(0x1F8C, F);
    S(0x1F90, (u32)&func_801643AC_ovl_14 + 0x1DC);
    S(0x1F94, F); S(0x1F98, F); S(0x1F9C, F); S(0x1FA0, F); S(0x1FA4, F);
    S(0x1FA8, 0x80162B9C);
    S(0x1FAC, (u32)&func_801631C8_ovl_12 + 0x1C);
    S(0x1FB0, F); S(0x1FB4, F); S(0x1FB8, F); S(0x1FBC, F);
    S(0x1FC0, F); S(0x1FC4, F); S(0x1FCC, F); S(0x1FD0, F);
    S(0x1FD8, F); S(0x1FDC, F); S(0x1FE0, F);
    S(0x1FE8, F); S(0x1FEC, F); S(0x1FF8, F); S(0x1FFC, F);
    S(0x20C0, E); S(0x20C4, E); S(0x20C8, E); S(0x20CC, E);
    S(0x20D0, E); S(0x20D4, E); S(0x20D8, E); S(0x20DC, E);
    S(0x20E0, E); S(0x20E4, E); S(0x20E8, E); S(0x20EC, E);
    S(0x20F0, E); S(0x20F4, E); S(0x20F8, E); S(0x20FC, E);
    S(0x2100, E); S(0x2104, E);
    S(0x2108, (u32)&func_80171188_ovl_07 + 0x1C);
    S(0x210C, E);
    S(0x2110, (u32)&func_80170F70_ovl_07 + 0x1A8);
    S(0x1FE4, F);
    S(0x2114, E); S(0x2118, E); S(0x211C, E); S(0x2120, E); S(0x2124, E);
    S(0x2128, (u32)&func_8016ED24_ovl_07 + 0xA08);
    S(0x212C, (u32)&func_8016FAC4_ovl_07 + 0x2B0);
    S(0x2130, E); S(0x2134, E); S(0x213C, E); S(0x2140, E);
    S(0x2144, E); S(0x214C, E); S(0x2150, E); S(0x2158, E);
    S(0x215C, E); S(0x2160, E); S(0x2168, E); S(0x216C, E);
    S(0x2178, E);
    S(0x2138, E);
    S(0x2164, E);
    S(0x217C, E);
}
