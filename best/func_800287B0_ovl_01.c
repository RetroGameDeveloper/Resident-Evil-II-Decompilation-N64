typedef s32 M2C_UNK;
#define M2C_FIELD(e,t,o) (*(t)((s8*)(e)+(o)))
M2C_UNK func_800285AC_ovl_01(void*);
s32 func_800287B0_ovl_01(void*a,s32 b){
 s32 t,v,r;
 t=M2C_FIELD(a,s32*,0x10);
 if(t==0xC8){M2C_FIELD(M2C_FIELD(a,void**,0),M2C_UNK(**)(),0x10)();M2C_FIELD(M2C_FIELD(a,void**,0x174),M2C_UNK(**)(void*),0)(a);M2C_FIELD(M2C_FIELD(a,void**,0x14),M2C_UNK(**)(void*),8)(a);M2C_FIELD(a,s32*,0x10)=0xC9;}else if(t!=0xC9){M2C_FIELD(M2C_FIELD(a,void**,0),s32*,0x14)=0xE;M2C_FIELD(M2C_FIELD(a,void**,0),s32*,0x18)=M2C_FIELD(a,s32*,0x10);M2C_FIELD(M2C_FIELD(a,void**,0),M2C_UNK(**)(void*),0)(a);}
 r=M2C_FIELD(M2C_FIELD(a,void**,0x174),s32(**)(void*),4)(a);
 if(r==1)goto one;
 if(r<2){if(r) return r;func_800285AC_ovl_01(a);v=0xCA;goto set;}
 return r;
 one:
 if(M2C_FIELD(M2C_FIELD(a,void**,0x174),s32*,0x54)){M2C_FIELD(M2C_FIELD(a,void**,0),s32*,0x14)=0x33;M2C_FIELD(M2C_FIELD(a,void**,0),M2C_UNK(**)(void*),0)(a);}
 if(b){M2C_FIELD(M2C_FIELD(a,void**,0),s32*,0x14)=0x2B;M2C_FIELD(M2C_FIELD(a,void**,0),M2C_UNK(**)(void*),0)(a);}
 v=0xC8;
 set:M2C_FIELD(a,s32*,0x10)=v;return r;
}
