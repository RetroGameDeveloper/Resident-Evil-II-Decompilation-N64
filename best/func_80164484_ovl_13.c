extern volatile u8 D_800C7650_ovl_01[];
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80032D44_ovl_01(s32,s32,s32,s32);
s32 func_80033634_ovl_01(void);
s32 func_80089D34_ovl_01(void *,void *,void *,s32);
void func_80032B8C_ovl_01(s32);
void func_80035AAC_ovl_01_108(void *);
void func_80166080_ovl_13(void *);
void func_80166158_ovl_13(void *,s32);
s32 func_80165BD8_ovl_13(void *,s32,s32);
s32 func_80032EA4_ovl_01(void *,s32,s32,s32);
void func_80164484_ovl_13(void *p, void *arg1, void *arg2) {
 u8 *b=(u8*)p; u8 *base; s32 r,v,n,d; u16 a; s32 *x; u8 *q;
 switch(b[6]) {
 case 1:
 func_80077D48_ovl_01(3,p); *(s32*)(b+0x1e8)=0x09000700; *(s16*)(b+0x1e2)=0; *(s16*)(b+0x1e0)=0; b[0x2b9]=0; *(s16*)(b+0x2c0)=0;
 base=(u8*)D_800C7650_ovl_01+0x18000;
 r=func_80032D44_ovl_01(*(s16*)(base+0x1aaa),*(s16*)(base+0x1ab2),*(s16*)(b+0x2a),*(s16*)(b+0x32));
 *(s16*)(b+0x2c2)=(s16)r-*(u16*)(b+0x66);
 x=(s32*)(base+0x288); *(s16*)x=100; func_80033634_ovl_01();
 v=func_80033634_ovl_01()&1; *(s16*)(b+0x2c4)=v?200:-200;
 func_80166080_ovl_13(p); v=func_80033634_ovl_01()&1; func_80166158_ovl_13(p,v|2);
 b[0x2b5]=3; b[0x2b6]=3; b[6]=1;
 if(func_80089D34_ovl_01(p,arg1,arg2,0x200)) b[6]=2;
 q=b+0x2b4; v=(u8)q[1]-1; q[1]=v; if((u8)v==255) func_80166158_ovl_13(p,1);
 v=(u8)q[2]-1; q[2]=v; if((u8)v==255) func_80166158_ovl_13(p,1);
 *(u16*)(b+0x2c0)+=0x14; *(s32*)(b+0x2c)+=(s16)*(u16*)(b+0x2c0); func_80032B8C_ovl_01(*(s32*)(base+0x288));
 d=*(s16*)(b+0x2c4); a=*(u16*)(b+0x68);
 if(d<0 ? *(s16*)(b+0x68)<-0x7ff : *(s16*)(b+0x68)<0x800) *(s16*)(b+0x68)=a+d;
 n=*(s16*)(b+0x25e)-250;
 if(n<*(s32*)(b+0x2c)){func_80077D48_ovl_01(5,p); *(s32*)(b+0x2c)=n; *(s32*)(b+0x1e8)=0x0b000700; v=func_80033634_ovl_01(); b[0x2b5]=func_80033634_ovl_01()&15; *(s16*)(b+0x68)=0; if(*(s16*)(b+0x1f2)<0){b[0x2b5]=11;func_80035AAC_ovl_01_108(p);b[6]=5;}else b[6]=3;} break;
 case 2: v=(u8)b[0x2b5]-1;b[0x2b5]=v;if((u8)v==255)b[6]=4;func_80089D34_ovl_01(p,arg1,arg2,0x200);b[0x1e9]--;break;
 case 3: if(func_80089D34_ovl_01(p,arg1,arg2,0x200)){if(func_80032EA4_ovl_01(p,*(s16*)(b+0x260),*(s16*)(b+0x262),0x400))func_80165BD8_ovl_13(p,1,9);else{*(u16*)(b+0x1f4)=func_80033634_ovl_01()&15;func_80165BD8_ovl_13(p,1,0);}}break;
 case 4: func_80089D34_ovl_01(p,arg1,arg2,0x200);v=(u8)b[0x2b5]-1;b[0x2b5]=v;if((u8)v==255)func_80165BD8_ovl_13(p,7,0);break;
 case 5: func_80089D34_ovl_01(p,arg1,arg2,0x200);break;
 }
}
