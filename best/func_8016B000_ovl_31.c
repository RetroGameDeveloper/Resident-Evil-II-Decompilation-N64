typedef s32 U;typedef s8 S8;typedef s16 S16;typedef u8 U8;typedef u16 U16;
#define F(e,t,o) (*(t)((s8*)(e)+(o)))
s32 func_80033634_ovl_01();extern U D_8016C4BC_ovl_31;
void func_8016B000_ovl_31(void*arg0,void*arg1){S16 *a,*b;U temp;U16 *c,*d;U16 x;U8 index,state;void*q;
state=F(arg0,U8*,0x2c5);
switch(state){case 0:F(arg0,U8*,0x2c5)=1;F(arg0,U16*,0x2c6)=0;temp=func_80033634_ovl_01();index=(((temp&0xff)>>(func_80033634_ovl_01()&3))&1)+5;F(arg0,U8*,0x2d0)=index;F(arg0,U8*,0x2d1)=11-index;F(arg0,S16*,0x2c8)=*(U16*)(((s8*)&D_8016C4BC_ovl_31)+((func_80033634_ovl_01()&0x1f)*2))+0x800;
case 1:c=(U16*)(F(arg0,U8*,0x2d0)*4+F(arg1,void**,0x120));*c+=F(arg0,U16*,0x2c6);x=F(arg0,U16*,0x2c6);F(arg0,U16*,0x2c6)=x+1;d=(U16*)(F(arg0,U8*,0x2d1)*4+F(arg1,void**,0x120));*d+=(x+1)/3;a=(S16*)(F(arg0,U8*,0x2d1)*4+F(arg1,void**,0x120));if((0x1000-F(arg0,S16*,0x2c8))<*a)*a=0x1000-(U16)F(arg0,S16*,0x2c8);q=F(arg1,void**,0x120);F(q,U16*,0x10)=(U16)((U)(F(q,U16*,0x10)<<16)>>17);b=(S16*)(F(arg0,U8*,0x2d0)*4+F(arg1,void**,0x120));if(F(arg0,S16*,0x2c8)<*b){*b=(S16)(U16)F(arg0,S16*,0x2c8);F(arg0,S8*,0x2c4)=6;F(arg0,U8*,0x2c5)=0;}return;}}
