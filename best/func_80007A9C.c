/* identical to __osLeoAbnormalResume in V-RALLY-PAL (matched), with its names changed by decompdecomp */
extern s32 D_800A1CD0; extern u8 D_8000EF7C[]; extern void func_80007B6C(void);
void func_80007A9C(void){void *reg;u32 x;u32 *p=(u32*)(*(u8 **)(D_8000EF7C+0x72A8)+0x14);x=*(volatile u32*)0xA4600010;if(x&3)do{x=*(volatile u32*)0xA4600010;}while(x&3);reg=(void*)0xA5000510;*(volatile u32*)reg=p[4]|0x10000000;x=*(volatile u32*)0xA4600010;if(x&3)do{x=*(volatile u32*)0xA4600010;}while(x&3);x=p[4];*(volatile u32*)0xA5000510=x;func_80007B6C();*(volatile u32*)0xA4600010=2;D_800A1CD0|=0x100401;}
