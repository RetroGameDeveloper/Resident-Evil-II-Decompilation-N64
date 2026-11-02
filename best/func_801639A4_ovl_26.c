typedef void (*Fn)(void);
extern Fn D_80167244_ovl_26[];

void func_801639A4_ovl_26(u8 *a) {
    volatile Fn *table = D_80167244_ovl_26;
    table[a[6]]();
    a[0x2D6] = 1;
    a[0x2D7] = 1;
}
