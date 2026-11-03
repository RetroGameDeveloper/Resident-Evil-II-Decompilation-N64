extern u8 D_800E10D0_ovl_01[];extern s8 D_80167DCC_ovl_30[];extern u8 D_800C7650_ovl_01[];
void func_8016481C_ovl_30(void *p,s32 a1,s32 a2) {
 s32 state=((u8*)p)[7]; s32 one=1,t,x,z; void *base=D_800E10D0_ovl_01; s32 *tab;
 if(state==one) goto S1;
 if(state<2) { if(state==0) goto Init; goto End; }
 { s32 two=2; if(state==two) goto S2; }
 { s32 three=3; if(state==three) goto S3; }
 goto End;
Init:
 ((u8*)p)[7]=one;*(s32*)((u8*)p+0x1E8)=0x0D000F00;
 t=func_800656BC_ovl_01(*(s16*)((u8*)base+0x2A),*(s16*)((u8*)base+0x32));
 t=(u8)t;x=D_80167DCC_ovl_30[t];tab=(s32*)(D_800C7650_ovl_01+0x18000);tab=(s32*)tab[0x27C/4];tab=(s32*)tab[0x38/4];tab+=x*3;
 *(s16*)((u8*)p+0x260)=(*(s16*)((u8*)tab+4)+*(s16*)((u8*)tab+8))/2;
 x=*(s16*)((u8*)p+0x260)-*(s32*)((u8*)p+0x28);
 z=(*(s16*)((u8*)tab+2)+*(s16*)((u8*)tab+6))/2-*(s32*)((u8*)p+0x30);*(s16*)((u8*)p+0x262)=z;
 t=func_80040BE4_ovl_01(x*x+z*z);*(s16*)((u8*)p+0x1E2)=-0x354;*(s16*)((u8*)p+0x1E4)=0;
 {s32 prod=t*0x2E8BA2E9;*(s16*)((u8*)p+0x1E0)=(prod>>2)-((s32)t>>31);}
 t=func_80032D44_ovl_01(*(s16*)((u8*)p+0x2A),*(s16*)((u8*)p+0x32),*(s16*)((u8*)p+0x260),*(s16*)((u8*)p+0x262));*(s16*)((u8*)p+0x2B6)=t;*(s16*)((u8*)p+0x66)=t;*(s32*)p|=4;
S1:
 func_80089D34_ovl_01(p,a1,a2,0x100);if(!(*(s32*)*(s32*)((u8*)p+0x214)&0x10000))goto End;((u8*)p)[7]=2;func_80077D48_ovl_01(6,p);((u8*)p)[0x207]=0;goto End;
S2:
 func_80032C08_ovl_01(p,*(s16*)((u8*)p+0x2B6)-*(s16*)((u8*)p+0x66),0);
 if(!*(s8*)((u8*)p+0x207)){func_80089D34_ovl_01(p,a1,a2,0x100);if(1)((u8*)p)[0x207]=one;}
 {s32 v=*(s32*)((u8*)p+0x2C);s32 mul=v*0x91A2B3C5; *(s8*)((u8*)p+0x1A2)=((mul>>32)+v>>10)-(v>>31);}
 *(u16*)((u8*)p+0x1E2)+=0x50;
 if((s16)*(u16*)((u8*)p+0x1E2)<0x354 && !*(s16*)((u8*)p+0x1E0))goto After;
 if(*(s16*)((u8*)p+0x1E0)){*(s16*)((u8*)p+0x1E0)=0;*(s32*)p&=~0x40D;t=func_80032D44_ovl_01(*(s16*)((u8*)p+0x2A),*(s16*)((u8*)p+0x32),*(s16*)((u8*)base+0x2A),*(s16*)((u8*)base+0x32));*(s16*)((u8*)p+0x66)=t;*(u16*)((u8*)p+0x1AA)&=0xBBFF;}
After:if(*(s32*)((u8*)p+0x2C)+0xC8<*(s16*)((u8*)p+0x25E))goto End;
 *(s32*)((u8*)p+0x1E8)=0x0E000300;((u8*)p)[7]=3;((u8*)p)[0x206]=1;func_80089D34_ovl_01(p,a1,a2,0x400);((u8*)p)[0x2BD]=0;
 {s32 xx=*(s16*)((u8*)p+0x260),yy=*(s16*)((u8*)p+0x25E),zz=*(s16*)((u8*)p+0x262);*(s32*)((u8*)p+0x28)=xx;*(s32*)((u8*)p+0x2C)=yy;*(s32*)((u8*)p+0x30)=zz;}
 ((u8*)p)[0x1A2]=0;((u8*)p)[0x207]=0;func_80052C9C_ovl_01(8,0x8C,0);((u8*)p)[0x26F]&=0x7F;*(u16*)((u8*)p+0x1AA)&=0xBBFF;goto End;
S3:
 if(func_80089D34_ovl_01(p,a1,a2,0x400)){((u8*)p)[0x2BD]=0;((u8*)p)[5]=2;*(s16*)((u8*)p+6)=0;func_80033634_ovl_01(p);((u8*)p)[0x2C7]=0x3C;t=func_80033634_ovl_01(p);if((0x57EA>>(t&15))&1)((u8*)p)[0x2C7]+=0x3C;func_801637A4_ovl_30(p);}
 func_80033678_ovl_01(p);
 if((*(s32*)*(s32*)((u8*)p+0x214)&0x10000)&&!*(s8*)((u8*)p+0x206)&&func_8016764C_ovl_30(p,0)){((u8*)p)[0x206]=1;t=3;func_80077D48_ovl_01(t,p);((u8*)p)[0x207]=t;func_801672F4_ovl_30(base,8,0);}
 if(*(s32*)*(s32*)((u8*)p+0x214)&0x8000000){((u8*)p)[0x2CF]=0x1D;((u8*)p)[0x2CE]=7;}func_801635A0_ovl_30(p,0xE);if(*(s8*)((u8*)p+0x207)){func_801672F4_ovl_30(p,0xE,1);func_801672F4_ovl_30(p,0x10,1);((u8*)p)[0x207]--;}
End:;}
