s32 func_80033634_ovl_01(s32); s32 func_80089D34_ovl_01(void*,s32,s32,s32); s32 func_80166FBC_ovl_17(void*,s32,s32); extern u8 D_80167E68_ovl_17[];
void func_8016477C_ovl_17(void *p,s32 a1,s32 a2) { s32 x; u8 state; state=*(u8*)((u8*)p+6);
 switch(state) { case 0: {
 *(s32*)((u8*)p+0x1e8)=0x01000300; *(u8*)((u8*)p+6)=1;
 if(*(u8*)((u8*)p+0x2d8)!=1) func_80166FBC_ovl_17(p,0,0);
 } case 1: {
 s32 result=func_80089D34_ovl_01(p,a1,a2,0x400);
 *(u8*)((u8*)p+6)=(u8)(*(u8*)((u8*)p+6)+result); break; }
 case 2:
 if(*(u8*)((u8*)p+5)==1) *(s32*)((u8*)p+4)=0x01090000;
 else if((*(u8*)((u8*)p+0x26e)/3)==0) *(s32*)((u8*)p+4)=0x01090000;
 else *(s32*)((u8*)p+4)=0x01000000+(D_80167E68_ovl_17[func_80033634_ovl_01(1)&7]<<16);
 break; } }
