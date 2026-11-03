
extern s32 *D_8010B688_ovl_01; extern s32 *D_8010B68C_ovl_01; extern s32 D_80113790_ovl_01,D_80113794_ovl_01;
void func_80082410_ovl_01(void){s32 n=((D_80113790_ovl_01*D_80113794_ovl_01)>>1)-1;s32*p=D_8010B688_ovl_01;if(n!=-1)do{*p++=0;n--;}while(n!=-1);p=D_8010B68C_ovl_01;if(p){n=((D_80113790_ovl_01*D_80113794_ovl_01)>>1)-1;if(n!=-1)do{*p++=0;n--;}while(n!=-1);}}
void func_800824C8_ovl_01(s32 *a,s32 n){do{*a++=0;}while(--n);}
extern s32 D_801314F0_ovl_01[];
void func_80082D40_ovl_01(s32 *a,s32*b){s32 *p=&D_801314F0_ovl_01[0x20];a[0]=p[0];a[1]=p[1];a[2]=p[2];b[0]=p[3];b[1]=p[4];b[2]=p[5];}
s32 func_80082230_ovl_01(void *,s32,s32); s32 func_80040E88_ovl_01(void *,void *); s32 func_8004279C_ovl_01(void *,s32,s32);
void func_80083800_ovl_01(s16 a,s32 b,s32 c){s32 x[2];s16 y; s32 z[2];func_80082230_ovl_01(x,0,8);y=a;func_80040E88_ovl_01(x,z);func_8004279C_ovl_01(z,b,c);}
