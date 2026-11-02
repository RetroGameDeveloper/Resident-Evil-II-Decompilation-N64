s32 func_801636A4_ovl_27(void *, s16 *, s32);
s32 func_80040E88_ovl_01(s16 *, s32 *);
s32 func_8004279C_ovl_01(s32 *, u16 *, s16 *);
void func_801636DC_ovl_27(void *arg0, s32 arg1) {
    s16 xyz[3]; u16 rot[3]; s32 v[8]; void *base; void *hit;
    base=*(void **)((u8*)arg0+0x250);
    hit=(void*)func_801636A4_ovl_27(base,xyz,*(u8*)((u8*)arg0+0x1AB)-1);
    *(s32*)((u8*)arg0+0x28)=xyz[0]; *(s32*)((u8*)arg0+0x2C)=xyz[1]; *(s32*)((u8*)arg0+0x30)=xyz[2];
    xyz[0]=*(u16*)((u8*)base+0x64)+*(u16*)((u8*)hit+0x58);
    xyz[1]=*(u16*)((u8*)base+0x66)+*(u16*)((u8*)hit+0x5A);
    xyz[2]=*(u16*)((u8*)base+0x68)+*(u16*)((u8*)hit+0x5C);
    func_80040E88_ovl_01(xyz,v);
    rot[0]=*(u16*)((u8*)arg0+0x2B6); rot[1]=*(u16*)((u8*)arg0+0x2B8); rot[2]=*(u16*)((u8*)arg0+0x2BA);
    func_8004279C_ovl_01(v,rot,xyz);
    *(u16*)((u8*)arg0+0x64)=*(u16*)((u8*)base+0x64);
    *(u16*)((u8*)arg0+0x66)=*(u16*)((u8*)base+0x66)+*(u16*)((u8*)arg0+0x2BC);
    *(u16*)((u8*)arg0+0x68)=*(u16*)((u8*)base+0x68)+*(u16*)((u8*)arg0+0x2C2);
    if(arg1) { *(u16*)((u8*)arg0+0x64)+=*(u16*)((u8*)hit+0x58); *(u16*)((u8*)arg0+0x66)+=*(u16*)((u8*)hit+0x5A); *(u16*)((u8*)arg0+0x68)+=*(u16*)((u8*)hit+0x5C); }
}
