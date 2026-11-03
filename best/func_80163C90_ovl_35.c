extern void func_80166520_ovl_35(void *, s32);
extern void func_80032B8C_ovl_01(void *, s32);
extern void func_80089D34_ovl_01(void *, s32, s32, s32);

void func_80163C90_ovl_35(void *p, s32 a1, s32 a2)
{
    *(s16 *)((u8 *)p + 0x6) = 0x100;
    *(s16 *)((u8 *)p + 0x64) = 0;
    *(s32 *)p |= 4;
    func_80166520_ovl_35(p, 1);
    *(s16 *)((u8 *)p + 0x1E0) = 0x30F;
    *(s16 *)((u8 *)p + 0x1E4) = 0;
    func_80032B8C_ovl_01(p, 0);
    *(s16 *)((u8 *)p + 0x68) = -0x400;
    *(s32 *)((u8 *)p + 0x1E8) = 0x08000000;
    func_80089D34_ovl_01(p, a1, a2, 0x100);
}
