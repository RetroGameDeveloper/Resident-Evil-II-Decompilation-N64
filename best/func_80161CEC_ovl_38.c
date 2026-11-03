extern s32 func_80089D34_ovl_01(void *, s32, s32, s32);
extern s32 func_80033A0C_ovl_01(void *, s32, s32, s32, void *);

void func_80161CEC_ovl_38(void *arg0)
{
    u8 *p = arg0;
    s32 z = 0;

    *(s32 *)(p + 4) = 0x02000000;
    *(s32 *)(p + 0x1E8) = 0;
    func_80089D34_ovl_01(p, *(s32 *)(p + 0x1A4), *(s32 *)(p + 0x218), z);
    *(u8 *)(p + 0x25D) = 0;
    *(s32 *)(p + 0x284) = 0;
    func_80033A0C_ovl_01(p + 0x208, z, z, z, p + 0x28);
    *(u8 *)(*(u32 *)(p + 0x208) + 0xE) = 0;
    *(s32 *)p |= 0xA;
    *(u16 *)(p + 0x1AA) |= 0x4000;
}
