extern s32 func_80077D48_ovl_01(u8, void *);
extern void func_80167F74_ovl_14(void);

typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;

void func_801678B8_ovl_17(void *arg0)
{
    U64 b;
    u8 *base;
    u8 a;
    s32 n;

    if (*(s32 *)(*(void **)((u8 *)arg0 + 0x214)) & 0x100000) {
        a = 0xA;
        if (*(s16 *)((u8 *)arg0 + 0x1A8) == 0) {
            b.w.lo = (u32)func_80167F74_ovl_14 + 0x44;
            base = (u8 *)b.w.lo;
            a = base[((u8 *)arg0)[0x2D4]];
        }
        func_80077D48_ovl_01(a, arg0);
        n = ((u8 *)arg0)[0x2D4] + 1;
        ((u8 *)arg0)[0x2D4] = n % 3;
    }
}
