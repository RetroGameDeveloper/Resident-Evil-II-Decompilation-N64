extern s32 func_80033634_ovl_01(void); extern s32 func_80089D34_ovl_01(void *,s32,s32,s32); extern s32 func_80077D48_ovl_01(s32,void *); extern s32 func_80166214_ovl_13(void *,s32);
extern s32 D_80166488_ovl_13[];
s32 func_801657D0_ovl_13(void *arg0){
u8 *p=arg0; s32 state; s32 v; s32 t; s32 n; s32 m;
state=*(u8 *)(p+6);
switch(state){
case 0:
 *(u8 *)(p+0x26f)=0x80; v=*(s32*)p; *(u8*)(p+6)=1; *(s32*)p=v|2;
 v=func_80033634_ovl_01()&31; *(u8*)(p+0x2b5)=v+0x19;
 *(u16*)(p+0x1f4)=*(u8*)(p+0x2b5); *(u8*)(*(s32*)(p+0x208)+0xe)=0;
 *(u16*)(p+0x1f6)=0x3c; *(u8*)(p+6)=1;
 v=*(u8*)(p+0x2b5)-1; *(u8*)(p+0x2b5)=v;
 if((v&255)!=255)break;
 *(s32*)(p+0x1e8)=0x04000700;
 if(*(s16*)(p+0x1f4)<0x79){n=func_80033634_ovl_01()&7; *(u8*)(p+0x2b5)=n*5+5;}
 else {n=func_80033634_ovl_01()&1; *(u8*)(p+0x2b5)=n*5+10;}
 *(u8*)(p+6)=2; break;
case 1:
 v=1;
 if(*(s16*)(p+0x1f4)>=0x65){t=*(u8*)(p+0x2b6)+v; *(u8*)(p+0x2b6)=t; v=((t&v)<v);}
 if(v){func_80089D34_ovl_01(p,0,0,0x200); if(*(s16*)(p+0x1f4)<0x64)++*(u8*)(p+0x1e9); --*(u8*)(p+0x2b5);}
 if(!v)break;
case 2:
 if(*(u8*)(p+0x2b5))break;
 v=func_80033634_ovl_01()&15; *(u16*)(p+0x1f4)+=v+10;
 if(*(s16*)(p+0x1f4)<0x97){*(u8*)(p+6)=1;*(u8*)(p+0x2b5)=*(u8*)(p+0x1f5);}
 else {*(u8*)(p+6)=3;*(u16*)(p+0x1e2)=0;}
 break;
case 3:
 t=*(s16*)(p+0x1e2); n=*(s16*)(p+0x25e); v=*(s32*)(p+0x2c); m=n-250;
 *(s32*)(p+0x2c)=v+t; *(u16*)(p+0x1e2)=t+20;
 if(m<*(s32*)(p+0x2c)){
 func_80166214_ovl_13(p,0x15e); func_80077D48_ovl_01(5,p);
 *(s32*)(p+0x1e8)=0x0b000700; *(u8*)(p+0x2b5)=11;
 *(u16*)(p+0x68)=0; *(u16*)(p+0x64)=0; *(s32*)(p+0x2c)=m; *(u8*)(p+6)=4;
 }
 break;
case 4:
 func_80089D34_ovl_01(p,0,0,0x200); v=*(u8*)(p+0x2b5)-1; *(u8*)(p+0x2b5)=v;
 if((v&255)==255) *(u8*)(p+6)=5;
 break;
}
return 0;
}
