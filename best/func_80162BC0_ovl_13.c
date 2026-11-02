s32 func_80033634_ovl_01(void); s32 func_80165BE8_ovl_13(void*,s32); s32 func_80165BF4_ovl_13(void*); s32 func_80165D28_ovl_13(void*); s32 func_80165F00_ovl_13(void*); s32 func_80165F70_ovl_13(void*); extern s16 D_800C7650_ovl_01[];
void func_80162BC0_ovl_13(void *p) { s32 x; s32 y;
 if(*(u32*)((u8*)p+0x28c)>=0x1c21) { if(func_80033634_ovl_01()&1) y=7; else y=8; func_80165BE8_ovl_13(p,y); }
 if(!(func_80033634_ovl_01()&15)) { *(s16*)((u8*)p+0x1f4)=func_80033634_ovl_01()&63; if(D_800C7650_ovl_01[0x19cde/2]-0xe10 < *(s32*)((u8*)p+0x2c)) y=5; else y=6; func_80165BE8_ovl_13(p,y); }
 func_80165BF4_ovl_13(p);
 if(D_800C7650_ovl_01[0x19c72/2]<0 && *(s8*)((u8*)p+0x2bd)<=0) func_80165F70_ovl_13(p);
 else { func_80165D28_ovl_13(p); func_80165F00_ovl_13(p); }
}
