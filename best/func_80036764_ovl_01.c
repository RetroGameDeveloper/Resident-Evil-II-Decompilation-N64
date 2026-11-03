typedef struct { s32 flags; u8 pad[0x230]; void *ptr; } Obj0;
typedef struct { s32 flags; u8 pad4[0x34]; s32 m[8]; u8 pad58[0xcc]; s16 x,y,z; } Obj1;
extern s32 D_800E8FC8_ovl_01[8]; extern s32 D_800C7650_ovl_01[];
void func_80083778_ovl_01(void *); void func_80042484_ovl_01(void *,void *); void func_80040D5C_ovl_01(void *,void *); void func_800416EC_ovl_01(void *,void *); void func_8004251C_ovl_01(void *,void *,void *); s32 func_80083D5C_ovl_01(void *,s32); void func_800411E8_ovl_01(void *,void *); void func_800854BC_ovl_01(void *,void *,s32);
void func_80036764_ovl_01(Obj0 *a0,Obj1 *a1) {
 s32 sp10[4]; s32 pad20[12]; s32 sp50[8]; s32 sp70[8]; s32 sp90[8]; s32 padB0[16]; s32 spF0[3]; s32 t0,t1,t2,t3;
 if(a1->flags&1) { func_80083778_ovl_01((u8 *)a0->ptr+0x4c); func_80042484_ovl_01(D_800E8FC8_ovl_01,sp10);
  if(a1->flags&0x400) {
   t0=a1->m[0];t1=a1->m[1];t2=a1->m[2];t3=a1->m[3];sp50[0]=t0;sp50[1]=t1;sp50[2]=t2;sp50[3]=t3;t0=a1->m[4];t1=a1->m[5];t2=a1->m[6];t3=a1->m[7];sp50[4]=t0;sp50[5]=t1;sp50[6]=t2;sp50[7]=t3;
   spF0[0]=a1->x;spF0[1]=a1->y;spF0[2]=a1->z;func_80040D5C_ovl_01(sp50,spF0);func_800416EC_ovl_01((u8 *)a1+0x38,sp70);sp70[5]=0;sp70[6]=0;sp70[7]=0;
   t0=D_800E8FC8_ovl_01[0];t1=D_800E8FC8_ovl_01[1];t2=D_800E8FC8_ovl_01[2];t3=D_800E8FC8_ovl_01[3];sp90[0]=t0;sp90[1]=t1;sp90[2]=t2;sp90[3]=t3;t0=D_800E8FC8_ovl_01[4];t1=D_800E8FC8_ovl_01[5];t2=D_800E8FC8_ovl_01[6];t3=D_800E8FC8_ovl_01[7];sp90[4]=t0;sp90[5]=t1;sp90[6]=t2;sp90[7]=t3;sp90[5]=-sp50[5];sp90[7]=-sp50[7];sp90[6]=-sp50[6];func_8004251C_ovl_01(sp70,sp90,sp70);func_8004251C_ovl_01(sp50,sp70,sp50);func_80042484_ovl_01(sp50,sp10);
  }
  if(a1->flags&0x2000) {
   t0=D_800E8FC8_ovl_01[0];t1=D_800E8FC8_ovl_01[1];t2=D_800E8FC8_ovl_01[2];t3=D_800E8FC8_ovl_01[3];sp50[0]=t0;sp50[1]=t1;sp50[2]=t2;sp50[3]=t3;t0=D_800E8FC8_ovl_01[4];t1=D_800E8FC8_ovl_01[5];t2=D_800E8FC8_ovl_01[6];t3=D_800E8FC8_ovl_01[7];sp50[4]=t0;sp50[5]=t1;sp50[6]=t2;sp50[7]=t3;sp50[5]=a1->m[5];sp50[6]=a1->m[6];sp50[7]=a1->m[7];spF0[0]=a1->x;spF0[1]=a1->y;spF0[2]=a1->z;func_80040D5C_ovl_01(sp50,spF0);
   t0=D_800E8FC8_ovl_01[0];t1=D_800E8FC8_ovl_01[1];t2=D_800E8FC8_ovl_01[2];t3=D_800E8FC8_ovl_01[3];sp70[0]=t0;sp70[1]=t1;sp70[2]=t2;sp70[3]=t3;t0=D_800E8FC8_ovl_01[4];t1=D_800E8FC8_ovl_01[5];t2=D_800E8FC8_ovl_01[6];t3=D_800E8FC8_ovl_01[7];sp70[4]=t0;sp70[5]=t1;sp70[6]=t2;sp70[7]=t3;sp70[5]=-sp50[5];sp70[7]=-sp50[7];sp70[6]=-sp50[6];func_8004251C_ovl_01(sp50,sp70,sp50);func_80042484_ovl_01(sp50,sp10);
  }
  if(func_80083D5C_ovl_01((u8 *)a0+0x28,D_800C7650_ovl_01[0x18000/4+0x18290/4])&&!(a0->flags&0x80000)){func_800411E8_ovl_01(sp10,(u8 *)a1+0xd0);func_800854BC_ovl_01(a1,(u8 *)a0+0x78,0);}
 }
}
