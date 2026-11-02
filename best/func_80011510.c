s32 func_800115B0(void){return (s32)(*(volatile s32*)0xA450000C)<0;}
s32 func_8000E800(s32);s32 func_800115B0(void);extern u8 D_80013890;extern s32 D_A4500000;
s32 func_80011510(s32 a0,s32 a1){s32 s0=a0,s1=a1; s32 ret;if(D_80013890)s0-=0x2000;if(!((a0+s1)&0x1fff))D_80013890=1;else D_80013890=0;if(func_800115B0())ret=-1;else{D_A4500000=func_8000E800(s0);*(volatile s32*)0xA4500004=s1;ret=0;}return ret;}
s32 func_800072E0(void);s32 func_80007300(s32);s32 func_80000DD4(void*,s32);extern s32 D_80012948;extern s32 *D_80012950;
void func_80011390(void){s32 temp=func_800072E0();*(s16*)((u8*)D_80012950+0x10)=2;func_80000DD4(&D_80012948,2);func_80007300(temp);}
void *func_80010500(void *arg0,s32 a1,s32 a2){s32 q=a1/a2; s32 r=a1-a2*q;if(q<0&&r>0){q++;r-=a2;}((s32*)arg0)[0]=q;((s32*)arg0)[1]=r;return arg0;}
