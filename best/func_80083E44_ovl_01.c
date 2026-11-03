
s32 func_8006BC70_ovl_01(s32);s32 func_8006BB3C_ovl_01(s32);s32 func_8002751C_ovl_01(s32,s32);s32 func_8004CE44_ovl_01(s32);s32 func_80075CCC_ovl_01(void);s32 func_80075CA8_ovl_01(void);s32 func_8004CA04_ovl_01(void);s32 func_8008459C_ovl_01(void);s32 func_8004CCD8_ovl_01(s32,s32);
extern s32 D_80012820;extern u8 D_800E91E1_ovl_01;extern u8 D_800C7650_ovl_01[];
void func_800260D0_ovl_01(void){*(u16*)(D_800C7650_ovl_01+0x1825c)=0;func_8006BC70_ovl_01(0);func_8006BB3C_ovl_01(0);func_8002751C_ovl_01(2,1);func_8004CE44_ovl_01(0);func_8004CE44_ovl_01(1);func_80075CCC_ovl_01();func_80075CA8_ovl_01();func_800278AC_ovl_01();D_800E91E1_ovl_01=0;func_8004CA04_ovl_01();func_8008459C_ovl_01();D_80012820=0;func_8004CCD8_ovl_01(0,1);}
void func_80083AF4_ovl_01(void){for(;;) { return; }}
extern u8 D_800C7650_ovl_01[];
void *func_80083D1C_ovl_01(s32 key){u8*ptr=*(u8**)(*(u8**)(D_800C7650_ovl_01+0x1827c)+0x28);if(ptr[2]!=key){do{ptr+=0x14;}while(ptr[2]!=key);}return ptr;}
struct A83E{s32 x;u8 pad[4];s32 z;}; struct B83E{s16 x;s16 y;u16 w;u16 h;};
s32 func_80083E44_ovl_01(struct A83E*a,struct B83E*b){s32 d=a->x-b->x;if(b->w<(u32)d)return 0;d=a->z-b->y;if(b->h<(u32)d)return 0;return 1;}
