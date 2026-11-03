void func_8016579C_ovl_13(void*arg0){u8*p=arg0;if(p[6])return;p[0x26f]=0x80;*(u32*)p|=2;*(u8*)(*(u8**)(p+0x208)+0xe)=0;p[6]=1;}
void func_80165B44_ovl_13(void*arg0){ }
s8 func_80033634_ovl_01(void);s32 func_800377B0_ovl_01(s32,s32,void*,s16*);
extern s32 D_800E8FC8_ovl_01;
void func_80166080_ovl_13(void*arg0){s16 a,b,c;s8 n;n=func_80033634_ovl_01();a=*(u16*)((u8*)arg0+0x2a)+n;n=func_80033634_ovl_01();b=*(u16*)((u8*)arg0+0x2e)+n;n=func_80033634_ovl_01();c=*(u16*)((u8*)arg0+0x32)+n;n=func_80033634_ovl_01();func_800377B0_ovl_01(0x12800,(n&255)*16,&D_800E8FC8_ovl_01,&a);}
void func_8016610C_ovl_13(void*arg0){u16 a,b,c;u8*p=arg0;a=*(u16*)(p+0x2a);b=*(u16*)(p+0x2e);c=*(u16*)(p+0x32);func_800377B0_ovl_01(0x50c00,*(s16*)(p+0x66),&D_800E8FC8_ovl_01,(s16*)&a);}
