extern s32 D_80012920; extern u8 D_80017700,D_80017710; extern s32 func_80006D30(void*,void*,s32); extern s32 func_8000CB60(void*,s32,s32); extern s32 func_8000C9E0(void*,void*,s32); extern s32 func_8000C620(void*,void*,s32); extern s32 D_80000308; extern s32 D_A0000000; extern s32 func_800072E0(void); extern s32 func_80007300(s32); extern u8 D_80017730;
void func_8000C7D4(void){s32 x;if(!D_80012920){D_80012920=1;func_80006D30(&D_80017710,&D_80017700,1);func_8000CB60(&D_80017710,0,0);}func_8000C9E0(&D_80017710,&x,1);}
s32 func_8000C940(s32 a0,s32*a1){if(!a1)func_8000C620((void*)&(u8[1]){0},(void*)&(u8[1]){0},0x3d);while(*(volatile u32*)0xa4600010&3){} *a1=*(volatile s32*)(D_80000308|a0|(s32)&D_A0000000);return 0;}
void func_8000CC90(s32 a0,s32 a1,s32 a2){s32 t;u32*p=(u32*)((u8*)&D_80017730+(a0<<3));t=func_800072E0();p[0]=a1;p[1]=a2;func_80007300(t);}
s32 func_8000CCF0(s32 a0){return a0;}
