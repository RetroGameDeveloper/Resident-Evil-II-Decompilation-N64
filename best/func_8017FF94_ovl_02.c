extern s32 D_80187020_ovl_02;
extern s32 *D_80187420_ovl_02;
void func_8017FF94_ovl_02(void){
    s16 *dst;
    s32 x;
    D_80187420_ovl_02 = &D_80187020_ovl_02;
    x = -0x200;
    dst = (s16 *)((u8 *)&D_80187020_ovl_02 - 0x400);
    do {
        if (x < -0x100) { *dst = -0x100; goto next; }
        if (x < 0x100) *dst = x;
        else *dst = 0xff;
    next:
        x++;
        dst++;
    } while (x < 0x200);
}
