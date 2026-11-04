extern void func_80089D34_ovl_01(void *, s32, s32, s32);
void func_80166200_ovl_26(void *arg0, s32 arg1, s32 arg2){
    if (*(u8 *)((u8 *)arg0 + 6) == 0) {
        *(u8 *)((u8 *)arg0 + 6) = 1;
        *(s32 *)((u8 *)arg0 + 0x1E8) = 0x03003F00;
        *(u8 *)((u8 *)arg0 + 0x25C) |= 1;
    }
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
}
