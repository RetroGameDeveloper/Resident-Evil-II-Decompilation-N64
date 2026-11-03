extern s32 func_80032EA4_ovl_01(void*,s32,s32,s32); extern s32 func_80033634_ovl_01(void); extern s32 func_80077D48_ovl_01(s32,void*); extern s32 func_80089D34_ovl_01(void*,s32,s32,s32); extern s32 D_800C7650_ovl_01;
void func_80162438_ovl_25(void*p,s32 x,s32 y){s32 dir; u16 r;
switch(*(u8*)((u8*)p+6)){
case 0:
 *(s32*)((u8*)p+0x1e8)=(((func_80033634_ovl_01()&1)+1)<<24)+0xf00;
 *(u8*)((u8*)p+6)=1;
 *(u16*)((u8*)p+0x1f4)=(func_80033634_ovl_01()&31)+60;
 if(func_80033634_ovl_01()&1){if(func_80033634_ovl_01()&1)dir=0;else dir=1;func_80077D48_ovl_01(dir,p);}
 /* fallthrough */
case 1:
 r=*(u16*)((u8*)p+0x66)+func_80032EA4_ovl_01(p,*(s32*)((u8*)&D_800C7650_ovl_01+0x19aa8),*(s32*)((u8*)&D_800C7650_ovl_01+0x19ab0),0x20);
 *(u16*)((u8*)p+0x66)=r;
 if((s16)r>*(s16*)((u8*)p+0x2b4)+0x180)*(u16*)((u8*)p+0x66)=*(s16*)((u8*)p+0x2b4)+0x180;
 if(*(s16*)((u8*)p+0x66)<*(s16*)((u8*)p+0x2b4)-0x180)*(u16*)((u8*)p+0x66)=*(s16*)((u8*)p+0x2b4)-0x180;
 func_80089D34_ovl_01(p,x,y,0x100);
 r=*(u16*)((u8*)p+0x1f4)-1;*(u16*)((u8*)p+0x1f4)=r;if((s16)r==-1)*(s32*)((u8*)p+4)=0x01050000;
 break;
default: break;
}}
