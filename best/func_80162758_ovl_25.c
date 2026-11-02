s32 func_800331E8_ovl_01();s32 func_80033634_ovl_01();s32 func_80052C00_ovl_01();s32 func_80052C9C_ovl_01();s32 func_80052D40_ovl_01();s32 func_80077D48_ovl_01();s32 func_80089D34_ovl_01();extern u8 D_800C7650_ovl_01[];extern s32 D_800E10D4_ovl_01;extern u8 D_80162FA0_ovl_25[];
void func_80162758_ovl_25(void *a,s32 a1,s32 a2){u8 state=*(u8*)((u8*)a+6);s32 mode,local;u8 *base,*entry;u16 ticks;
switch(state){
case 0:
*(u8*)((u8*)a+6)=1;*(s32*)((u8*)a+0x1e8)=0x05000f00;base=D_800C7650_ovl_01+0x18000;entry=D_80162FA0_ovl_25+((*(u16*)((u8*)a+0x1aa)&1)*7);entry=(u8*)(*(s32*)((u8*)a+0x234))+entry[2]*0x178;*(s32*)(base+0x1aa8)=*(s32*)(entry+0x4c);*(void**)(base+0x1cd0)=a;*(s32*)(base+0x1ab0)=*(s32*)(entry+0x54);*(s32*)(base+0x1ca4)=*(s32*)((u8*)a+0x224);local=*(s32*)((u8*)a+0x228);D_800E10D4_ovl_01=0x05000000;*(s32*)(base+0x1ca8)=local;func_80052C00_ovl_01(4,0,local);func_80052C9C_ovl_01(4,0xfa,0);func_80052D40_ovl_01(0x64,0x32,0x96,0);*(u16*)((u8*)a+0x1f6)=0x96;break;
case 1:
if(*(u8*)((u8*)a+0x1e9)==0){func_80052C00_ovl_01(2,0);func_80052C9C_ovl_01(1,0xb4,0);func_80052C9C_ovl_01(2,0xfa,1);mode=7;if(func_80033634_ovl_01()&1)mode=5;func_80077D48_ovl_01(mode,a);}func_80089D34_ovl_01(a,a1,a2,0x100);ticks=*(u16*)((u8*)a+0x1f6);ticks-=func_800331E8_ovl_01()*2+1;*(u16*)((u8*)a+0x1f6)=ticks;if((s16)ticks<0){*(u8*)((u8*)a+6)=2;*(u8*)(D_800C7650_ovl_01+0x18000+0x1a86)=2;}break;
case 2:*(u16*)(D_800C7650_ovl_01+0x18000+0x1a78)=0x78;*(s32*)((u8*)a+4)=0x01050000;break;
}}
