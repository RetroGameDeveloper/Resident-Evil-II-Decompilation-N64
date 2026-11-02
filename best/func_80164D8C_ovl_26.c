extern u8 *D_80167244_ovl_26;
extern u8 *D_80167270_ovl_26;
extern u8 D_800E8C80_ovl_01[];
void func_80089D34_ovl_01(s32);
s32 func_800837DC_ovl_01(u8 *, s32);
void func_801669C4_ovl_26(void *);
void func_80166504_ovl_26(void *);
void func_801668F8_ovl_26(void *);
void func_800342B0_ovl_01(void *, s32);
void func_801639A4_ovl_26(void *arg) {
    u8 *p=(u8*)arg; void (*fn)(void)=*(void (**)(void))(&D_80167244_ovl_26[p[6]*4]);
    fn(); p[0x2D6]=1; p[0x2D7]=1;
}
void func_80164C18_ovl_26(void *arg) {
    u8 *p=(u8*)arg; u8 flag=p[7];
    if (flag == 0) {
        p[7]=1; *(u32 *)(p+0x1E8)=0x0C000000; p[0x25C]|=2;
        func_80089D34_ovl_01(0x10040); p[0x2C1]=8; p[0x2C3]=3;
    }
    if (func_800837DC_ovl_01(D_800E8C80_ovl_01,0x5F)!=0) *(u16 *)(p+6)=0x100;
}
void func_801625F8_ovl_26(void *arg) {
    u8 *p=(u8*)arg;
    if (*(u16 *)(p+0x2D4)==0x8000) {
        if (p[0x2D9]!=0) *(u32 *)(p+4)=0x07000000;
        else *(u32 *)(p+4)=0x030A0000;
    }
}
void func_80164D8C_ovl_26(void *arg) {
    u8 *p=(u8*)arg; void (*fn)(void)=*(void (**)(void))(&D_80167270_ovl_26[(p[5]-1)*4]);
    fn(); func_801669C4_ovl_26(arg); func_80166504_ovl_26(arg);
    func_800342B0_ovl_01(arg,(s16)(*(u16 *)(p+0x66)+(p[0x2CD]<<11)));
    func_801668F8_ovl_26(arg);
}
