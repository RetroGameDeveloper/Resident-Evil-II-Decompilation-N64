typedef void (*Fn)(void *, void *, void *);
extern volatile Fn D_8016E12C_ovl_11[];
extern volatile Fn D_8016E16C_ovl_11[];

void func_801629E4_ovl_11(unsigned char *p, void *a1, void *a2)
{
    volatile Fn *t;
    t = D_8016E12C_ovl_11;
    t[p[5]](p, a1, a2);
    t = D_8016E16C_ovl_11;
    t[p[5]](p, a1, a2);
}
