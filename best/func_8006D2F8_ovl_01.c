typedef struct {u8 pad0[0x174]; s32 **p174;} F285; void func_80028540_ovl_01(void*arg0,s32 arg1,s32 arg2){u32 idx; s32 *p;if(arg1==0xfe){p=*(s32**)((u8*)arg0+0x174);p[3]=arg2;return;}idx=arg1-0xe0;if(idx<0x10){p=*(s32**)((u8*)arg0+0x174);*(s32*)((u8*)p+idx*4+0x10)=arg2;return;}p=*(s32**)arg0;p[5]=0x3c;p[6]=arg1;((void(*)(void))*(u32*)p)();}
extern u8 D_800C7650_ovl_01[];
void func_8006D2F8_ovl_01(void){u8 *base=D_800C7650_ovl_01;u8 *p=base+0x1a248;s32 i;*(s32*)(base+0x184a0)=0;*(s32*)(base+0x184a4)=0;for(i=0x20;i!=0;i--){*(s32*)p=0;p[0x1e1]=0;p+=0x368;}i=*(u8*)(base+0x1827e);while(i)i--;}
extern u8 D_800C7650_ovl_01[];extern u8 D_80114EDA_ovl_01;
void func_8006D364_ovl_01(void){u8*b=D_800C7650_ovl_01;*(s16*)(b+0x215c8)=-1;*(s16*)(b+0x215ca)=-1;*(s16*)(b+0x215cc)=-1;*(s16*)(b+0x215ce)=-1;*(s32*)(b+0x21654)=0;*(s32*)(b+0x19a64)=0;*(s32*)(b+0x19a68)=0;*(s32*)(b+0x19a6c)=0;*(s32*)(b+0x19a70)=0;D_80114EDA_ovl_01=0;}
extern s32 D_800DFB00_ovl_01;extern u8 D_800C7650_ovl_01[];void func_8006D5D8_ovl_01(void){s32*p=&D_800DFB00_ovl_01;s32 i;for(i=0x20;i;i--)*p++=0;D_800C7650_ovl_01[0x20f54]=0;}
