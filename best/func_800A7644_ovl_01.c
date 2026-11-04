extern u8 D_801443E8[];
s32 func_800AF074_ovl_01(s32 arg0);
void func_800AC5B4_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

s32 func_800A7644_ovl_01(s32 arg0, u32 arg1) {
    s32 ret = -1;
    s32 id = func_800AF074_ovl_01(arg0);
    s32 end;
    u8 *base;
    u8 *p;
    u32 idx;
    s32 a2;

    if (id == ret) {
        goto done;
    }
    base = D_801443E8;
    end = ret;
    for (;;) {
        idx = id & 0xFF;
        p = base + idx * 0x1A0;
        if (*(s32 *)(p + 0x60) != id) {
            goto done;
        }
        if (*(s32 *)(p + 0x24) & 2) {
            a2 = p[0x55];
        
        func_800AC5B4_ovl_01(0xA, idx, a2, arg1 & 0xFF);} else {
            a2 = p[0x4B];
        
        func_800AC5B4_ovl_01(0xA, idx, a2, arg1 & 0xFF);}
        id = *(s32 *)(base + idx * 0x1A0 + 0x10);
        ret = 0;
        if (id == end) {
            break;
        }
    }
done:
    return ret;
}
