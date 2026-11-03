extern void func_8002E670_ovl_01(void);
void func_8002E600(u8 *a, s32 flag) {
    s32 *s = *(s32 **)(a + 0x170);
    if (!flag) {
        if (*(s32 *)(a + 0x44)) {
            s[1] = (s32)func_8002E670_ovl_01;
        } else {
            s[1] = ((s32 *)*(u8 **)(a + 0x180))[1];
        }
    } else {
        *(s32 *)(*(u8 **)a + 0x14) = 4;
        (*(void (**)(u8 *))*(u8 **)a)(a);
    }
    s[6] = 0;
    s[5] = 0;
}
