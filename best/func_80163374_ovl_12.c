typedef void (*Fn)(void *);
extern volatile Fn D_80166D48_ovl_12[];
void func_80163374_ovl_12(void *p)
{
  volatile Fn *tbl;
  tbl += ((u8 *) p)[6];
  (*tbl)(p);
  tbl = D_80166D48_ovl_12;
}

