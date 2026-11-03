extern s32 func_80089D34_ovl_01(s32, s32, s32, s32);
void func_80163534_ovl_12(void *arg0, s32 arg1, s32 arg2){
    if (func_80089D34_ovl_01((s32)arg0, arg1, arg2, 0x100) != 0) {
        *(s16 *)((u8 *)arg0 + 6) = 0x300;
        *(s32 *)arg0 |= 0x08000000;
        *(u16 *)((u8 *)arg0 + 0x1AA) &= 0xDFFF;
    }
}
