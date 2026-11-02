typedef struct {s32 pad0; s32 z[16]; void *p170; s32 z2[3]; void *p180;} A; typedef struct {s32 x[7];} B; typedef void (*F)(void);
void func_8002E600(A *a,s32 flag){B *s=a->p170;if(flag){*(s32*)((char*)*(void**)a+0x14)=4;((F)*(void**)a)();}else if(a->z[16]) s->x[1]=0x8002E670;else s->x[1]=((s32*)a->p180)[1];s->x[6]=0;s->x[5]=0;}
void func_8002E670(void *arg0, s32 arg3, s32 arg4, s32 *arg5, s32 arg6){s32 sp20; s32 *s=(s32*)((char*)arg0+0x170); s32 n=*arg5; s32 lim=s[4]; s32 t=arg6-n; if(lim<t)t=lim; sp20=0; ((void(*)(void*,s32,s32,s32*,s32,s32))*(s32*)((char*)arg0+0x184))(arg0,arg3,s[3],&sp20,t,0); ((void(*)(void*,s32,s32,s32))*(s32*)((char*)arg0+0x18C))(arg0,s[3],arg4+n*4,sp20); *arg5+=sp20;}
typedef struct {s32 x[2];s32 z[3];void *base;} Img;typedef struct{s16 x,y,w,h;} Rect;
void func_80047CF8_ovl_01(Img *a,Rect *r,s32 x,s32 y){s32 stride=a->x[1]; u16 *src=(u16*)((char*)a->base+stride*r->y+r->x);u16 *dst=(u16*)((char*)a->base+stride*y+x);s32 row=0;while(row<r->h){s32 col=0;while(col<r->w){*dst++=*src++;col+=2;}src+=stride-r->w;dst+=stride-r->w;row++;}}
extern f32 D_800B8940_ovl_01,D_800B8944_ovl_01,D_800B8948_ovl_01,D_800B894C_ovl_01;
f32 func_800482C4_ovl_01(f32 x){if(x>0.0f){f32 a=D_800B8948_ovl_01/x;return D_800B894C_ovl_01-a;}else{f32 a=D_800B8940_ovl_01/x;return D_800B8944_ovl_01-a;}}
