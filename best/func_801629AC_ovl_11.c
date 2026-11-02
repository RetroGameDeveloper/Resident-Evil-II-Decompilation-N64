typedef void (*Fn)(void *);
extern Fn D_8016E0F4_ovl_11[];

void func_801629AC_ovl_11(void *p) {
    volatile Fn *table = D_8016E0F4_ovl_11;
    table[(*(u16 *)((u8 *)p + 0x1AA)) & 0x3F](p);
}
