extern s32 func_80040BE4_ovl_01(s32); extern s32 func_80060984_ovl_01(s32,s32); typedef struct {s16 x,y,z;} V3;
void func_800608F4_ovl_01(V3*a,V3*b){s32 angle; s32 x,y; angle=func_80060984_ovl_01(a->x,a->z); x=a->x*a->x; y=a->z*a->z; x=func_80040BE4_ovl_01(x+y); angle=func_80060984_ovl_01(x,-a->y); b->x=0;b->y=angle;
b->x=0;b->z=(angle-0x400)&0xfff;}
