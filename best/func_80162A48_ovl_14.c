s32 func_80040E88_ovl_01(void *, void *);
s32 func_8004251C_ovl_01(void *, void *, void *);

void func_80162A48_ovl_14(void *arg0, s32 arg1)
{
    s32 n = arg1;
    u8 *p = arg0;
    u8 *obj;
    u8 tmp[0x20];
    u8 *at;

    obj = *(u8 **)(p + 0x234);
    func_80040E88_ovl_01(p + 0x64, p + 0x14);
    func_8004251C_ovl_01(p + 0x14, obj + 8, tmp);
    at = obj + (n * 0x5E0 + 0x1780);
    func_8004251C_ovl_01(tmp, at - 0x2E8, tmp);
    func_8004251C_ovl_01(tmp, at - 0x170, tmp);
    func_8004251C_ovl_01(tmp, at + 8, tmp);
    *(s32 *)(p + 0x28) -= *(s32 *)(tmp + 0x14) - *(s32 *)(at + 0x4C);
    *(s32 *)(p + 0x30) -= *(s32 *)(tmp + 0x1C) - *(s32 *)(at + 0x54);
}
