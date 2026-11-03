extern s32 func_80164E08_ovl_26(void *, s32, s32);
extern s32 func_80166B18_ovl_26(void *, u8, s32);

void func_801651F8_ovl_26(void *arg0, s32 arg1, s32 arg2) {
    u32 n;
    u8 rem;
    u8 a1;

    if (*(u8 *)((u8 *)arg0 + 6) == 0) {
        n = *(u8 *)((u8 *)arg0 + 0x26E);
        rem = n % 3;
        if (rem != 0) {
            a1 = 0xB;
        } else {
            a1 = 5;
            if (*(u8 *)((u8 *)arg0 + 0x2D9) != 0) {
                a1 = 0xB;
            }
        }
        func_80166B18_ovl_26(arg0, a1, 2);
    }
    func_80164E08_ovl_26(arg0, arg1, arg2);
}
