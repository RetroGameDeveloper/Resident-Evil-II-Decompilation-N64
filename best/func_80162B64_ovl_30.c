extern u8 D_800C7650_ovl_01[];
extern u32 D_80167D9C_ovl_30[];
extern s16 D_80167CEC_ovl_30[];
extern s8 D_80167DD8_ovl_30[];
extern s8 D_80167E51_ovl_30[];
s32 func_80032EA4_ovl_01(s32,s32,s32,s32);
s32 func_80033634_ovl_01(void);
s32 func_800656BC_ovl_01(s16,s16);
s32 func_80077D48_ovl_01(s32,void*);
s32 func_80089D34_ovl_01(void*,s32,s32,s32);
void func_801672F4_ovl_30(void*,s32,s32);
void func_80163154_ovl_30(void *p) {
 u8 *q=(u8*)p; u8 *g=D_800C7650_ovl_01+0x18000; s32 n;
 if (*(u32*)(q+0x28c)<0x1194 && *(s16*)(g+0x1c72)>=0 &&
 func_80032EA4_ovl_01(*(s32*)(g+0x1aa8),*(s32*)(g+0x1ab0),0,0x400)) {
 n=func_80033634_ovl_01()&15;
 if (((0x1558>>n)&1) || q[0x2c0]) { q[5]=3; *(s16*)(q+6)=0; }
 }
}
void func_801631EC_ovl_30(void *p) {
 u8 *q=p; s16 x; ((void(*)(void))D_80167D9C_ovl_30[q[6]])();
 x=*(s16*)((u8*)D_80167CEC_ovl_30+4*(*(s16*)(q+0x2b6)));
 if(*(s8*)(q+0x207)){ func_801672F4_ovl_30(p,(x+1)&255,1);func_801672F4_ovl_30(p,(x+3)&255,1);q[0x207]--; }
}
s8 func_80164C84_ovl_30(void *p,s32 mode) {
 u8 *g=D_800C7650_ovl_01+0x18000; s32 a,b; u8 *t;
 a=func_800656BC_ovl_01(*(s16*)(g+0x1aaa),*(s16*)(g+0x1ab2))&255;
 b=func_800656BC_ovl_01(*(s16*)((u8*)p+0x2a),*(s16*)((u8*)p+0x32))&255;
 t=mode?D_80167E51_ovl_30:D_80167DD8_ovl_30;
 return *(s8*)(t+b*11+a);
}
void func_80162B64_ovl_30(void *p,s32 a,s32 b) {
 u8 *q=p; u16 t;
 if(!q[6]) {q[6]=1;*(s32*)(q+0x1e8)=0xf00;*(u16*)(q+0x1f4)=60;func_80077D48_ovl_01(10,p);q[0x25c]&=0xfe;}
 func_80089D34_ovl_01(p,a,b,0x100);
 t=*(u16*)(q+0x1f4)-1;*(u16*)(q+0x1f4)=t;
 if((s32)(t<<16)==0){q[5]=2;*(u16*)(q+6)=0;}
}
