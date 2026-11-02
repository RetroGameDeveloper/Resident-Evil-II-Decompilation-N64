extern u32 D_80162FD0_ovl_25[],D_80163058_ovl_25[];
extern u8 D_80162FA0_ovl_25[],D_800E10F8_ovl_01[],D_800C7650_ovl_01[];
void func_80089D34_ovl_01(void*,s32); s32 func_80162FA0_ovl_21(void*,void*,void*,s32);
void func_80162004_ovl_25(void*a){u32 i=(*(u16*)((u8*)a+0x1aa)&1);u32 *t=D_80162FD0_ovl_25;((void(*)(void))(*(volatile u32*)((u8*)t+i*4)))();}
void func_801623B8_ovl_25(void*a){u8*p=a;u8*tab=D_80162FA0_ovl_25;u8*base=D_800E10F8_ovl_01;u32 row=(*(u16*)(p+0x1aa)&1)*7;u8 n=tab[row*4+2];u32 size=n*0x178;u32 ret=func_80162FA0_ovl_21(a,*(void**)(p+0x234),base+size+0x4c,0x384);if(ret==0)*(u32*)(p+4)=0x01030000;}
void func_80162A70_ovl_25(void*a){u8*p=a;u8 state=p[6];if(state==1){func_80089D34_ovl_01(a,0x100);if((*(u8*)(D_800C7650_ovl_01+0x19cef)&0x80)==0)p[6]=2;}else if(state==2){*(u32*)(p+4)=0x01010000;}else if(state==0){*(u32*)(p+0x1e8)=0x05000f00;p[6]=1;}}
void func_80162B24_ovl_25(void*a){u8 i=*((u8*)a+0x26e);u32*t=D_80163058_ovl_25;((void(*)(void))(*(volatile u32*)((u8*)t+(i<<2))))();}
