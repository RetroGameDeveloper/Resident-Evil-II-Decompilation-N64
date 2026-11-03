typedef struct ObjD360 { void **v0; void (**v1)(void *); u8 pad8[0x10]; s32 x18; s32 x1c; s32 count; s32 x24; s32 x28; s32 x2c; s32 x30; u8 pad34[0x10]; s32 x44; u8 pad48[0x10]; s32 width; s32 height; s32 x64; s32 x68; s32 x6c; u8 pad70[0x40]; s32 min; s32 max; s32 mode; s32 last; } ObjD360;
typedef struct ItemD360 { s32 a; s32 b; s32 c; u8 padC[0x18]; s32 d; s32 e; u8 pad28[8]; s32 f; u8 pad34[0x1C]; s32 g; } ItemD360;
extern s32 func_80030ED0_ovl_01(s32,s32);
extern s32 func_8002D290_ovl_01(ObjD360 *);
extern s32 jtbl_800B6E60_ovl_01[];
void func_8002D360_ovl_01(ObjD360 *p) {
 s32 i=0, *it, min=1, max=1, mode, tmp, t3,t2,t0,t1,a3,a1;
 ItemD360 *arr=(ItemD360 *)((u8 *)p+0xB0);
 p->min=1; p->max=1;
 if(p->count>0) { it=(s32 *)((u8 *)arr+0xC); do {
 if (((it[-1]-1U)>=4) || it[0]<=0 || it[0]>=5) { p->v0[0]=0; p->v1[0](p); }
 if(it[-1]<min) min=it[-1]; if(it[0]<max) max=it[0]; i++; it+=20;
 } while(i<p->count); }
 p->min=min; p->max=max;
 if ((u32)p->x30 >= (u32)(p->x2c*8)) { p->width=func_80030ED0_ovl_01(p->width,8); p->height=func_80030ED0_ovl_01(p->height,8); mode=1; }
 else if ((u32)p->x30 >= (u32)(p->x2c*4)) { p->width=func_80030ED0_ovl_01(p->width,4); p->height=func_80030ED0_ovl_01(p->height,4); mode=2; }
 else if ((u32)p->x30 >= (u32)(p->x2c*2)) { p->width=func_80030ED0_ovl_01(p->width,2); p->height=func_80030ED0_ovl_01(p->height,2); mode=4; } else { mode=8; }
 p->mode=mode; i=0; it=(s32 *)((u8 *)arr+0x24);
 while(i<p->count) { a3=mode; if(mode<8) { t3=it[-7]; t0=p->min; if(t3*mode>=2*t0*mode) goto assign; t2=it[-6]; t1=p->max; if(t2*mode>=2*t1*mode) goto assign; a1=a3; mode*=2; if(mode>=8 || t3*mode>=2*t0*a1 || t2*mode>=2*t1*mode) {mode=a3;goto assign;} a3=mode; } assign: it[0]=a3; i++; it+=20; mode=p->mode; }
 mode=p->x28; if((u32)(mode-1)<5) mode=jtbl_800B6E60_ovl_01[mode-1]; else mode=p->count; p->x64=mode; p->x68=p->x44?1:p->x64;
 tmp=func_8002D290_ovl_01(p); p->x6c=tmp?p->max:1;
 if(p->count>0) { i=0; it=(s32 *)((u8 *)arr+0x30); do { it[-5]=func_80030ED0_ovl_01(p->width*it[-10],p->min*8); it[-4]=func_80030ED0_ovl_01(p->height*it[-9],p->max*8); it[-2]=func_80030ED0_ovl_01(p->width*it[-10]*it[-3],p->min*8); it[-1]=func_80030ED0_ovl_01(p->height*it[-9]*it[-3],p->max*8); it[0]=1; i++; it+=20; } while(i<p->count); } p->last=func_80030ED0_ovl_01(p->height,p->max*8);
}
