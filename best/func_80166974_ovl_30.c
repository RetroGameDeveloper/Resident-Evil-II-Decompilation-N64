typedef void (*Fn)(void *, void *, void *);
extern volatile Fn D_80167F54_ovl_30[];

void func_80166974_ovl_30(u8 *a0, void *a1, void *a2)
{
    D_80167F54_ovl_30[a0[5]](a0, a2, a1);
}
