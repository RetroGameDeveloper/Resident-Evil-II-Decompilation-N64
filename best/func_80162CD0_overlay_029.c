typedef struct { s32 x[16]; } Quad;
void func_80162CD0_overlay_029(void *vp, void *a1p, void *a2p) {
 s32 *p=(s32*)vp; u8 *b=(u8*)vp; s32 a1=(s32)a1p,a2=(s32)a2p;
 s32 state, ok, i, val, temp; s32 *flags; u8 *g; s32 *obj; s16 box[8]; s16 v[3]; s32 found;
 state=b[6];
 if(!state) {
  p[0x1E8/4]=0x06000F00; b[6]=1;
  func_800334F8_ovl_01(vp,a1p,a2p,0);
  b[0x207]=0;b[0x206]=0; *(u16*)(b+0x1F6)=0;
  g=(u8*)0x800D7650;
  if(*(s16*)(g+0x1C72)>=0x3D){b[0x1E9]=0xF;func_800334F8_ovl_01(vp,a1p,a2p,0);}
 } else if(state!=1) return;
 func_800334F8_ovl_01(vp,a1p,a2p,0);
 if(b[0x1EA]) {*(s16*)(b+0x1E0)=(s32)(*(u16*)(b+0x1E0)<<16)>>17;*(s16*)(b+0x1E4)=(s32)(*(u16*)(b+0x1E4)<<16)>>17;}
 if(func_80089D34_ovl_01(vp,a1p,a2p,0x100)){p[1]=0x01010000;b[0x2B6]=0x14;*(u16*)(b+0x2B8)&=0xFF7F;}
 func_80032B8C_ovl_01(vp,0);
 val=(u8)(b[0x1E9]-6);
 if(val<13 && b[0x207]==0){
  g=(u8*)0x800D7650;
  func_80032DEC_ovl_01(vp,*(s32*)(g+0x1AA8),*(s32*)(g+0x1AB0),8);
  if((u32)p[0x28C/4]>=0xED9 || func_80032EA4_ovl_01(vp,*(s32*)(g+0x1AA8),*(s32*)(g+0x1AB0),0x590)){p[1]=0x01010000;b[0x2B6]=10;}
 }
 if(b[0x1E9]==0x28 && (u32)p[0x28C/4]<0xBB8 && (s8)b[0x207]==0){
  p[0x1E8/4]=0x07000F00;b[0x207]=1;g=(u8*)0x800D7650;
  if((g[0x1CEF]&0x80) && *(s16*)(g+0x1C72)<=0)g[0x1CEF]=0;
 }
 flags=*(s32**)(b+0x214);
 if(*flags&0x30000){
  *(u16*)(b+0x2B8)|=0x80;g=(u8*)0x800D7650;
  func_80032DEC_ovl_01(vp,*(s32*)(g+0x1AA8),*(s32*)(g+0x1AB0),0x20);
  if((s8)b[0x207] && func_80032EA4_ovl_01(vp,*(s32*)(g+0x1AA8),*(s32*)(g+0x1AB0),0x400))*(u16*)(b+0x66)+=0x80;
  func_801694A8_ovl_29(vp,box);
  found=0; g=(u8*)0x800E10F8;
  if(func_80032F94_ovl_01_48(box,g,0x4B0,v))found=1;
  if(!found && func_80032F94_ovl_01_48(box,g,0x4B0,v+1))found=1;
  if(found && !((u8*)0x800D7650)[0x1CEF]){
   g=(u8*)0x800D7650;
   val=func_80032D44_ovl_01(*(s16*)(b+0x2A),*(s16*)(b+0x32),*(s16*)(g+0x1AAA),*(s16*)(g+0x1AB2));
   temp=*(s16*)(g+0x1AE6)-((val-0x400)<<16>>16)+0x400;
   ok=(temp&0xFFF)<0x800;
   if((s8)b[0x207])ok^=1;
   func_80059E30_ovl_01(0x14,1);
   *(s32*)(g+0x1CD0)=(s32)vp;g[0x1CEF]|=0x80;
   *(s32*)(g+0x1CA4)=p[0x224/4];*(s32*)(g+0x1CA8)=p[0x228/4];
   *(s32*)0x800E10D4=0x02000000|((ok|2)<<16);
   b[0x206]=6;*(u16*)(b+0x2B8)&=0xFFFE;
   func_80077D48_ovl_01(8,0);func_80166BE4_ovl_29(vp);func_80052C00_ovl_01(8,0);func_80052C9C_ovl_01(8,0xFA,4);
  }
 }
 g=(u8*)0x800D7650;
 func_801694A8_ovl_29(vp,box);
 v[0]=0;v[1]=1000;v[2]=0;func_8004279C_ovl_01(box,v,v);
 obj=*(s32**)(b+0x234);
 if(*(s32*)0x801126AC){
  v[0]=0;v[1]=1000;v[2]=0;
  func_800377B0_ovl_01(0x1061FA0,*(s16*)(b+0x66),(u8*)obj+0x908,v);
  val=func_80033634_ovl_01();v[0]-=(val&0x7F)-0x40;
  func_800377B0_ovl_01(0x1061FA0,*(s16*)(b+0x66),(u8*)obj+0x908,v);
  val=func_80033634_ovl_01();v[1]-=(val&0xFF)-0x80;
  func_800377B0_ovl_01(0x1061FA0,*(s16*)(b+0x66),(u8*)obj+0x908,v);
  val=func_80033634_ovl_01();v[2]-=(val&0x7F)-0x40;
  func_800377B0_ovl_01(0x1061FA0,*(s16*)(b+0x66),(u8*)obj+0x908,v);
 }
 if(*(s16*)(b+0x1F6)==0){func_80077D48_ovl_01(7,vp);*(s16*)(b+0x1F6)=7;}
 g=(u8*)0x800D7650;*(s32*)(g+0x1A5C)&=-9;
 if(*(s16*)(b+0x1F6)){--*(s16*)(b+0x1F6);*(s32*)(g+0x1A5C)|=8;}
 if((s8)b[0x206]){
  func_801694A8_ovl_29(vp,box);
  val=func_80033634_ovl_01();v[0]=0x100-((val&0xFF)<<1);
  val=func_80033634_ovl_01();v[1]=0x4E8-((val&0xFF)<<1);
  val=func_80033634_ovl_01();v[2]=0x100-((val&0xFF)<<1);
  obj=*(s32**)(b+0x234);
  func_800377B0_ovl_01(0x1000,*(s16*)(b+0x66),(u8*)obj+0x908,v);
  obj=(s32*)(g+0x1CB4);
  val=func_80033634_ovl_01();v[0]=0x100-((val&0xFF)<<1);v[1]=0;
  val=func_80033634_ovl_01();v[2]=0x100-((val&0xFF)<<1);
  func_800377B0_ovl_01(0x1000,0,(u8*)obj+0x38,v);
 }
}
