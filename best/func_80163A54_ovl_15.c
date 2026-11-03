typedef void (*Fn)(void *, void *, void *);
extern volatile Fn D_80166010_ovl_15[];

void func_80163A54_ovl_15(u8 *a0, void *a1, void *a2)
{
    D_80166010_ovl_15[a0[5]](a0, a1, a2);
}
