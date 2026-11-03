typedef void (*Fn)(void *);
extern volatile Fn D_8016E7B8_ovl_11[];
void func_8016B470_ovl_11(void *p)
{
    register volatile Fn *tbl = D_8016E7B8_ovl_11;
    (*tbl[((u8 *)p)[5]])(p);
}
