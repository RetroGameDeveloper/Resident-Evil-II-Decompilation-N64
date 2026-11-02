/* func_80162998_ovl_23 - ovl_23 */
s32 func_80033174_ovl_01(void *);
s8 func_80033634_ovl_01(void);
s32 func_80162870_ovl_23(void *, s32, s32, s32, s32, s32, void *);
s32 func_80162944_ovl_23(void *, s32, s32, s32, s32, s32, void *);
extern u8 D_800E10D0_ovl_01[];
extern u8 D_801660B0_ovl_23[];

void func_80162998_ovl_23(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    u8 *p;
    s32 cnt;
    u32 div;
    u32 mod;
    u32 rnd;
    u8 *t0;

    p = arg0;
    cnt = 0;
    div = 0x24;
    if (arg5 & 2) {
        if ((u8)func_80033174_ovl_01(&D_800E10D0_ovl_01) != 0) {
            cnt = 0x12;
        }
        div = 0x12;
    }
    if (arg5 & 1) {
        div = 6;
        cnt += (u8)(*(u8 *)(p + 0x26E) % 3) * 6;
    }
    while (arg1--) {
        rnd = (u8)func_80033634_ovl_01();
        mod = rnd % div;
        t0 = D_801660B0_ovl_23 + (cnt + mod) * 0xC;
        if (arg5 & 4) {
            func_80162944_ovl_23(arg0, arg2, arg3, arg4,
                *(s16 *)(p + 0x66) + *(s16 *)(t0 + 6),
                *(s32 *)(t0 + 8), t0);
        } else {
            func_80162870_ovl_23(arg0, arg2, arg3, arg4,
                *(s16 *)(p + 0x66) + *(s16 *)(t0 + 6),
                *(s32 *)(t0 + 8), t0);
        }
    }
}
