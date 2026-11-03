extern u8 D_80162FA0_ovl_25[];extern u8 D_800E10F8_ovl_01[];extern u8 D_800C7650_ovl_01[];
void func_801625B0_ovl_25(void *p){u8 *q=(u8*)p;u8 *g=D_800C7650_ovl_01+0x18000;u32 i;u8 n;s32 x;
i=(*(u16*)(q+0x1AA)&1)*7;n=D_80162FA0_ovl_25[i+2];x=func_80032F94_ovl_01_48(D_800E10F8_ovl_01,*(s32*)(q+0x234)+n*0x178+0x4C,0x258);
if((x<<16)!=0){if(q[0x1E9]>=5){if(*(u16*)(g+0x1A78)==0){if(g[0x1CEF]&0x80){*(s32*)(q+4)=0x01060000;}else{*(s32*)(q+4)=0x01040000;g[0x1CEF]|=0x80;}}}}
}
