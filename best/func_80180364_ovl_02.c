
extern s32 D_80187020_ovl_02; extern s32 *D_80187420_ovl_02;
void func_8017FF94_ovl_02(void){s16 *p=(s16*)&D_80187020_ovl_02-0x400;s32 x=-0x200;D_80187420_ovl_02=&D_80187020_ovl_02;do{if(x< -0x100)*p=-0x100;else if(x>=0x100)*p=0xff;else *p=x;x++;p++;}while(x<0x200);}
extern s32 D_801853E0_ovl_02[64]; extern s32 D_801853E4_ovl_02,D_801853E8_ovl_02;
s32 func_8017FFF0_ovl_02(s32 arg0){s32 a1=arg0,off,bank,base;if(a1&0x3f){s32 v=a1+0x40;a1=v&-0xc0;}off=D_801853E4_ovl_02; if((u32)(off+a1)>0x25800u){D_801853E4_ovl_02=0;D_801853E8_ovl_02++;}base=D_801853E4_ovl_02;bank=D_801853E8_ovl_02;D_801853E4_ovl_02=base+a1;return D_801853E0_ovl_02[bank]+base;}
extern s32 D_8010B69C_ovl_01;
void func_80180070_ovl_02(void){s32 i=0;s32 *p=D_801853E0_ovl_02;s32 v=D_8010B69C_ovl_01,rem;D_801853E4_ovl_02=0;D_801853E8_ovl_02=0;*p=v;do{v=*p;rem=v&63;if(!rem)*p=v;else{v+=64;v-=rem;*p=v;}i++;p++;}while(i==0);}
void func_80180364_ovl_02(s32 *arg0,s32 arg1,s32 arg2,s32 arg3,s32 arg4){s32 t0,t1,v0,v1;t1=0x10;t1<<=arg1;t0=*arg0;if(!arg4)goto nohalf;t0>>=1;nohalf:if(arg2>0){v0=t0+1;v1=arg2-1;v1<<=arg1;v1+=arg3;t0=v0+v1;v0=t0<t1;if(v0)goto store;v0=t1<<1;t0-=v0;goto store;}if(arg2>=0)goto store;v0=t0-1;v1=~arg2;v1<<=arg1;v1+=arg3;t0=v0-v1;v0=-t1;if(t0>=v0)goto store;v0=t1<<1;t0+=v0;store:if(arg4){*arg0=t0;t0<<=1;}*arg0=t0;}
