typedef void (*Fn)(void *, s32, s32);
extern Fn D_80167FA4_ovl_20[];
void func_80162728_overlay_020(void *arg0, s32 arg1, s32 arg2) {
    void *p = arg0;
    s32 x = arg1;
    s32 y;
    u8 state;
    y = arg2;
    state = *((u8 *)p + 5);
    D_80167FA4_ovl_20[state](p, x, y);
    p = arg0;
    state = *((u8 *)p + 5);
    D_80167FA4_ovl_20[state](p, x, y);
}
