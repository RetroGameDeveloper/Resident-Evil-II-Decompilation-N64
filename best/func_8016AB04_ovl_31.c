typedef void (*Fn)(void);
extern volatile Fn D_8016C498_ovl_31[];
extern void func_800662B8_ovl_01(void *, s32);

void func_8016AB04_ovl_31(void *a, s32 b)
{
    if (*(u16 *)((u8 *)a + 0x1AA) & 1) {
        D_8016C498_ovl_31[*(u8 *)((u8 *)a + 0x2C4)]();
        func_800662B8_ovl_01(a, b);
    }
}
