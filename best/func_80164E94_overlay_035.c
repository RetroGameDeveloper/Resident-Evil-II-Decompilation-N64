typedef void (*Dispatch)(void *, s32, s32);
extern Dispatch D_80166754_ovl_35[];
extern void func_80089D34_ovl_01(void *, s32, s32, s32);
void func_80164E94_overlay_035(void *arg0, s32 arg1, s32 arg2) {
    volatile Dispatch *p = D_80166754_ovl_35;
    p[((u8 *)arg0)[6]](arg0,arg1,arg2);
    if (((u8 *)arg0)[6] != 3) func_80089D34_ovl_01(arg0,arg1,arg2,0x100);
    *(u16 *)((char *)arg0+0x2D0) = *(u16 *)((char *)arg0+0x1E0);
    *(u16 *)((char *)arg0+0x2D2) = *(u16 *)((char *)arg0+0x1E2);
    *(u16 *)((char *)arg0+0x2D4) = *(u16 *)((char *)arg0+0x1E4);
}
