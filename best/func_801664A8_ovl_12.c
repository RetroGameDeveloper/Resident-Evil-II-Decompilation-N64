void func_801664A8_ovl_12(void *p,s32 d,s32 lim){s16 old=*(s16*)((char*)p+0x1e0);u16 u=*(u16*)((char*)p+0x1e0);if(old<lim){s16 n=u+d;*(s16*)((char*)p+0x1e0)=n;if(lim<n)*(s16*)((char*)p+0x1e0)=lim;}}
