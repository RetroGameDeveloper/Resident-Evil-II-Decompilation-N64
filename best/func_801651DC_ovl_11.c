s32 func_800331E8_ovl_01(void*,s32,s32,s32); s32 func_8003334C_ovl_01(void*,s32,s32,s32); s32 func_80033634_ovl_01(void); void func_80077D48_ovl_01(s32,void*); s32 func_80089D34_ovl_01(void*,s32,s32,s32); extern u8 D_800E10D0_ovl_01[];
void func_801651DC_ovl_11(void *p,s32 a1,s32 a2) {
 u8 v=((u8*)p)[6]; s32 r;
 switch(v) {
 case 0:
   *(s32*)((u8*)p+0x1e8)=0x18000f00;
   func_800331E8_ovl_01(D_800E10D0_ovl_01,a1,a2,0);
   ((u8*)p)[6]=1;
   r=func_80033634_ovl_01()&1;
   if(r) {func_80077D48_ovl_01(10,p);} else {func_80077D48_ovl_01(11,p);}
   ((u8*)p)[0x26f]|=0x80;
 case 1:
   func_8003334C_ovl_01(p,a1,a2,0);
   ((u8*)p)[6]+=func_80089D34_ovl_01(p,a1,a2,0x100);
   break;
 case 2:
   *(s32*)((u8*)p+4)=0x01080000;
   *(u16*)((u8*)p+0x1aa)|=0x4000;
   break;
 }
}
