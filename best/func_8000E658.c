extern u32 D_80017820; extern s32 D_80017824,D_80017828; extern u32 D_8001782C; extern u16 D_80017860;
u32 func_80007000(void); void *func_8000E7F0(void); void func_8000ECB0(void); void func_8000DF64(void); void func_8000C9E0(s32,u16**,s32); void func_8000CB60(s32,s32,s32);
void func_8000E658(void *arg0) {u16 *p=0;void*q;s32 t;u16 v;u32 old,now,diff,lo;s32 flag;s32 spare;u16 c13=13,c14=14;
 D_80017860=*(u16*)((u8*)func_8000E7F0()+2);if(!D_80017860)D_80017860=1;flag=0;
loop:func_8000C9E0(*(s32*)((u8*)arg0+12),&p,1);v=*p;
 if(v==c13){func_8000ECB0();v=D_80017860-1;D_80017860=v;if(!(v&65535)){q=func_8000E7F0();t=*(s32*)((u8*)q+16);if(t)func_8000CB60(t,*(s32*)((u8*)q+20),0);D_80017860=*(u16*)((u8*)q+2);}
 D_80017824++;if(flag){now=func_80007000();flag=0;D_80017828=0;D_8001782C=now;}
 old=D_80017820;now=func_80007000();D_80017820=now;diff=now-old;lo=D_8001782C+diff;D_80017828+=lo<diff;D_8001782C=lo;goto loop;}
 if(v==c14){func_8000DF64();goto loop;}goto loop;
}
