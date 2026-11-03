extern u8 D_800C7650_ovl_01[];
extern void *D_800E1388_ovl_01[];

s32 func_80036F08_ovl_01(void *arg0, void **arg1, s32 arg2, s32 arg3) {
    void *saved_arg0 = arg0;
    u32 offset_18000 = 0x18000;
    void **p = D_800E1388_ovl_01;
    typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;
    U64 base_u64;
    u8 *base;
    void **end;
    s32 count = 0;
    u8 *base_copy;
    void *e;
    
    base_u64.w.lo = (u32)D_800C7650_ovl_01;
    base = (u8 *)(base_u64.w.lo + offset_18000);
    
    end = *(void ***)(base + 0x28C);
    
    if (p != end) {
        base_copy = base;
        do {
            e = *p;
            if ((*(u32 *)e & 1) && ((u8 *)e)[8] == arg2 && e != saved_arg0) {
                count++;
                if (arg1 != NULL && arg3 != 0) {
                    *arg1++ = e;
                    arg3--;
                }
            }
            p++;
            end = *(void ***)(base_copy + 0x28C);
        } while (p != end);
    }
    return count;
}
