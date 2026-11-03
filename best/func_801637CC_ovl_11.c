extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10F8_ovl_01[];
extern s16 D_800E12C2_ovl_01;
s32 func_80032EA4_ovl_01(void *, s16, s16, s16);
s32 func_80032F94_ovl_01_48(void *, s16, s16);
s32 func_80032F94_ovl_01_48(void *, void *, s16, s16);
s32 func_80033634_ovl_01(void);
s32 func_801637CC_ovl_11(void *arg0) {
    u8 *p=arg0; u32 base=0x18000; u8 *g=(u8*)D_800C7650_ovl_01+base;
    s32 timer=*(s32*)(p+0x28C), s4, s3;
    func_80032EA4_ovl_01(p,*(s16*)(g+0x1AA8),*(s16*)(g+0x1AB0),0x400);
    s4=func_80032EA4_ovl_01(p,*(s16*)(g+0x1AA8),*(s16*)(g+0x1AB0),0x200);
    s3=func_80032EA4_ovl_01(p,*(s16*)(g+0x1AA8),*(s16*)(g+0x1AB0),0x514);
    if(!p[0x2DA]&&(*(u32*)(p+0x290)&0xC0000000)&&((*(u32*)(p+0x290)&0x3FFFFFFF)<0x7D0)){
        if(!func_80032F94_ovl_01_48(p,*(s16*)(p+0x294),0x100)){*(u32*)(p+4)=0x10E0000;goto done;}
    }
    if(!p[0x2DA]&&!(s3<<16)&&timer<0x7D0){
        g=(u8*)D_800C7650_ovl_01+base;
        if(p[0x1A2]!=g[0x1C22]&&!g[0x1CEF])*(u32*)(p+4)=0x10E0000;
    }
    if(*(s16*)(p+0x270)&0xC000){if(*(s32*)(p+0x1AC)&1)*(u32*)(p+4)=0x10A0000;timer=timer<0xBB8;}else timer=timer<0xBB8;
    if(timer&&(s4<<16)){
        g=(u8*)D_800C7650_ovl_01+base;
        if(*(u16*)(g+0x1A7A)&0x17)if(!(func_80033634_ovl_01()&1))*(u32*)(p+4)=0x10C0000;
    }
    g=(u8*)D_800C7650_ovl_01+base;
    if(g[0x1A88]!=15){
        if(timer<0x4B0&&!(g[0x1CEF]&0x80)&&p[0x1A2]==g[0x1C22]){
            if(!(*(u16*)(p+0x2B6)&0x20)&&!func_80032F94_ovl_01_48(p+0x28,D_800E10F8_ovl_01,*(s16*)(p+0x66)+0x100,0x100)){*(u32*)(p+4)=0x1030000;g[0x1CEF]|=0x80;}
            if(!(*(u16*)(p+0x2B6)&0x40)&&!func_80032F94_ovl_01_48(p+0x28,D_800E10F8_ovl_01,*(s16*)(p+0x66)-0x100,0x100)){*(u32*)(p+4)=0x1030000;g[0x1CEF]|=0x80;}
        }
    }else if(!p[0x2DA]&&!(s3<<16)&&timer<0x7D0&&!g[0x1CEF])*(u32*)(p+4)=0x10E0000;
    g=(u8*)D_800C7650_ovl_01+base;
    if(*(s16*)(g+0x1C72)==(s16)0x8000&&!(s3<<16)&&timer<0x3E8){*(u32*)(p+4)=0x1080600;*(u16*)(p+0x1AA)|=0x4000;}
done:return 0;
}
