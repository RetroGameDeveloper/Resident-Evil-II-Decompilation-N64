
extern s32 D_80187020_ovl_02; extern s32 *D_80187420_ovl_02;
void func_8017FF94_ovl_02(void){
 s16 *dst=(s16*)&D_80187020_ovl_02-0x400; s32 x=-0x200;
 D_80187420_ovl_02=&D_80187020_ovl_02;
 do { if(x < -0x100) *dst=-0x100; else if(x < 0x100) *dst=x; else *dst=0xff; x++; dst++; } while(x<0x200);
}
extern s32 D_801853E0_ovl_02[64]; extern s32 D_801853E4_ovl_02,D_801853E8_ovl_02;
s32 func_8017FFF0_ovl_02(s32 arg0){
 s32 a1=arg0, idx, base;
 if(a1&0x3f) a1=(a1+0x40)&-0xc0;
 if((u32)D_801853E4_ovl_02+a1>0x25800u){D_801853E4_ovl_02=0;D_801853E8_ovl_02++;}
 base=D_801853E4_ovl_02;
 D_801853E4_ovl_02=base+a1;
 idx=D_801853E8_ovl_02;
 return *((s32*)((u8*)D_801853E0_ovl_02+4*idx))+base;
}
extern s32 D_8010B69C_ovl_01;
void func_80180070_ovl_02(void){
 u32 count=0; s32 *p=D_801853E0_ovl_02; s32 initial=D_8010B69C_ovl_01;
 D_801853E4_ovl_02=0; D_801853E8_ovl_02=0; *p=initial;
 do { s32 v=*p; s32 rem=v&0x3f; if(rem==0) *p=v; else {v+=0x40; v-=rem; *p=v;} count++; p++; } while(count==0);
}
void func_80180364_ovl_02(s32 *arg0,s32 arg1,s32 arg2,s32 arg3,s32 arg4){
 s32 t0=*arg0,t1=0x10<<arg1,v0,v1;
 if(arg4) t0>>=1;
 if(arg2>0){v0=t0+1;v1=((arg2-1)<<arg1)+arg3;t0=v0+v1;if(t0>=t1)t0-=t1<<1;}
 else if(arg2<0){v0=t0-1;v1=(~arg2<<arg1)+arg3;t0=v0-v1;if(t0< -t1)t0+=t1<<1;}
 if(!arg4)*arg0=t0;else *arg0=t0<<1;
}
