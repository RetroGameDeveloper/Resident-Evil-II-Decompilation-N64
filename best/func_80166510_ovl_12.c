void func_801664A8_ovl_12(void *p,s32 d,s16 limit){s16 old=*(s16*)((char*)p+0x1e0);u16 u=*(u16*)((char*)p+0x1e0);if(old<limit){s16 n=u+d;*(s16*)((char*)p+0x1e0)=n;if(limit<n) *(s16*)((char*)p+0x1e0)=limit;}}
void func_801664DC_ovl_12(void *p,s32 d,s16 limit){s16 old=*(s16*)((char*)p+0x1e0);u16 u=*(u16*)((char*)p+0x1e0);if(limit<old){s16 n=u-d;*(s16*)((char*)p+0x1e0)=n;if(n<limit) *(s16*)((char*)p+0x1e0)=limit;}}
extern s32 func_800342B0_ovl_01_530(void*,s32,s32,s32);
void func_80166458_ovl_12(void *p){s16 value=*(s16*)((char*)p+0x66);p=(void*)p; ((unsigned char*)p)[0x25d]=2;func_800342B0_ovl_01_530(p,value,0,0);((unsigned char*)p)[0x25d]=3;func_800342B0_ovl_01_530(p,value,0,0);((unsigned char*)p)[0x25d]=2;}
extern unsigned char D_80166EF8_ovl_12[];
void func_80166510_ovl_12(void *p,s16 d){s32 ix;u8 val;if(d!=0) ix=(d>0)*2;else ix=1;val=D_80166EF8_ovl_12[ix];if(((u8*)p)[0x1e8]!=val){if(((u8*)p)[0x1ea]<7){((u8*)p)[0x1e8]=val;((u8*)p)[0x1ea]=15;}}}
