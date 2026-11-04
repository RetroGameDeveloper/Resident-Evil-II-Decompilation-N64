void func_801664DC_ovl_12(void*p,s32 d,s32 lim){s16 old=*(s16*)((char*)p+0x1e0);u16 u=*(u16*)((char*)p+0x1e0);if(lim<old){s16 n=u-d;*(s16*)((char*)p+0x1e0)=n;if(n<lim)*(s16*)((char*)p+0x1e0)=lim;}}
extern unsigned char func_80166EA8_ovl_30[];void func_80166510_ovl_12(void*p,s16 x){s32 i;u8 v;if(x!=0)i=(x>0)*2;else i=1;v=func_80166EA8_ovl_30[0x50+i];if(((u8*)p)[0x1e8]!=v){u8 n=((u8*)p)[0x1ea];if(n<7){((u8*)p)[0x1e8]=v;((u8*)p)[0x1ea]=15;}}}
extern s32 func_8003420C_ovl_01(void*,s32);extern s32 D_800C7650_ovl_01;void func_801662F0_ovl_12(void*p){
int __repair_literal;
u8 *s=(u8*)p+0x2bd;u8 st=s[9];void *obj=*(void**)((char*)p+0x208);u8 t;if(st==1)goto advance;
__repair_literal = 2;
if(st>=__repair_literal)return;if(st!=0)return;s[9]=1;func_8003420C_ovl_01(obj,D_800C7650_ovl_01);((u8*)p)[0x207]=0x5a;advance:*(u16*)((char*)obj+4)+=8;*(u16*)((char*)obj+6)+=8;t=--((u8*)p)[0x207];if(t==0)s[9]=2;}
