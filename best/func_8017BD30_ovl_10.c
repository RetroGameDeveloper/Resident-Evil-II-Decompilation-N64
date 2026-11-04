
extern unsigned char func_8017E29C_ovl_04[];
void func_8017B690_ovl_10(void) {
 unsigned char *p=func_8017E29C_ovl_04+0x3e4; u16 v=*(u16*)(p+0x38)-1; *(u16*)(p+0x38)=v; if((s16)v<0) ++*(u16*)(p+2);
}
extern unsigned char D_800C7650_ovl_01[];
extern void func_8017BDEC_ovl_10(void); extern void func_8017C0E8_ovl_10(void); extern void func_8017C1B4_ovl_10(void); extern void func_8017C5E4_ovl_10(void);
void func_8017BD30_ovl_10(void) {
 unsigned char *base=func_8017E29C_ovl_04+0x3e4;
 unsigned char *table=D_800C7650_ovl_01+0x18000;
 unsigned char *a1; unsigned char *a0;
 *(s32*)(base+0x28)=3000; *(s16*)(base+4)=0; *(s32*)(base+0x30)=0; *(s16*)base=8; *(s16*)(base+0x36)=1; *(s16*)(base+0x2e)=16;
 *(u16*)(base+0x2c)=*(u16*)(table+0x1ae6); a1=*(unsigned char**)(table+0x1cb4)+0x38; *(void**)(base+0x3c)=func_8017E29C_ovl_04+0x214;
 a0=base+8; *(s32*)(a0+8)=*(s32*)(a1+0x18)-1000; *(s32*)(a0+0x10)=*(s32*)(a1+0x14); *(s32*)(a0+0x18)=*(s32*)(a1+0x1c); *(s32*)(a0+0x14)=*(s32*)(a1+0x18)-300;
 func_8017C1B4_ovl_10(); func_8017BDEC_ovl_10(); func_8017C0E8_ovl_10(); func_8017C5E4_ovl_10();
}
void func_8017C1B4_ovl_10(void) {
 unsigned char *p=func_8017E29C_ovl_04+0x424; s32 i;
 for(i=0;i<4;i++){*(s16*)(p+i*8+4)=0;*(s16*)(p+i*8+6)=0;}
 *(void**)(D_800C7650_ovl_01+0x18000+0x290)=p;
}
extern void func_8017E18C_ovl_10(s32);
void func_8017C208_ovl_10(void) {
 unsigned char *p=func_8017E29C_ovl_04+0x3e4; u16 count;
 if(p[0x35]==0){func_8017E18C_ovl_10(0xc68);p[0x35]=1;}
 func_8017C5E4_ovl_10(); count=*(u16*)(p+4)+1;*(u16*)(p+4)=count;
 if(*(u16*)(*(unsigned char**)(p+0x3c)+0x14)<(s16)count){*(s32*)(p+0x30)=0;*(s16*)(p+0x2e)=0;*(s16*)p=0;*(u16*)(p+4)=0;++*(u16*)(p+2);}
}
