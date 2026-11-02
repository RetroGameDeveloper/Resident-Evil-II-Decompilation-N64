extern s32 D_80016224,D_800128D0; extern void func_80007B6C(s32,s32,s32);
void func_80007A9C(void){s32 *p=(s32*)(D_80016224+20);u32 x;volatile u32 *status=(volatile u32*)0xA4600010;volatile u32 *dma=(volatile u32*)0xA5000510;
x=*status;if(x&3){do{x=*status;}while(x&3);}*dma=p[4]|0x10000000;
x=*status;if(x&3){do{x=*status;}while(x&3);}*dma=p[4];func_80007B6C((s32)status,(s32)dma,(s32)p);*status=2;D_800128D0|=0x100401;}
