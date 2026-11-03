typedef struct { u8 pad0[4]; s32 state; } Obj;
s32 func_80036C98_ovl_01(void *, s32, s32, s32);
void func_8016271C_ovl_15(Obj *arg0) {
    if (!*((u8 *)arg0+6) && func_80036C98_ovl_01(arg0,1,4,0)) arg0->state=0x01020000;
}
