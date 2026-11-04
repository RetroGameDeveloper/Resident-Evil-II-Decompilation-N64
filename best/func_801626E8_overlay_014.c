extern u8 D_800C7650_ovl_01[]; extern u8 D_800E10D0_ovl_01[]; extern s32 func_80036764_ovl_01(s32,s32,s32,s32);
void *func_801626E8_overlay_014(u8 *p) {
 u8 *base=D_800C7650_ovl_01+0x18000; s32 r; u32 x;
 if(*(s16*)(base+0x1c72)<0)return 0;
 if(p[4]==7){p[0x2b5]=0;return 0;}
 if(*(u16*)(p+0x2c8)&1)return D_800E10D0_ovl_01;
 if(p[0xd]<2){p[0x2b5]=1;return *(void**)(base+0x1d38+p[0xd]*4);}
 r=func_80036764_ovl_01(*(s32*)(p+0x28c),3000,9000,9100);
 if(r==1){x=*(u16*)(base+0x1a7a)&5;if(!x)return 0;p[0x2b5]=1;return D_800E10D0_ovl_01;}
 if(r==0){x=*(u32*)(base+0x1a78)&0x17;if(!x)return 0;p[0x2b5]=1;return D_800E10D0_ovl_01;}
 if((u32)r<4){x=*(u16*)(base+0x1a7a)&5;if(!x)return 0;p[0x2b5]=1;return D_800E10D0_ovl_01;}
 return 0;
}
