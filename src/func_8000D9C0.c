f32 func_8000DB80(f32 x){return __builtin_sqrtf(x);}
extern u32 D_80012950;
s32 func_800072E0(void); s32 func_80007300(s32); s32 func_80000DD4(s32); s32 func_8000DED0(s32,void *);
void func_8000DCB0(void *arg0){s32 s1=func_800072E0();u16 v1=4;if(arg0)v1=*(u16 *)((u8 *)arg0+0x10);switch(v1){case 4:*(u16 *)(*(u32 *)(&D_80012950)+0x10)=1;func_80000DD4(0);break;case 2:case 8:*(u16 *)((u8 *)arg0+0x10)=1;func_8000DED0(*(s32 *)((u8 *)arg0+8),arg0);}func_80007300(s1);}
s32 func_8000D9C0(void){return (*(volatile u32 *)0xA4040010&0x1c)!=0;}
s32 func_8000DD70(void *arg0){return -1;}
