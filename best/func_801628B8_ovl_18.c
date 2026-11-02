extern void func_80089D34_ovl_01(); extern void func_8003420C_ovl_01(); extern void func_80077D48_ovl_01(); extern void func_80162B1C_ovl_18(); extern void func_80031C44_ovl_01(); typedef struct O{u8 p[0x2c0];}O;
void func_80161F28_ovl_18(void){func_80089D34_ovl_01(0,0,0,0x400);}
void func_80162804_ovl_18(O*p){u8 v=p->p[6];if(v==1){}else if(v<2){if(v==0)p->p[6]=1;}}
void func_801628B8_ovl_18(O*p){if(p->p[6]==0){p->p[6]=1;if(p->p[0x2be]==0)func_8003420C_ovl_01(*(s32*)(p->p+0x208),0xbf10bf00);else *(s32*)p->p|=0x400;func_80077D48_ovl_01(7,p);func_80162B1C_ovl_18(p,0,((u8*)0x80162cd4)[p->p[5]]);}else func_80031C44_ovl_01(p);}
void func_80162950_ovl_18(O*p){s32 v;*(s32*)p->p|=2;*(s32*)(p->p+0x2c)+=0x1e;*(u16*)(p->p+0x66)+=0x20;*(u16*)(p->p+0x68)+=0x40;func_80089D34_ovl_01(0,0,0,0x400);v=*(s32*)(p->p+0x2c);if(v>=*(s16*)(p->p+0x25e)||v<*(s16*)(p->p+0x1a8))func_80031C44_ovl_01(p);}
