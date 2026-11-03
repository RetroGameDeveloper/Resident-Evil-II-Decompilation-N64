extern void (*D_80166728_ovl_35[])(void *, s32, s32);
void func_80164604_ovl_35(void);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);

void func_80164E04_ovl_35(void *arg0, s32 arg1, s32 arg2) {
    if (*(u8 *)((u8 *)arg0 + 6) == 0) {
        func_80164604_ovl_35();
        ((u8 *)arg0)[0x2CF] = 0x14;
    } else {
        D_80166728_ovl_35[*(u8 *)((u8 *)arg0 + 6)](arg0, arg1, arg2);
        func_80089D34_ovl_01(arg0, arg1, arg2, 0x100);
    }
}
