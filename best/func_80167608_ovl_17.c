s32 func_80033634_ovl_01(void);s32 func_80031C44_ovl_01(void);extern u8 D_80167C90_ovl_17[];
void func_80167608_ovl_17(void *arg0,s32 arg1,s32 arg2){s32 count; s32 start; s32 *obj;  s32 rand;
s32 __repair_phase_rand; s32 i; u8 state;
state=*(u8*)((u8*)arg0+0x2D8);if(state==0xE)return;
rand=func_80036764_ovl_01_510_24(arg0,0,0x26,0);
start=(u32)arg1&0xFF;count = rand; count += start;
if(count<0x12){count=arg2-1;}else{count=0x11-rand;if((count&0xFF)==0)return;}
start=arg1&0xFFFF;if((count&0xFF)==0xFF)return;
do{obj=(s32*)func_80031C44_ovl_01();if(!obj)return;*(u16*)((u8*)obj+0x1AA)=start|(*(s16*)((u8*)arg0+0x1A8)!=0);*(s32*)((u8*)obj+0x28)=*(s32*)((u8*)arg0+0x28);*(s32*)((u8*)obj+0x2C)=*(s32*)((u8*)arg0+0x2C);*(s32*)((u8*)obj+0x30)=*(s32*)((u8*)arg0+0x30);if(*(u8*)((u8*)arg0+0x2BE)<2){rand=func_80033634_ovl_01()&255;*(s16*)((u8*)obj+0x66)=rand<<4;}else{__repair_phase_rand=func_80033634_ovl_01()&255;*(s16*)((u8*)obj+0x66)=(*(u8*)((u8*)arg0+0x2CC)<<10)-0x200+(__repair_phase_rand<<2);}count--;*(s32*)((u8*)obj+0x284)=1;for(i=0;i<8;i++)*(s32*)((u8*)obj+0x120+4*i)=*(s32*)(D_80167C90_ovl_17+0x60+4*i);}while((count&0xFF)!=0xFF);
}
