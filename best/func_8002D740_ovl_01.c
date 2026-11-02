typedef struct A A;typedef struct D D;typedef struct B B;struct D{void(*cb)(A*);u8 p4[0x10];s32 code,arg,kind;};struct B{u8 p0[8];s32 x8,xc,x10,x14,x18,x1c,x20,x24,x28,x2c,x30,x34,x38,x3c,x40,x44,x48;};struct A{D*d;u8 p4[0x14];s32 x18,x1c;u8 p20[0xe4];s32 w104,w108;u8 q[0xc];s32 count;B*items;s32 x120,x124,x128,x12c,x130,x134,x138[64];};extern s32 func_80030ED0_ovl_01(s32,s32);
void func_8002D740_ovl_01(A*a){B*b;s32 s2,s3,s4=10,s0,v0,v1;
 if(a->count==1){b=a->items;a->x12c=b->x1c;a->x130=b->x20;b->x34=1;b->x38=1;b->x3c=1;b->x44=1;b->x48=1;b->x40=b->x24;a->x134=1;a->x138[0]=0;return;}
 if((u32)(a->count-1)>=4){a->d->code=19;a->d->arg=a->count;a->d->kind=4;a->d->cb(a);}
 a->x12c=func_80030ED0_ovl_01(a->x18,a->w104<<3);a->x130=func_80030ED0_ovl_01(a->x1c,a->w108<<3);
 v1=a->count;s2=0;a->x134=0;if(v1<=0)return;s3=0;s0=10;
 do {b=*(B**)((u8*)a+0x11c+s3*4);v0=b->x8;b->x34=v0;v0=b->x1c;v1=b->x34;v0=(u32)v0%(u32)v1;s4=b->xc;b->x38=s4;v1=b->x34;b->x3c=v1*s4;v1=b->x24;b->x40=b->x34*v1;if(v0==0)v0=b->x34;b->x44=v0;v0=b->x20;v1=b->x38;v0=(u32)v0%(u32)v1;if(v0==0)v0=b->x38;b->x48=v0;s4=b->x3c;v0=a->x134+s4;
 if(v0>=11){a->d->code=s0;a->d->cb(a);}
 if(s4>0){do {a->x138[a->x134]=s2;a->x134++;s4--;} while(s4>0);}
 s2++;s3++;
 }while(s2<a->count);
}
