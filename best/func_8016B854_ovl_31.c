extern s32 func_80040E88_ovl_01(void*,void*,void*,s32); extern void func_800342B0_ovl_01_750(void*,s16,u16*); extern s32 D_8016C4FC_ovl_31[]; extern u8 D_800E10D0_ovl_01[];
typedef struct {u8 pad0[0x66];s16 f66;u8 pad68[0x142];u16 f1aa;u8 pad1ac[0x88];void *f234;u8 pad238[0x18];void*f250;} X;
void func_8016B854_ovl_31(X*p){u16 t[4];s32 i,sum;u8 *q; s32 n;
 p->f250=D_800E10D0_ovl_01;func_800342B0_ovl_01_750(D_800E10D0_ovl_01,p->f66,&t[2]);
 t[2]&=0xfff;if(t[2]>=0x801)t[2]-=0xfff;
 sum=0;if(p->f1aa&1){q=*(u8**)((u8*)p->f234+0xfd0);for(i=0;i<4;i++){sum+=((D_8016C4FC_ovl_31[i]<<4)*(s16)*(u16*)(q+0xc))>>16;q+=4;}if(sum< -0x2c8)sum=-0x2c8;if(sum>0)sum=0;}
 q=(u8*)p->f234+0x2630;t[0]=*(u16*)(q+0x58);t[1]=*(u16*)(q+0x5a)+t[2];t[2]=*(u16*)(q+0x5c)+sum;func_80040E88_ovl_01(t,(u8*)p->f234+0x2638,q,sum);
}
