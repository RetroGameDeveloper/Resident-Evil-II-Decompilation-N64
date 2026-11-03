extern u8 D_80011BB0;
extern u8 D_80011BB4;
extern s32 D_80000308;
void func_8000C620(void *, void *, s32);

s32 func_8000C940(s32 arg0, s32 *arg1)
{
    if (arg1 == NULL) {
        func_8000C620(&D_80011BB0, &D_80011BB4, 0x3D);
    }
    while ((*(volatile u32 *)0xA4600010) & 3) {
    }
    *arg1 = *(s32 *)((D_80000308 | arg0) | 0xA0000000);
    return 0;
}
