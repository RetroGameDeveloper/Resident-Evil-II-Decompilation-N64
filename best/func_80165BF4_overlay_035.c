typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64x;
typedef void (*Cb)(void *, void *);
extern volatile Cb D_801667CC_ovl_35[];
s32 func_80033634_ovl_01(void);
s32 func_80166324_ovl_35(void *, s32, s32);

void func_80165BF4_overlay_035(void *arg0)
{
    U64x b;
    u8 *p;
    s32 v;

    b.w.lo = (u32)arg0;
    p = (u8 *)(b.w.lo + 0x2B4);
    v = p[0x18];
    if (v != 0) {
        v--;
        if (p[9] & 1) {
            p[0x18] = v;
            if (v & 1) {
                func_80166324_ovl_35(arg0, 3, func_80033634_ovl_01() & 7);
            }
        }
    }
    if (p[9] & 0x80) {
        D_801667CC_ovl_35[p[6]](arg0, p);
    }
}
