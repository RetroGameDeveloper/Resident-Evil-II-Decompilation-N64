extern u8 D_801443E8[];
s32 func_800AF074_ovl_01(void);
void func_800AC5B4_ovl_01(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

s32 func_800A771C_ovl_01(s32 arg0, u32 arg1) {
    s32 ret = -1;
    s32 end;
    s32 id = func_800AF074_ovl_01();
    u32 idx;
    u8 *base;
    u8 *p;
    s32 a2;

    if (id == ret) {
        goto done;
    }
    base = D_801443E8;
    end = ret;
    for (;;) {
        idx = id & 0xFF;
        p = (u8 *)((u32)(idx * 0x1A0) + (u32)base);
        if (*(s32 *)(p + 0x60) != id) {
            goto done;
        }
        if (*(s32 *)(p + 0x24) & 2) {
            a2 = p[0x55];
        } else {
            a2 = p[0x4B];
        }
        func_800AC5B4_ovl_01(0x83, idx, a2, arg1 & 0xFF);
        id = *(s32 *)((u8 *)((u32)(idx * 0x1A0) + (u32)base) + 0x10);
        ret = 0;
        if (id == end) {
            break;
        }
    }
done:
    return ret;
}
