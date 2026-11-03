void func_801656FC_ovl_17(void *, s32, s32);
void func_80166FBC_ovl_17(void *, s32, s32);
s32 func_80167948_ovl_17(void *, s32);
void func_801665B4_ovl_17(void *arg0, s32 arg1, s32 arg2) {
    if (*(u8 *)(arg0 + 0x2C0) == 0) {
        func_80167948_ovl_17(arg0, 0x3F3F3F);
        *(s8 *)(arg0 + 0x2D7) = 0x1E;
        func_80166FBC_ovl_17(arg0, 0x13, 0xA);
        func_80166FBC_ovl_17(arg0, 0, 0xA);
    }
    *(s8 *)(arg0 + 5) = 2;
    func_801656FC_ovl_17(arg0, arg1, arg2);
}
