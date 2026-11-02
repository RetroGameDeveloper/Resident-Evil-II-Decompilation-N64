extern s32 func_80162FCC_ovl_35(void*,s32,s32); extern s32 func_8016232C_ovl_35(void*); extern s32 func_80089D34_ovl_01(void*,s32,s32,s32); extern s32 func_80033678_ovl_01(void*);
void func_801630B8_ovl_35(void*p,s32 a1,s32 a2){s32 var_s1; u16 temp; u8 v; void*q=(u8*)p+0x2B4; s32 saved_s5=1;
if(*(u8*)((u8*)p+0x2B4)!=0) var_s1=*(s32*)((u8*)p+0x290)&0x3fffffff; else var_s1=*(s32*)((u8*)p+0x28C);
if(*(u8*)((u8*)p+6)==0){*(u8*)((u8*)p+6)=1; *(s32*)((u8*)p+0x1E8)=0x02000F00; *(s16*)((u8*)p+0x1E0)=0x32; *(s16*)((u8*)p+0x1F4)=var_s1/100; *(u8*)((u8*)q+0xB)=0x10; *(s16*)((u8*)p+0x1E4)=0; *(s16*)((u8*)p+0x1E2)=0; *(s16*)((u8*)p+0x64)=0;}
func_80162FCC_ovl_35(p,a1,a2); temp=*(u16*)((u8*)p+0x1F4)-1; *(u16*)((u8*)p+0x1F4)=temp;
if((s16)temp==0 || saved_s5==0){*(u8*)((u8*)p+5)=11; v=*(u8*)((u8*)q+0xA); if(v==0){if(var_s1>=0x2711)*(u8*)((u8*)p+5)=1;} else if(v==1){if(var_s1<0x1771){*(u8*)((u8*)q+0x13)=0;*(u8*)((u8*)q+0x12)=v;}else *(u8*)((u8*)p+5)=v;} *(u8*)((u8*)q+0xA)=*(u8*)((u8*)q+0xA)+1;*(u16*)((u8*)p+6)=0;}
func_8016232C_ovl_35(p); func_80089D34_ovl_01(p,a1,a2,0x100); func_80033678_ovl_01(p);
}
