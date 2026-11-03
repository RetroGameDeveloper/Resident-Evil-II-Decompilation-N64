typedef struct{ s32 x;u8 p[4];s32 z;}A;typedef struct{s16 x,y;u16 d,n;}B;
s32 func_8006A45C_ovl_01(A*a,B*b){s32 v1; s32 h; s32 y; s32 w; s32 out=0; s32 n;
v1=b->x; h=a->x; n=b->n; v1=(n*(h-v1))/b->d; h=a->z;y=b->y;w=h-y;if(v1<w){out=2;if(-v1<h-(y+n))out=3;}else if(h-(y+n)<-v1)out=1;return out;}
extern u8 D_80112794_ovl_01;extern u8 D_80112908_ovl_01[7];extern s32 D_801129BC_ovl_01,D_80139E00;
void func_8006BDD4_ovl_01(void){u8*p=D_80112908_ovl_01;s32 v; p[0]=8;p[1]=8;p[2]=8;p[3]=8;p[6]=8;p[4]=0;p[5]=0;D_801129BC_ovl_01=0;v=D_80139E00;v|=1;v&=-3;v&=-17;v&=-33;D_80139E00=v;D_80112794_ovl_01 &= 0xF7;}
extern s32 func_8000E9D0(s32); extern s32 D_80139E00;
s32 func_8006BE40_ovl_01(void){volatile u8 *p=&D_80112794_ovl_01;s32 x;x=2;if(*p&1)x=1;func_8000E9D0(x);x=8;if(*p&2)x=4;func_8000E9D0(x);x=32;if(*p&4)x=16;func_8000E9D0(x);x=128;if(*p&8)x=64;func_8000E9D0(x);return (D_80139E00&0x60)!=0;}
extern s32 D_80112758_ovl_01;extern s32 D_80112918_ovl_01[];extern s32 D_80112968_ovl_01[];extern s32 func_8000E980(void*,...);extern s32 func_8000EC60(s32);extern s32 func_8006BE40_ovl_01(void);
void func_8006BEEC_ovl_01(s32 arg0){s32 *src=&D_80112968_ovl_01[0];s32 *dst=&D_80112918_ovl_01[0];do{dst[0]=src[0];dst[1]=src[1];dst[2]=src[2];dst[3]=src[3];src+=4;dst+=4;}while(src!=&D_80112968_ovl_01[20]);func_8000E980(&D_80112918_ovl_01[0]);func_8006BE40_ovl_01();if(D_80112758_ovl_01)func_8000EC60(arg0);}
