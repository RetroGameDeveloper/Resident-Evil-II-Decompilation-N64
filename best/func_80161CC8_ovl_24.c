s32 func_80089D34_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_80033A0C_ovl_01(void *arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
void func_80161D9C_ovl_24(void *arg0);

void func_80161CC8_ovl_24(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 4) = 0x01000000;
    func_80089D34_ovl_01(arg0, arg1, arg2, 0x1000);
    *(u8 *)((u8 *)arg0 + 0x26F) = 0x80;
    *(u32 *)arg0 |= 0x44A;
    func_80033A0C_ovl_01((u8 *)arg0 + 0x208, 0, 0, 0, (u8 *)arg0 + 0x28);
    func_80161D9C_ovl_24(arg0);
}
