extern s32 func_8003334C_ovl_01(void *,s32,s32,s32);
extern s32 func_80089D34_ovl_01(void *,s32,s32,s32);
void func_80166388_ovl_26(void *arg0,s32 arg1,s32 arg2){
    u8 *p = arg0;
    s32 st = p[6];
    if (st == 1) goto work;
    if (st < 2) {
        if (st) goto done;
        p[6] = st + 1;
        *(u32 *)(p + 0x1E8) = 0x02003F00;
        *(u32 *)p |= 8;
        goto work;
    }
    goto done;
work:
    {
        u16 n = *(u16 *)(p + 0x66);
        *(u16 *)(p + 0x66) = n + 0x800;
    }
    func_8003334C_ovl_01(arg0, arg1, arg2, 0);
    {
        u16 n = *(u16 *)(p + 0x66);
        *(u16 *)(p + 0x66) = n - 0x800;
    }
    p[5] += func_80089D34_ovl_01(arg0, arg1, arg2, 0x40);
done:
    ;
}
