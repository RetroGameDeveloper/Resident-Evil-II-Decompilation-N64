extern u8 D_800C7650_ovl_01[]; extern u8 func_801656D4_ovl_23[]; extern u16 D_801660AC_ovl_23,D_801660AE_ovl_23;
s32 func_80089D34_ovl_01(s32); s32 func_80162E5C_ovl_23(void*); s32 func_80033A0C_ovl_01(void*,s32,s32,s32,void*);
void func_80163440_ovl_23(u8 *arg0){
 u8 *obj=arg0; u8 *base; s32 temp; s32 v; s32 zero=0;
 base=D_800C7650_ovl_01+0x18000; *(u8**)(base+0x304)=func_801656D4_ovl_23;
 *(s32*)(obj+4)=0x1080000; *(s32*)(obj+0x1e8)=zero; func_80089D34_ovl_01(0x1000);
 obj[0x25d]=5; temp=*(s32*)obj; *(s16*)(obj+0x26c)=zero;*(s16*)(obj+0x268)=zero;*(s16*)(obj+0x264)=zero;*(s32*)obj=temp|0x1c000000;
 if(*(s32*)(base+0x1a3c)&0x20)v=D_801660AC_ovl_23+0x4e20;else v=D_801660AE_ovl_23+0x4e20;
 *(s16*)(obj+0x1f2)=v; *(s16*)(obj+0x2b8)=2;*(s32*)(obj+0x284)=1;
 *(s16*)(obj+0x134)=-0x708;*(s16*)(obj+0x13a)=0x708;
 *(s16*)(obj+0x12c)=1000;*(s16*)(obj+0x136)=1000;*(s16*)(obj+0x12e)=1000;*(s16*)(obj+0x138)=1000;
 obj[0x2ba]=zero;obj[0x2c4]=zero;obj[0x2c5]=zero;*(s32*)(obj+0x2bc)=zero;*(s32*)(obj+0x2c0)=zero;obj[0x2c6]=zero;*(s16*)(obj+0x2d0)=zero;obj[0x2d2]=zero;*(s16*)(obj+0x270)=zero;*(s16*)(obj+0x272)=zero;*(s16*)(obj+0x274)=zero;*(s16*)(obj+0x276)=zero;*(s16*)(obj+0x130)=zero;*(s16*)(obj+0x132)=zero;*(s16*)(obj+0x28a)=0x320;
 func_80162E5C_ovl_23(obj);func_80033A0C_ovl_01(obj+0x208,0,0x2ee0226,0,obj+0x28);
}
