s32 func_80166FBC_ovl_17(void *, s32, s32);
s32 func_801649F8_ovl_17(void *, s32, s32);
void func_801654FC_ovl_17(void *arg0, s32 arg1, s32 arg2) {
    *(s8 *)((u8 *)arg0 + 0x2D7) = 0x14;
    func_80166FBC_ovl_17(arg0, 0, 10);
    *(s8 *)((u8 *)arg0 + 5) = 7;
    func_801649F8_ovl_17(arg0, arg1, arg2);
}
