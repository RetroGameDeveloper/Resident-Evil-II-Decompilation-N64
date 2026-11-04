typedef void (*Fn)(void *);
extern volatile Fn D_8016E7B8_ovl_11[];
void func_8016B470_ovl_11(void *p)
{
  void *new_var;
  register volatile Fn *tbl;
 new_var = p; do { (*tbl[((u8 *) new_var)[5]])(new_var); } while (0);
  tbl = D_8016E7B8_ovl_11;
}
