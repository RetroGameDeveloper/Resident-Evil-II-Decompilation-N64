typedef void (*Fn)(void *);
extern volatile Fn D_801666B4_ovl_35[];

void func_80164318_ovl_35(u8 *a0)
{
    u32 j = a0[5] - 1;

    *(s16 *)(a0 + 0x64) = 0;
    D_801666B4_ovl_35[j](a0);
}
