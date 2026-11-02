s32 func_800408F0_ovl_01(s16,u16,s16); s32 func_80040998_ovl_01(s16); void func_80042910_ovl_01(s32); void func_80042D90_ovl_01(void*); void func_80042DDC_ovl_01(void*); void func_800828DC_ovl_01(void*,void*,s32);
extern u8 D_800C7650_ovl_01[]; extern u8 D_800E90D8_ovl_01[];
typedef struct { u8 pad[0x3C]; void *ptr; } Obj;
typedef struct { u8 pad0[0x16]; s16 mode; s16 index; } Entry;
typedef struct { s32 a,b,c,d,e,f,g; } Vec;
void func_8017C5E4_ovl_10(void) {
 u8 *s=(u8*)0x8017E680; s32 *v=(s32*)(s+8); s16 angle; s16 mode; s32 *target;
 *(s32*)(s+0x28)-=*(s32*)(s+0x30);
 target=*(s32**)(s+0x3C); mode=*(s16*)((u8*)target+0x16);
 if(mode==0) {
  if(!(*(u8*)(s+0x34)&1)) {
   target=*(s32**)(D_800C7650_ovl_01+0x19CB4);
   angle=*(s16*)((u8*)*(s32**)(s+0x3C)+0x18);
   target=(s32*)((u8*)target+angle*0x178+0x38);
  } else {
   target=*(s32**)(D_800C7650_ovl_01+0x19D3C);
   angle=*(s16*)((u8*)*(s32**)(s+0x3C)+0x18);
   target=(s32*)((u8*)target+angle*0x178+0x38);
  }
 } else if(mode==1) {
  target=*(s32**)(D_800C7650_ovl_01+0x19CD0);
  angle=*(s16*)((u8*)*(s32**)(s+0x3C)+0x18);
  target=(s32*)((u8*)target+angle*0x178+0x38);
 } else target=0;
 angle=*(s16*)(s+0); v[2]-=angle; *(u16*)s+=*(u16*)(s+0x36);
 v[1]=target[5]+((*(s32*)(s+0x28)*func_800408F0_ovl_01(*(s16*)(s+0x2C),*(u16*)(s+0x36),angle))>>12);
 v[3]=target[7]-((*(s32*)(s+0x28)*func_80040998_ovl_01(*(s16*)(s+0x2C)))>>12);
 *(u16*)(s+0x2C)=(*(u16*)(s+0x2C)-*(u16*)(s+0x2E))&0xFFF;
 v[4]+= (target[5]-v[4])/30;
 v[6]+= (target[7]-v[6])/30;
 v[5]+= (target[6]-(v[5]+0x12C))/5;
 func_800828DC_ovl_01(v+1,v+4,0);
 func_80042910_ovl_01(0xD0);
 func_80042D90_ovl_01(D_800E90D8_ovl_01);
 func_80042DDC_ovl_01(D_800E90D8_ovl_01);
}
