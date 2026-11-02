void func_80028F2C(void) {}
void func_80028EB4(void *arg0,s32 arg1){s32 remain=arg1,len; s32 *buf=*(s32**)((u8*)arg0+0x14);if(remain>0){do{len=buf[1];if(len<remain){remain-=len;func_80028DF0_ovl_01(arg0);continue;}buf[0]+=remain;buf[1]-=remain;break;}while(1);}}
void func_80047854_ovl_01(void *arg0,s32 arg1,s32 arg2,s32 arg3,u16 arg4){
 s32 x=arg1+arg3,y=arg2+arg4;
 *(s8*)((u8*)arg0+0x10)=arg1;*(s8*)((u8*)arg0+8)=arg1;
 *(s8*)((u8*)arg0+0x20)=x;*(s8*)((u8*)arg0+0x18)=x;
 *(s8*)((u8*)arg0+0x19)=arg2;*(s8*)((u8*)arg0+9)=arg2;
 *(s8*)((u8*)arg0+0x21)=y;*(s8*)((u8*)arg0+0x11)=y;
}
void func_8004790C_ovl_01(void*arg0,s16 a1,s16 a2,s16 a3,s32 a4,s32 a5,s32 a6,s32 a7,s32 a8){*(s16*)((u8*)arg0+4)=a1;*(s16*)((u8*)arg0+6)=a2;*(s16*)((u8*)arg0+0xC)=a3;*(s16*)((u8*)arg0+0xE)=a4;*(s16*)((u8*)arg0+0x14)=a5;*(s16*)((u8*)arg0+0x16)=a6;*(s16*)((u8*)arg0+0x1C)=a7;*(s16*)((u8*)arg0+0x1E)=a8;}
