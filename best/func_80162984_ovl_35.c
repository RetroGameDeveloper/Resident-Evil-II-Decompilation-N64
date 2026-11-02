extern u8 D_800C7650_ovl_01[];extern u8 D_80166680_ovl_35[];
void func_80162984_ovl_35(u8*p,void*a1,void*a2){
 s32 x; s32 y; s32 z; s32 w; u16 t; u8 c;
 if(p[7]==0){
  if(func_80089D34_ovl_01(p,a1,a2,0x100)){
   *(s16*)(p+0x1f4)=0x14;p[0x207]=0x14;p[7]=1;p[0x206]=0;*(s32*)(p+0x1e8)=0xa000000;
   func_80089D34_ovl_01(p,a1,a2,0x100);D_800C7650_ovl_01[0x1a86]=1;
  }
  func_80032B8C_ovl_01(p,0);func_80032DEC_ovl_01(p,*(s32*)(D_800C7650_ovl_01+0x1aa8),*(s32*)(D_800C7650_ovl_01+0x1ab0),0x18);
  if(!(p[0x2bd]&1))*(s32*)(p+0x2c)-=0x37;
 }else{
  t=*(u16*)(p+0x1f4)-func_800331E8_ovl_01();*(u16*)(p+0x1f4)=t;
  if(((s32)(t<<16)<=0)||(*(s8*)(p+0x207)<=0)){*(s16*)(p+6)=0x200;D_800C7650_ovl_01[0x1a85]=3;return;}
  if(!(func_80033634_ovl_01()&7)){func_801661F0_ovl_35(p,D_80166680_ovl_35+(func_80033634_ovl_01()&3),2);}
  func_80089D34_ovl_01(p,a1,a2,0x100);func_80033678_ovl_01(p);
  c=p[0x206];p[0x206]=c+1;w=*(s32*)(p+0x2c);if(!(c&2))w-=0x20;else w+=0x20;*(s32*)(p+0x2c)=w;
  if(!(p[0x206]&3)){p[0x207]-=3;if(func_80059E30_ovl_01(3,0)==2){func_801661AC_ovl_35(0);*(s16*)(p+6)=0x200;}}
 }
}
