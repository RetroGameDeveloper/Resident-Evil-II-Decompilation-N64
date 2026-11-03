s32 func_80033634_ovl_01();
void func_801672F4_ovl_30(void *p, u32 a, u32 b);
extern u8 D_80167D18_ovl_30[];
extern u8 D_80167D30_ovl_30[];
void func_801653A4_ovl_30(u8 *p) {
    u32 r;
    u32 n;
    u8 rem;

    r = func_80033634_ovl_01();
    n = *(u8 *)(p + 0x26E);
    rem = n % 3;
    func_801672F4_ovl_30(p, D_80167D30_ovl_30[rem * 4 + (r & 3)], D_80167D18_ovl_30[*(u8 *)(p + 5) - 1]);
}
