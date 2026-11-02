extern s32 func_80033634_ovl_01(void); extern s32 func_8016232C_ovl_35(void*); extern s32 func_80089D34_ovl_01(void*,s32,s32,s32); extern u8 D_80166624_ovl_35[]; extern u8 D_8016662C_ovl_35[];
void func_801621A8_ovl_35(void*p,s32 a1,s32 a2){s32 v1; u8 *q=(u8*)p+0x2B4; s32 r;
if(*(u8*)((u8*)p+0x2B4)) v1=*(s32*)((u8*)p+0x290)&0x3fffffff; else v1=*(s32*)((u8*)p+0x28C);
if(v1>=0x2711){* (u8*)(q+0xA)=0; r=func_80033634_ovl_01()&7; *(u8*)((u8*)p+5)=D_80166624_ovl_35[r]; if(!(*(u8*)(q+9)&1))*(u8*)((u8*)p+5)=9; *(u8*)(q+0x13)=1; *(u8*)(q+0x12)=0;}
else if(v1>=0x1771 || *(u8*)(q+0x14)){*(u8*)(q+0xA)=1; r=func_80033634_ovl_01()&7; *(u8*)((u8*)p+5)=D_80166624_ovl_35[r]; if(!(*(u8*)(q+9)&1))*(u8*)((u8*)p+5)=9; *(u8*)(q+0x13)=1; *(u8*)(q+0x12)=0;}
else{*(u8*)((u8*)p+0x2BE)=2; *(u8*)((u8*)p+5)=4; if(*(u8*)(q+9)&1){r=func_80033634_ovl_01()&7; *(u8*)((u8*)p+5)=D_8016662C_ovl_35[r];} *(u8*)(q+0x13)=0; *(u8*)(q+0x12)=1;}
*(u16*)((u8*)p+6)=0; *(u16*)((u8*)p+0x64)=0; func_8016232C_ovl_35(p); func_80089D34_ovl_01(p,a1,a2,0x100);}
