s32 func_80033634_ovl_01(void); s32 func_800377B0_ovl_01(s32,s32,s32,s16*); s32 func_80077D48_ovl_01(s32,void*); s32 func_80089D34_ovl_01(void*,s32,s32,s32); s32 func_80167890_ovl_11(void*); s32 func_80167A3C_ovl_11(void*); s32 func_80167C08_ovl_11(void*);
void func_80168FE0_ovl_11(void *arg0,s32 arg1,s32 arg2){s16 sp10=-0x1c2,sp12=0xfa,sp18,sp1a,sp1c;u8 temp_v1;u8 one=1; s32 temp;
temp_v1=*((u8*)arg0+6);switch(temp_v1){case 0:
temp=((func_80033634_ovl_01()&7)<<16)+0x06000300;*(s32*)((u8*)arg0+0x1e8)=temp;*((u8*)arg0+6)=one;sp18=0;sp1a=0;sp1c=0;func_800377B0_ovl_01(0x1770,0,*(s32*)((u8*)arg0+0x234)+0x38,&sp18);
if(*((u8*)arg0+0x2d5)==0){func_80077D48_ovl_01(12,arg0);*((u8*)arg0+0x2d5)=0x96;}
if(*((u8*)arg0+5)==10&& !(*(u16*)((u8*)arg0+0x1aa)&0x80)){func_80167890_ovl_11(arg0);*(u16*)((u8*)arg0+0x2b6)|=0x800;}
if(*((u8*)arg0+5)==11)func_80167A3C_ovl_11(arg0);
if(*((u8*)arg0+5)==14)func_80167C08_ovl_11(arg0);
if(*((u8*)arg0+5)==16){if(!(*(u16*)((u8*)arg0+0x1aa)&0x80)&&*((u8*)arg0+0x2d6)>=9){func_80167890_ovl_11(arg0);*(u16*)((u8*)arg0+0x2b6)|=0x800;}*((u8*)arg0+0x2d6)=*((u8*)arg0+0x2d6)+1;}
case 1: *((u8*)arg0+6)=*((u8*)arg0+6)+func_80089D34_ovl_01(arg0,arg1,arg2,0x400);return;
case 2:*(u16*)((u8*)arg0+0x1aa)=one;*(s32*)((u8*)arg0+4)=0x01000000;return;
}}
