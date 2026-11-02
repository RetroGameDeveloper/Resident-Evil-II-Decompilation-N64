s32 func_80033634_ovl_01(void);
s32 func_80166FBC_ovl_17(void *, s32, s32, s32);
extern u8 D_800E7650_ovl_01[];
s32 func_801674BC_ovl_17(void *arg0) {
 u8 *q=(u8*)arg0+0x2B4; s32 i,a,b,c,d,e; u8 x,y; u32 *z; s32 result;
 result=1;
 if(q[0x24]==14) return result;
 i=func_80033634_ovl_01()&7;
 if(q[9]<3) goto fail;
 x=q[8]; if((x>>i)&1) goto fail;
 a=i*2; b=a+3; c=b; d=a+4;
 q[8]=x|(1<<i); y=q[9]; q[9]=y-1;
 if(d<b) goto final_call;
 e=b*0x178;
 do {
  z=(u32*)(*(u32*)((u8*)arg0+0x234)+e);
  d--; /* force the same limit counter flow */
  *z=(*z)|((D_800E7650_ovl_01[0x1962]&8)?0x4A:0);
  *(s16*)((u8*)z+0x138)=0; *(s16*)((u8*)z+0x134)=0x258;
  *(s16*)((u8*)z+0x132)=-0x78; *(s16*)((u8*)z+0x136)=10;
  *(s16*)((u8*)z+0x13C)=-0x64; *(u32*)((u8*)z+0x60)=0x2F2F2F;
  *(s16*)((u8*)z+0x130)=*(u16*)((u8*)arg0+0x66)+0x800;
  c++;
  e+=0x178;
 } while(c<d);
final_call:
 func_80166FBC_ovl_17(arg0,b,1,0);
 result=0;
 return result;
fail:
 func_80166FBC_ovl_17(arg0,0x13,1,0);
 return 1;
}
