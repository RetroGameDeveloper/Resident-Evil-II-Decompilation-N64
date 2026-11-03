
extern s32 D_801314F0_ovl_01[];
void func_80082D40_ovl_01(s32*a,s32*b){s32 *p=(s32*)((u8*)D_801314F0_ovl_01-0x80);a[0]=p[32];a[1]=p[33];a[2]=p[34];b[0]=p[35];b[1]=p[36];b[2]=p[37];}
s32 func_80082230_ovl_01(void *,s32,s32); s32 func_80040E88_ovl_01(void *,void *); s32 func_8004279C_ovl_01(void *,s32,s32); s32 func_80040D24_ovl_01(s32,void *);
void func_80083800_ovl_01(s16 a,s32 b,s32 c){s32 x[8];s16 y; s32 z[2];func_80082230_ovl_01(x,0,8);y=a;func_80040E88_ovl_01(x,z);func_8004279C_ovl_01(z,b,c);}
void func_8008386C_ovl_01(s16 a,s32 b,s32 c,s32 d){s32 x[8];s16 y;s32 z[2];func_80082230_ovl_01(x,0,8);y=a;func_80040E88_ovl_01(x,z);func_80040D24_ovl_01(b,z);func_8004279C_ovl_01(z,c,d);}
void func_80083A7C_ovl_01(void *arg){u16 sp10,sp14=0;u16 x=*(u16*)((u8*)arg+0x12c);s32 v=x;v=(v*3<<4)-v;v=(v<<2)-x;sp10=v>>7;func_80083800_ovl_01(*(s16*)((u8*)arg+0x66), (s32)&sp10,(s32)&sp14);*(u16*)((u8*)arg+0x1f8)=*(u16*)((u8*)arg+0x2a)+sp10;*(u16*)((u8*)arg+0x1fc)=*(u16*)((u8*)arg+0x32)+sp14;}
