s32 func_80032B40_ovl_01(void *p, s16 *b) {
    u32 x = (u32)(*(s32 *)((u8 *)p + 0) - b[0]);
    if ((u32)(u16)b[2] < x) return 0;
    x = (u32)(*(s32 *)((u8 *)p + 8) - b[1]);
    if ((u32)(u16)b[3] < x) return 0;
    return 1;
}
void func_80032B8C_ovl_01(void *p, s32 a) {
    s16 h[4];
    s32 tmp[8];
    h[0]=0; h[1]=*(u16*)((u8*)p+0x66)+a; h[2]=0;
    func_80040E88_ovl_01(h,tmp);
    func_8004279C_ovl_01(tmp,(u8*)p+0x1e0,h);
    *(s32*)((u8*)p+0x28)+=h[0];
    *(s32*)((u8*)p+0x30)+=h[2];
}
void func_80032C08_ovl_01(void *p, s32 a, s32 b) {
    s16 h[4]; s32 tmp[8];
    h[0]=0; h[1]=*(u16*)((u8*)p+0x66)+a; h[2]=*(u16*)((u8*)p+0x68)+b;
    func_80040E88_ovl_01(h,tmp);
    func_8004279C_ovl_01(tmp,(u8*)p+0x1e0,h);
    *(s32*)((u8*)p+0x28)+=h[0];
    *(s32*)((u8*)p+0x2c)+=h[1];
    *(s32*)((u8*)p+0x30)+=h[2];
}
void func_80032C9C_ovl_01(void *p, s32 a, s32 b) {
    s16 h[4]; s32 tmp[8]; s32 tmp2[8];
    h[0]=0; h[1]=*(u16*)((u8*)p+0x66)+a; h[2]=*(u16*)((u8*)p+0x68)+b;
    func_80040E88_ovl_01(h,tmp);
    func_8004251C_ovl_01(*(s32*)((u8*)p+0x70),tmp,tmp2);
    func_8004279C_ovl_01(tmp2,(u8*)p+0x1e0,h);
    *(s32*)((u8*)p+0x28)+=h[0];
    *(s32*)((u8*)p+0x2c)+=h[1];
    *(s32*)((u8*)p+0x30)+=h[2];
}
