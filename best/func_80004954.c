extern s32 *func_80001180(s32); extern s32 func_800888CC_ovl_01(s32,s32*,s32); extern s32 *func_8008AF60_ovl_01(s32);
extern s32 *D_80012860; extern s32 D_80012864,D_80012868; extern s32 *D_8001286C; extern s32 D_80012870; extern s32 *D_80012874; extern s32 D_800128A8; extern u8 D_800C7650_ovl_01[];
void func_80004954(void){s32 buf[0x40];s32 *p; s32 n,size,a;
p=func_80001180(0x43);a=*p;D_800128A8=a;func_800888CC_ovl_01(a,buf,0x28);n=buf[0];size=(n<<3)+0x28;D_80012868=n;D_80012864=size;p=func_8008AF60_ovl_01(size);D_80012860=p;func_800888CC_ovl_01(D_800128A8,p,size);D_80012870=0;D_80012874=(s32*)((u8*)p+0x28);D_8001286C=(s32*)((u8*)p+8);*(s32*)(D_800C7650_ovl_01+0x19A5C)&=~0x20;}
