extern s32 func_800439B8_ovl_01(s32,void*,s32,s32); extern u8 D_800DF650_ovl_01[]; extern u8 D_80160B9C_ovl_03[]; extern u8 D_80160BB8_ovl_03[]; extern u8 D_80160FC8_ovl_03[];
void func_8015E5E8_ovl_03(s32 arg0){
 s32 i,j,k,a1=0,a3=0x1a,t0,t1,t2,t3=0x100;u32 s2=0;u8*p;
 do{i=0;do{p=D_80160BB8_ovl_03+(a3+i)*0x28; {u8 v=D_80160BB8_ovl_03[0xb];p[2]=v;p[1]=v;p[0]=v;}i++;}while(i==0);s2++;a3+=2;}while(s2<3);
 i=0;t2=0x4b0;t1=0x460;t0=0x410;
 do{if(arg0==0){if(D_80160B9C_ovl_03[0xd]==1){*(u16*)(D_80160B9C_ovl_03+0x538+0x14*D_800DF650_ovl_01[0x538]+t0+0x26)=t3;if(i==0)*(u16*)(D_80160B9C_ovl_03+0x538+0x14*D_800DF650_ovl_01[0x538]+0x486)=0;else *(u16*)(D_80160B9C_ovl_03+0x538+0x14*D_800DF650_ovl_01[0x538]+t1+0x26)=0;a1=1;}else{*(u16*)(D_80160B9C_ovl_03+0x538+0x14*D_800DF650_ovl_01[0x538]+t1+0x26)=t3;if(i==0)*(u16*)(D_80160B9C_ovl_03+0x538+0x14*D_800DF650_ovl_01[0x538]+0x436)=0;else *(u16*)(D_80160B9C_ovl_03+0x538+0x14*D_800DF650_ovl_01[0x538]+t0+0x26)=0;a1=0;}*(u16*)(D_80160B9C_ovl_03+0x538+0x14*D_800DF650_ovl_01[0x538]+t2+0x26)=t3;}else{*(u16*)(D_80160B9C_ovl_03+0x538+0x14*D_800DF650_ovl_01[0x538]+t0+0x26)=t3;*(u16*)(D_80160B9C_ovl_03+0x538+0x14*D_800DF650_ovl_01[0x538]+t1+0x26)=t3;if(i==0)*(u16*)(D_80160B9C_ovl_03+0x538+0x14*D_800DF650_ovl_01[0x538]+0x4d6)=0;else *(u16*)(D_80160B9C_ovl_03+0x538+0x14*D_800DF650_ovl_01[0x538]+t2+0x26)=t3;a1=2;}t2+=0x28;t1+=0x28;i++;t0+=0x28;}while(i==0);
 p=D_80160FC8_ovl_03+a1*0x50;s2=0;p[0]=D_80160FC8_ovl_03[-0x42c+0xb]+D_80160FC8_ovl_03[-0x42c+7];p[1]=p[0];p[2]=p[0];j=0x1a;
 do{i=0;do{k=j+i;i++;*(u32*)(D_800DF650_ovl_01+0x204)=func_800439B8_ovl_01(*(u32*)(D_800DF650_ovl_01+0x204),D_80160BB8_ovl_03+k*0x28,0,0);}while(i==0);s2++;j+=2;}while(s2<3);
}/*scoped*/
