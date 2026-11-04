extern s32 func_80032C08_ovl_01(void *,s32,s32);
extern s32 func_80032DEC_ovl_01(void *,s16,s16,s32);
extern s32 func_80032EA4_ovl_01(void *,s16,s16,s32);
extern s32 func_80033634_ovl_01();
extern s32 func_80089D34_ovl_01(void *,s32,s32,s32);
extern s32 func_80165BE8_ovl_13(void *,s32);
extern s32 func_80166158_ovl_13(void *,s32);
void func_80163488_ovl_13(u8 *p,s32 a1,s32 a2){
s32 var_s1; s8 t0,t1; u8 t2; u8 *s; s32 dummy[2];
t2=p[6]; if(t2){s=p+0x2b4;if(t2!=1)return;goto block;}
if(!(func_80033634_ovl_01()&7))func_80166158_ovl_13(p,1);
*(s32*)(p+0x1e8)=0x4000700;p[0x2b5]=func_80033634_ovl_01()&0x3f;p[0x2b6]=0;p[0x2b9]=0;*(s16*)(p+0x1e2)=0;p[6]=1;s=p+0x2b4;
block:
t0=p[0x2b6]-1;*(s8*)(s+2)=t0;if(((u8)t0)==255)p[0x2b6]=14;
var_s1=0;func_80032DEC_ovl_01(p,*(s16*)(p+0x260),*(s16*)(p+0x262),0x60);
*(u16*)(p+0x66)+=(s8)p[0x2b4];func_80032C08_ovl_01(p,0,0);
func_80089D34_ovl_01(p,a1,a2,0x200);
if(func_80032EA4_ovl_01(p,*(s16*)(p+0x260),*(s16*)(p+0x262),0x60)==0)var_s1=1;
else {t1=p[0x2b5]-1;*(s8*)(s+1)=t1;if(((u8)t1)==255)var_s1=1;}
if(var_s1)func_80165BE8_ovl_13(p,4);
}
