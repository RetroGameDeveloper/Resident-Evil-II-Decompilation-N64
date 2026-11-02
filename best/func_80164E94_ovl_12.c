void func_80164E94_ovl_12(void *arg0,s32 arg1,s32 arg2){s16 t;u8*p=arg0;u8*q=p+0x2b4;
 func_80032C08_ovl_01(*(s16*)(p+0x1f4),0);*(u16*)(p+0x1e2)+=40;
 if(*(s32*)(p+0x2c)<*(s16*)(p+0x25e))goto done;
 *(s16*)(p+0x1f6)=512; t=*(s16*)(p+0x25e); *(s32*)(p+0x2c)=t;q[1]=0;
 func_801659DC_ovl_12(arg0,0,t);q[8]=1;
 t=func_80033634_ovl_01()&15;
 if(((0x404>>t)&1) && !(q[0xb]&128) && *(s16*)(p+0x1f2)>=0 && !q[0x15]){func_80077D48_ovl_01(10,arg0);t=768;}else{func_80077D48_ovl_01(11,arg0);t=512;}*(s16*)(p+6)=t;
 done:if(p[0x1e9]!=3)func_80089D34_ovl_01(arg0,arg1,arg2,512);
}
