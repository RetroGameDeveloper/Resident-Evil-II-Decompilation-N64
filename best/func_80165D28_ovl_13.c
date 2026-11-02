s32 func_80032EA4_ovl_01(void*,s32,s32,s32); s32 func_80033634_ovl_01(void); void func_80165BE8_ovl_13(S_func_80162BC0_ovl_13_arg0*,s32); s32 func_80065400_ovl_01_258(void); extern u8 D_800C7650_ovl_01[];
void func_80165D28_ovl_13(S_func_80162BC0_ovl_13_arg0 *p){u8 n; s32 v; u16 bits; s16 limit;
 if(*(s16*)(D_800C7650_ovl_01+0x19C72)>=0){
  if((p->unk_2C4&10)==10){func_80165BE8_ovl_13(p,13);p->unk_2B8=0;bits=*(u16*)((u8*)p+0x2C6);bits &= 0xFFB7;*(u16*)((u8*)p+0x2C6)=bits;return;}
  n=p->unk_2B8;if(n){p->unk_2B8=n-1;return;}
  bits=*(u16*)((u8*)p+0x2C6);
  if((u32)(p->unk_28C-0x385)<0x189B && !(*(u16*)(D_800C7650_ovl_01+0x19A78)&1) && (bits&2) && func_80032EA4_ovl_01(p,*(s32*)(D_800C7650_ovl_01+0x19AA8),*(s32*)(D_800C7650_ovl_01+0x19AB0),0x100)==0){
   *(u16*)(D_800C7650_ovl_01+0x19A78)|=1;bits=*(u16*)((u8*)p+0x2C6);bits|=4;*(u16*)((u8*)p+0x2C6)=bits;
   if(!(func_80033634_ovl_01()&15)){func_80165BE8_ovl_13(p,11);return;}func_80165BE8_ovl_13(p,13);return;
  }
  if(p->unk_0D){p->unk_2BA=0;return;}
  n=p->unk_2BA;
  if(!n){limit=p->unk_1E0;if(limit>=0xE7 && !(*(u16*)(D_800C7650_ovl_01+0x19A78)&1) && func_80032EA4_ovl_01(p,*(s32*)(D_800C7650_ovl_01+0x19AA8),*(s32*)(D_800C7650_ovl_01+0x19AB0),0x100)==0)func_80165BE8_ovl_13(p,12);v=(u8)p->unk_2BA<11;}
  else v=n<11;
  if(!v){func_80165BE8_ovl_13(p,8);v=func_80033634_ovl_01()&0x7F;p->unk_2BC=v;p->unk_2BB=v;}
  limit=p->unk_1E0;if(limit>=0x65)p->unk_1E0=limit-4;
  p->unk_2BA++;
 }
}
