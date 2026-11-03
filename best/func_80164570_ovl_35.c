typedef void (*Fn)(void *, void *, void *);
extern volatile Fn D_80166728_ovl_35[];
extern void func_80089D34_ovl_01(void *, void *, void *, s32);

void func_80164570_ovl_35(void *a0, void *a1, void *a2)
{
    u8 *p = (u8 *)a0 + 0x2B4;

    D_80166728_ovl_35[*((u8 *)a0 + 6)](a0, a1, a2);
    if (*((u8 *)a0 + 6) != 0)
        func_80089D34_ovl_01(a0, a1, a2, 0x100);
    *(u16 *)(p + 0x1C) = *(u16 *)((u8 *)a0 + 0x1E0);
    *(u16 *)(p + 0x1E) = *(u16 *)((u8 *)a0 + 0x1E2);
    *(u16 *)(p + 0x20) = *(u16 *)((u8 *)a0 + 0x1E4);
}
