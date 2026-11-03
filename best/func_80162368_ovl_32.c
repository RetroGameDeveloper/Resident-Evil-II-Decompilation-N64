typedef void (*Cb)(void *, void *, void *);
extern volatile Cb D_80166F10_ovl_32[];
extern volatile Cb D_80166F24_ovl_32[];

void func_80162368_ovl_32(void *a0, void *a1, void *a2)
{
    if ((*(u16 *)((u8 *)a0 + 0x2C2) & 6) == 4) {
        *(u32 *)((u8 *)a0 + 4) = 0x03000000;
        return;
    }
    ((void (*)(void *))D_80166F10_ovl_32[*(u8 *)((u8 *)a0 + 5)])(a0);
    D_80166F24_ovl_32[*(u8 *)((u8 *)a0 + 5)](a0, a1, a2);
}
