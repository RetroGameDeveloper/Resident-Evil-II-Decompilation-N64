typedef struct {u8 pad[0x234];s32 unk_234;} Obj;
typedef struct {s8 x,y,x2,y2;s16 dx,dy,vx,vy;u8 rest[8];u8 w,stepx,stepy,maxx,minx,maxy,miny,limx,limy,limx2,limy2;u8 rest2[3];} Thing;
extern Thing D_80166ED4_ovl_32[];
extern u32 D_800EB230_ovl_01;
s32 func_8003420C_ovl_01(void*,s16,s16,u32);
void func_80166934_ovl_32(Obj *arg0,s32 arg1){Thing *p=&D_80166ED4_ovl_32[(u8)arg1];s16 x=p->x,y=p->y; s16 dx=p->dx,dy=p->dy;s32 width=p->w; s32 stride; stride=width*3;stride=stride<<4;stride-=width;stride<<=3;
if(p->x2<p->x)p->vx=-1;if(p->x<p->x2)p->vx=1;if(p->y2<p->y)p->vy=-1;if(p->y<p->y2)p->vy=1;
if(-p->vx==dx)p->dx=(p->dx*2)/3;if(-p->vy==dy)p->dy=(p->dy*2)/3;
if(p->x==p->x2){s16 t=p->dx;if(t<0)t=-t;if(t<3){p->x=p->x2;p->vx=0;p->dx=0;}}
if(p->y==p->y2){s16 t=p->dy;if(t<0)t=-t;if(t<3){p->y=p->y2;p->vy=0;p->dy=0;}}
p->dx+=p->vx;p->dy+=p->vy;p->x+=p->stepx;p->y+=p->stepy;
if(p->maxx<p->x)p->x=p->maxx;if(p->x<p->minx)p->x=p->minx;if(p->maxy<p->y)p->y=p->maxy;if(p->y<p->miny)p->y=p->miny;
func_8003420C_ovl_01((void*)(arg0->unk_234+stride),p->x-x,p->y-y,D_800EB230_ovl_01);
}
