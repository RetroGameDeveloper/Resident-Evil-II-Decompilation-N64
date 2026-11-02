s32 func_80089D34_ovl_01(void*,s32,s32,s32); extern s32 D_800C7650_ovl_01,D_80167140_ovl_33;
void func_80164BC4_ovl_33(void *arg0,s32 arg1,s32 arg2){u8 state=*((u8*)arg0+6);s32 *s1=*(s32**)((u8*)arg0+0x234);s32 v0;u8 *p;
if(state>=5)goto end;
switch(state){case 0:
*(s32*)((u8*)arg0+0x1e8)=0;*((u8*)arg0+6)=1;*s1|=1;*(u16*)((u8*)arg0+0x68)=0x40;*(s16*)((u8*)arg0+0x66)=0;*(s16*)((u8*)arg0+0x64)=*(u16*)((u8*)&D_80167140_ovl_33+2*(*((u8*)arg0+0x2b4)))-0x400;p=(u8*)&D_800C7650_ovl_01+0x18000;{s32 *q=*(s32**)(p+0x1d40);q[0x2c4/4]|=1<<(*((u8*)arg0+0x2b4)+4);}v0=func_80089D34_ovl_01(arg0,arg1,arg2,0x40);s1[0x124/4]+=0x40;if((s16)s1[0x124/4]>=0x1001){*(s32*)((u8*)arg0+0x1e8)=0x16001f00;*((u8*)arg0+6)=2;s1[0x124/4]=0x1000;}break;
case 1:v0=func_80089D34_ovl_01(arg0,arg1,arg2,0x80);*((u8*)arg0+6)+=v0;*(u16*)((u8*)arg0+0x68)+=8;break;
case 2:break;
case 3:
*((u8*)arg0+6)=4;*(s32*)((u8*)arg0+0x1e8)=0x3f00;v0=func_80089D34_ovl_01(arg0,arg1,arg2,0x40);s1[0x124/4]-=0x80;if((s32)s1[0x124/4]<0){s1[0x124/4]=0;*(s32*)((u8*)arg0+4)=0x01000000;p=(u8*)&D_800C7650_ovl_01+0x18000;{s32 *q=*(s32**)(p+0x1d40);q[0x2c4/4]&=~(1<<( *((u8*)arg0+0x2b4)+4));}}*(u16*)((u8*)arg0+0x68)-=4;break;
default:break;}
end:;}
