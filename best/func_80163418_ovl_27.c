extern u32 D_80163D50_ovl_27[];
void func_80163418_ovl_27(void *arg0)
{
    if (*(u8 *)((u8 *)arg0 + 0x2c8)) {
        u32 i = *(u8 *)((u8 *)arg0 + 5) - 1;
        u32 *t = D_80163D50_ovl_27;
        ((void (*)(void)) * (volatile u32 *)((u8 *)t + i * 4))();
    }
}
