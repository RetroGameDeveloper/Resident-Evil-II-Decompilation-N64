extern s32 D_800C7650_ovl_01; s32 func_80032EA4_ovl_01(void*,s32,s32,s32);s32 func_80033634_ovl_01(void);
typedef struct{u8 pad[0x1aa8];s32 a;u8 gap[4];s32 b;u8 rest[0x1c6a];u16 flags;} State;
void func_80162ADC_ovl_11(void *arg0){
 s32 *base=(s32*)((u8*)&D_800C7650_ovl_01+0x18000);
 State *state=(State*)base;
 s32 score=*(s32*)((u8*)arg0+0x28c),x,y;u16 mode; s32 t;
 x=func_80032EA4_ovl_01(arg0,base[0x1aa8/4],base[0x1ab0/4],0x400);
 y=func_80032EA4_ovl_01(arg0,base[0x1aa8/4],base[0x1ab0/4],0x320);
 if(score<5000){t=score<3000;if((x<<16)==0){if((*(u16*)((u8*)arg0+0x1f0)&0x800)!=0)*(s32*)((u8*)arg0+4)=0x01010000;goto b1;}}else goto b1;
 goto b2;
b1:t=score<3000;
b2:if(!t || (y<<16)==0) goto b3;
 t=score<2000; mode=*(u16*)((u8*)base+0x1aa7a); if((mode&0x15)==0) goto b3;
 t=score<2000;if((*(u16*)((u8*)arg0+0x1f0)&0x800)==0)goto b3;
 t=score<2000;if(func_80033634_ovl_01()&1)goto b3;*(s32*)((u8*)arg0+4)=0x010c0000;
b3:if(!(score<2000) || (x<<16)==0 || (*(u16*)((u8*)arg0+0x1f0)&0x800)==0 || (*(u16*)((u8*)base+0x1aa7a)&0x17)==0 || (func_80033634_ovl_01()&1)==0)return;
 *(s32*)((u8*)arg0+4)=0x010c0000;
}
