typedef void (*Fn)(void *);
extern Fn D_80166D64_ovl_12[];
extern void func_80166458_ovl_12(void *);

void func_80164664_overlay_012(void *arg0) {
    volatile Fn *table = D_80166D64_ovl_12;
    table[((u8 *)arg0)[6]](arg0);
    func_80166458_ovl_12(arg0);
}
