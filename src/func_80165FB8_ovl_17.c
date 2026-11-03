extern s32 func_80033634_ovl_01(void);
extern void func_80166FBC_ovl_17(void *, s32, s32);
extern void func_801661C8_ovl_17(void *);
extern void func_80167608_ovl_17(void *, s32, s32);
extern void func_8016587C_ovl_17(void *, s32, s32);

void func_80165FB8_ovl_17(void *arg0, s32 arg1, s32 arg2)
{
    if (*(u8 *)((u8 *)arg0 + 6) == 0) {
        func_80166FBC_ovl_17(arg0, 0x13, 1);
        func_801661C8_ovl_17(arg0);
        func_80167608_ovl_17(arg0, 0x2004, (func_80033634_ovl_01() & 3) + 6);
    }
    func_8016587C_ovl_17(arg0, arg1, arg2);
}
