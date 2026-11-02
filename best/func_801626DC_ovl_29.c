typedef struct { u8 pad[0x1AA8]; s32 f1; u8 pad2[4]; s32 f2; } Sub;
typedef struct { u8 pad[0x18000]; Sub sub; } Big;
extern Big D_800C7650_ovl_01;
s32 func_80032EA4_ovl_01(s32, s32, s32, s32);
void func_801626DC_ovl_29(void *p)
{
    func_80032EA4_ovl_01((s32)p, D_800C7650_ovl_01.sub.f1, D_800C7650_ovl_01.sub.f2, 0x400);
    func_80032EA4_ovl_01((s32)p, D_800C7650_ovl_01.sub.f1, D_800C7650_ovl_01.sub.f2, 0x320);
    *(u8 *)((u8 *)p + 5) = 1;
}
