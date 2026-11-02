extern s32 func_80032C08_ovl_01(void *,s32,s32);
extern void func_80077D48_ovl_01(s32,void *);
extern s32 func_80089D34_ovl_01(void *,s32,s32,s32);
extern void func_80167B9C_ovl_30(void *);
void func_801667B4_ovl_30(u8 *p,s32 a1,s32 a2) {
u8 st=p[6]; s32 one=1;
switch(st) {
case 0:
*(s32*)(p+0x1e8)=0xf00; p[6]=one; *(s16*)(p+0x1e2)=-0x2ee;
case 1:
func_80089D34_ovl_01(p,a1,a2,0x100);
if(*(s16*)(p+0x270)==3){p[6]=2;*(s32*)(p+0x1e8)=0xd000f00;}
break;
case 2:
func_80089D34_ovl_01(p,a1,a2,0x100);
if(*(s32*)*(s32**)(p+0x214)&0x10000){p[6]=3;p[0x207]=0;p[0x2bd]=one;func_80077D48_ovl_01(6,p);}
break;
case 3:
func_80032C08_ovl_01(p,0,0);
if(!*(s8*)(p+0x207)&&func_80089D34_ovl_01(p,a1,a2,0x100)){p[0x207]=one;*(s32*)p|=0x400;}
if(*(s32*)(p+0x2c)<-0x2328){p[5]=4;*(s16*)(p+6)=0;}
}
func_80167B9C_ovl_30(p);
}
