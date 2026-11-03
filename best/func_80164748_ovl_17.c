typedef void (*Fn)(void);
extern volatile Fn D_80167E58_ovl_17[];

void func_80164748_ovl_17(u8 *arg0) {
    volatile Fn *tbl = D_80167E58_ovl_17;
    tbl += arg0[0x2BE];
    (*tbl)();
}
