s32 func_800362C0_ovl_01(s32, s32, s32);
s32 func_80036764_ovl_01(s32, s32);
extern s32 D_801672C0_ovl_33[], D_80167348_ovl_33[], D_801673C0_ovl_33[];
extern u8 D_801314F0_ovl_01[];

void func_801665CC_ovl_33(s32 a0)
{
    s32 s;
    s32 p;
    s32 c;
    s32 n;
    s32 i;
    s32 *obj;
    volatile u8 *g;

    s = *(s32 *)(a0 + 0x234);
    p = a0;
    func_800362C0_ovl_01(p, s, (s32)D_801672C0_ovl_33);
    func_800362C0_ovl_01(p, s, (s32)D_80167348_ovl_33);
    func_800362C0_ovl_01(p, s, (s32)D_801673C0_ovl_33);
    g = D_801314F0_ovl_01;
    c = *(volatile s32 *)(g + 0x1E4);
    if (c != 0) {
        c = c + 1;
        *(volatile s32 *)(g + 0x1E4) = c;
        if (c == 8)
            *(volatile s32 *)(g + 0x1E4) = 0;
        obj = *(s32 **)(s + 0xC8);
        obj = *(s32 **)((u8 *)obj + 4);
        n = *(s16 *)((u8 *)obj + 0xE);
        for (i = 0; i < n; i++)
            ;
    }
    func_80036764_ovl_01(p, s);
}
