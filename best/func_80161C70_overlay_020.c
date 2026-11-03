extern u8 D_800E10F8_ovl_01[];
extern u8 D_800C7650_ovl_01[];
extern u8 D_80167EE0_ovl_20[];
extern s8 D_80167F4A_ovl_20, D_80167F4B_ovl_20;
extern u8 D_800E10D0_ovl_01[];
extern u32 D_800E1388_ovl_01[];
extern void func_800662B8_ovl_01_2CC(void*,void*);
void func_80161C70_overlay_020(u8 *p) {
    u16 v,ang; u8 *base=*(u8**)(p+0x234),*o;
    func_80065400_ovl_01(D_800E10F8_ovl_01,0,0,0);
    if(*((u32*)(D_800C7650_ovl_01+0x19a60))&0x20000000)return;
    v=p[0x26f];if(v&0x7f)p[0x26f]=v-1;v=p[0x2be];if(v&0x7f)p[0x2be]=v-1;
    ((void(**)(void*,s32,s32))(D_80167EE0_ovl_20+*(u8*)(p+4)*4))[0](p,*(s32*)(p+0x1a4),*(s32*)(p+0x218));
    v=*(u16*)(p+0x2b4);if(v)*(u16*)(p+0x2b4)=v-1;if(p[0x2b9])p[0x2b9]--;if(p[0x2c4])p[0x2c4]--;
    if(*(u32*)(*(u32*)(p+0x214))&0x08000000){v=func_80033634_ovl_01();D_80167F4A_ovl_20=3-v%6;v=func_80033634_ovl_01();D_80167F4B_ovl_20=7-v%14;}
    func_80167A98_ovl_20(p,base+0x178);
    if(*(u16*)(p+0x2ba)&0x100){func_800662B8_ovl_01(p,base+0x178);func_800662B8_ovl_01_2CC(p,base+0x178);}
    func_80165504_ovl_20(p);func_801661A0_ovl_20(p,base+0xd38);*(u32*)(p+0x250)=(u32)D_800E10D0_ovl_01;
    if(!(*(u16*)(p+0x2ba)&0x4000)){
        func_80034A00_ovl_01(p,*(s16*)(p+0x66),&ang);ang&=0xfff;if(ang>=0x801)ang-=0xfff;ang/=3;
        o=base+0x2f0;*(u16*)(o+0x5a)+=ang;func_80040E88_ovl_01(base+0x348,base+0x2f8);*(u16*)(o+0x5a)-=ang;
        o=base+0x468;*(u16*)(o+0x5a)+=ang;func_80040E88_ovl_01(base+0x4c0,base+0x470);*(u16*)(o+0x5a)-=ang;
        o=base+0x5e0;*(u16*)(o+0x5a)+=ang;func_80040E88_ovl_01(base+0x638,base+0x5e8);*(u16*)(o+0x5a)-=ang;
    }
}
