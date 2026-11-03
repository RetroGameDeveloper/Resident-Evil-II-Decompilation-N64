extern u32 D_800128AC;
s32 func_80004C9C(s32);
s32 func_80004CFC(s32, s32, s32, s32);

u32 func_800051B8(u32 arg0) {
    u32 *p = &D_800128AC;
    u32 a = arg0 & 0xFFFF;
    u32 ret = func_80004C9C(a);
    *p = (*p - ret) & ~7;
    func_80004CFC(a, *p, 0, 0);
    return ret;
}
