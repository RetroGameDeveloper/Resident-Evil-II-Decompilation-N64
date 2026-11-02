s32 func_80052C00_ovl_01(s32,s32,u8); s32 func_80052C9C_ovl_01(s32,s32,s32);
void func_80163A38_ovl_27(void *arg0,s8 arg1) { u8 *p=arg0; u8 x; x=p[0x26f]; p[5]=arg1;p[4]=2;p[6]=0;p[7]=0;x|=0x80;p[0x26f]=x;func_80052C00_ovl_01(3,0,x);func_80052C9C_ovl_01(4,0xc8,3); }
extern u8 D_800C7650_ovl_01[];
s32 func_80163818_ovl_27(void*,s32,s16);
s32 func_801639B0_ovl_27(void *a,s16 b) { s32 v; v=func_80163818_ovl_27(a,0,b); if(v) return v; if(*(u32*)(D_800C7650_ovl_01+0x195c)&0x10000000) v=func_80163818_ovl_27(a,1,b); else v=0; return v; }
