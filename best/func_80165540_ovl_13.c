extern s32 func_80033634_ovl_01(); extern void func_8003420C_ovl_01(void *, s32); extern void func_80077D48_ovl_01(s32,void *); extern void func_80089D34_ovl_01(void *,s32,s32,s32); extern s32 D_800C7650_ovl_01;
void func_80165540_ovl_13(void *arg0,s32 arg1,s32 arg2){
u8 *p=arg0; u8 state=p[6]; s32 t; s32 temp;
switch(state){
case 0:
 p[0x26f]=0x80;*(s32*)(p+0x1e8)=0x0b000700;*(s32*)p|=2;
 t=(func_80033634_ovl_01()&0x1f)+0x19;p[0x2b5]=t;*(s16*)(p+0x1f4)=t&255;
 func_8003420C_ovl_01(*(void**)(p+0x208),D_800C7650_ovl_01);
 *(u16*)(*(u8**)(p+0x208)+4)=0x190;*(u16*)(*(u8**)(p+0x208)+6)=0x190;*(s16*)(p+0x1f6)=0x3c;p[6]=1;
case 1:{
 s32 counter=p[0x2b5];counter--;p[0x2b5]=counter;
 if((u8)counter==0xff){if(*(s16*)(p+0x1f4)>=0x5b){p[0x1e9]=11;counter=6;}else if(func_80033634_ovl_01()&1){p[0x1e9]=0;counter=12;}else{p[0x1e9]=11;counter=7;}p[0x2b5]=counter;p[6]=2;}
 if(*(s16*)(p+0x1f6)){u8*q=*(u8**)(p+0x208);*(s16*)(p+0x1f6)-=1;*(u16*)(q+4)+=10;q=*(u8**)(p+0x208);*(u16*)(q+6)+=10;}
 break;}
case 2:
 temp=1;
 if(*(s16*)(p+0x1f4)>=0x5b){t=p[0x2b6]+1;temp=(t&1)==0;p[0x2b6]=t;}
 if(temp){if(p[0x1e9]==0 && (func_80033634_ovl_01()&1)&&*(s16*)(p+0x1f4)<0x5a)func_80077D48_ovl_01(3,arg0);func_80089D34_ovl_01(arg0,arg1,arg2,0x200);p[0x2b5]--;}
 if(!p[0x2b5]){s16 x=*(s16*)(p+0x1f4)+(func_80033634_ovl_01()&15)+10;*(s16*)(p+0x1f4)=x;if(x>=0x97){p[6]=3;break;}p[6]=1;p[0x2b5]=p[0x1f5];}
}
}
