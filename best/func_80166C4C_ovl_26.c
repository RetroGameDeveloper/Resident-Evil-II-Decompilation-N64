extern s32 func_80040E88_ovl_01(void*,void*); extern s32 func_80052C00_ovl_01(s32,s32,s32,s32); extern s32 func_80052C9C_ovl_01(s32,s32,s32);
s32 func_80166984_ovl_26(void *a){s16 x=*(s16*)((u8*)a+0x1f2);if(*(s16*)((u8*)a+0x2c4)<x&&x>=0&&*(u8*)((u8*)a+0x2b8)==0){*(u8*)((u8*)a+5)=7;*(u16*)((u8*)a+6)=0;return 1;}return 0;}
void func_801668F8_ovl_26(void*a){if(*(u8*)((u8*)a+0x2b8)){u8*p=*(u8**)((u8*)a+0x234);u16 s=*(u16*)((u8*)a+0x2ba);s16 n=-s;*(s16*)(p+0x1084)=n;func_80040E88_ovl_01(p+0x1080,p+0x1030);p+=0x11a0;*(s16*)(p+0x5a)=s;s*=2;*(s16*)(p+0x5c)=s;func_80040E88_ovl_01(p+0x58,p+8);p+=0x178;*(s16*)(p+0x5a)=n;*(s16*)(p+0x5c)=s;func_80040E88_ovl_01(p+0x58,p+8);}}
void func_80166888_ovl_26(void*a,s32 b){u8 *p=a;u8 c=p[0x26f]|0x80;p[4]=2;p[5]=b+2;p[6]=0;p[7]=0;p[0x26f]=c;func_80052C00_ovl_01(3,0,0,0);func_80052C9C_ovl_01(8,0xc8,0);}
s32 func_80166C4C_ovl_26(void*a,s32 b){u8*p=(u8*)a+0x2c2;u8 x=p[0xe];if((x>>b)&1){p[0xd]=0xc2;p[0xf]=b;p[0xe]=x&~(1<<b);return 0;}return 1;}
