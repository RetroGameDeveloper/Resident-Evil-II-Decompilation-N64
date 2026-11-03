typedef struct { s8 b[8]; } S8x;
extern s32 func_80033634_ovl_01(void);
extern s32 func_80032D44_ovl_01(s32,s32,s32,s32);
extern void func_800377B0_ovl_01(s32,s32,s32,s32);
extern void func_80077D48_ovl_01(s32,void*);
extern s32 func_80089D34_ovl_01(void*,s32,s32,s32);
extern void func_80032B8C_ovl_01(void*,s32);
extern void func_80032DEC_ovl_01(void*,s32,s32,s32);
extern s32 func_80032EA4_ovl_01(void*,s32,s32,s32);
extern u8 D_8016DD9C_ovl_11[];
extern volatile u8 D_800C7650_ovl_01[];
void func_801695CC_ovl_11(void *arg0, s32 arg1, s32 arg2) {
 u8 *p=arg0; S8x tab8; s32 state; s32 r; s32 x; s32 y; s32 t; s16 v[3]; s32 *q; volatile u8 *base=D_800C7650_ovl_01;
 tab8=*(S8x*)D_8016DD9C_ovl_11; state=p[6];
 if(state==1) goto common;
 if(state>=2) { if(state==2) goto special; goto out; }
 if(state==0) {
   r=func_80033634_ovl_01(); x=r&7; r=(u8)tab8.b[x];
   *(s32*)(p+0x1e8)=(r<<24)+0x700;
   r=func_80032D44_ovl_01(*(s16*)(p+0x2a),*(s16*)(p+0x32),*(s16*)(base+0x18000+0x1aaa),*(s16*)(base+0x18000+0x1ab2));
   *(s16*)(p+0x1f4)=r;
   x=p[0x26e]; y=(x*0xaaaaaaabULL>>32)>>1; x-=y*3;
   if(x) { q=*(s32**)(p+0x234); t=0x100; v[0]=t-2*(func_80033634_ovl_01()&255); v[1]=0x138-4*(func_80033634_ovl_01()&255); v[2]=t-2*(func_80033634_ovl_01()&255); r=func_80033634_ovl_01(); x=(r&1)<<16; y=0x1b58+((func_80033634_ovl_01()&255)<<3); func_800377B0_ovl_01(x|y,*(s16*)(p+0x1f4),(s32)q+0x38,(s32)v);
   } else { q=*(s32**)(p+0x234); t=0x7f; v[0]=t-(func_80033634_ovl_01()&255); v[1]=0x39f-(func_80033634_ovl_01()&255); v[2]=t-(func_80033634_ovl_01()&255); r=func_80033634_ovl_01(); x=(r&1)<<16; y=0x17d0+((func_80033634_ovl_01()&255)<<3); func_800377B0_ovl_01(x|y,*(s16*)(p+0x1f4),(s32)q+0x1b0,(s32)v); }
   if(!p[0x2d5]) { func_80077D48_ovl_01(12,p); p[0x2d5]=0x96; }
   r=func_80032D44_ovl_01(*(s16*)(p+0x2a),*(s16*)(p+0x32),*(s16*)(base+0x19aaa),*(s16*)(base+0x19ab2)); *(s16*)(p+0x1f4)=r;
   r=func_80033634_ovl_01(); *(s16*)(p+0x1e0)=(r&63)+20; r=func_80033634_ovl_01(); *(s16*)(p+0x1e4)=64-(r&127);
   func_80032B8C_ovl_01(p,*(s16*)(p+0x1f4)-*(s16*)(p+0x66)+0x800); r=func_80033634_ovl_01(); *(s16*)(p+0x66)=*(u16*)(p+0x66)-((r&127)-64); func_80032DEC_ovl_01(p,*(s32*)(base+0x19aa8),*(s32*)(base+0x19ab0),16);
 }
 goto common;
 special:
 *(s32*)(p+4)=func_80033634_ovl_01(); if(func_80033634_ovl_01()&1) *(s32*)(p+4)=0x1020000;
 r=func_80032EA4_ovl_01(p,*(s32*)(base+0x19aa8),*(s32*)(base+0x19ab0),0x200);
 if(!r && *(u32*)(p+0x28c)<0x1388 && !(*(u8*)(base+0x19cef)&0x80) && !(func_80033634_ovl_01()&7)) *(s32*)(p+4)=0x10b0000;
 common: r=func_80089D34_ovl_01(p,arg1,arg2,0x200); p[6]+=r;
 out: ;
}
