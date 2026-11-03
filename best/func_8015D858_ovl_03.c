typedef void (*Fn)(void);
extern u8 D_80160B9D_ovl_03;
extern volatile Fn D_80160AF0_ovl_03[];

void func_8015D858_ovl_03(void)
{
    volatile Fn *table = D_80160AF0_ovl_03;
    table[D_80160B9D_ovl_03]();
}
