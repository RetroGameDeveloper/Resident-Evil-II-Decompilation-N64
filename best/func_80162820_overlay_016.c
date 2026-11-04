typedef struct { u8 x[0x2b6]; } Obj;
extern s8 D_800C7650_ovl_01[];
extern s8 D_800E10D0_ovl_01[];
s32 func_80036EA0_ovl_01(s32,s32,s32,s32);
void *func_80162820_overlay_016(Obj *p) { s32 r; u8 v; if (*(s16*)(D_800C7650_ovl_01+0x18000+0x1c72)<0) return 0; if(p->x[4]==7){p->x[0x2b5]=0;return 0;} if(!(*(u16*)(p->x+0x2c8)&1)){v=p->x[0xd];if(v<2){p->x[0x2b5]=2;return *(void**)(D_800C7650_ovl_01+0x18000+v*4+0x1d38);} r=func_80036EA0_ovl_01(*(s32*)(p->x+0x28c),3000,5000,7000);if(r==0){v=*(u8*)(D_800C7650_ovl_01+0x18000+0x1a85);}else if(r==1){v=*(u32*)(D_800C7650_ovl_01+0x18000+0x1a78)&0x17;}else if((u32)r<4){v=*(u16*)(D_800C7650_ovl_01+0x18000+r+0x1a7a)&5;}else return 0;if(!v)return 0;p->x[0x2b5]=2;return D_800E10D0_ovl_01;} p->x[0x2b5]=1;return D_800E10D0_ovl_01;}
