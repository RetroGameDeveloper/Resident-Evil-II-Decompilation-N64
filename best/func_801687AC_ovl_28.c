extern s32 func_80033634_ovl_01(void); extern s32 func_800662B8_ovl_01(void*,void*); extern u8 D_80168ECE_ovl_28,D_80168ECF_ovl_28;
void func_801687AC_ovl_28(void *arg0,void *arg1){
 u8 state=((u8*)arg0)[0x2BD]; u8 *s=(u8*)arg0; u8 *p=*(u8**)((u8*)arg1+0x120); s32 v;
 if(state==0){u16 x=*(u16*)(p+0x10)+0x400;*(u16*)(p+0x10)=x;
  if((s16)x>=0x1001){*(u16*)(p+0x10)=0x1000;s[0x2BD]=1;*(u16*)(s+0x2BE)=0;v=func_80033634_ovl_01();D_80168ECF_ovl_28=14-((v&255)%28);D_80168ECE_ovl_28=14-((func_80033634_ovl_01()&255)%28);}
 } else if(state==1){u16 d=*(u16*)(s+0x2BE);*(u16*)(p+0x10)-=d;*(u16*)(s+0x2BE)=d+100;if((s16)*(u16*)(p+0x10)<0){*(u16*)(p+0x10)=0;s[0x2BC]=s[0x2BD]=D_80168ECF_ovl_28=D_80168ECE_ovl_28=0;}}
 func_800662B8_ovl_01(arg0,arg1);
}
