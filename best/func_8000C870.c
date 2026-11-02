extern s32 func_8000E800(s32); extern s32 D_80000308,D_A4600000;
s32 func_8000C870(s32 arg0,s32 arg1,s32 arg2,s32 arg3){u32 x;volatile u32 *st=(volatile u32*)0xA4600010;u32 v;
x=*st;if(x&3){do{x=*st;}while(x&3);}v=func_8000E800(arg2);D_A4600000=v;*(volatile u32*)0xA4600004=(D_80000308|arg1)&0x1FFFFFFF;
if(arg0==0)goto case0;if(arg0==1)goto case1;return -1;
case0:*(volatile u32*)0xA460000C=arg3-1;return 0;
case1:*(volatile u32*)0xA4600008=arg3-1;return 0;}
