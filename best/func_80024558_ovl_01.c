typedef struct { u32 w0,w1; } Gfx;
extern u8 D_800E91E0_ovl_01;
extern f64 D_800B6968_ovl_01,D_800B6978_ovl_01;
extern f32 D_800B6970_ovl_01;
extern u32 D_800C4EA8_ovl_01;
extern s32 D_8010B69C_ovl_01,D_80113778_ovl_01,D_8011377C_ovl_01;
u32 func_80024558_ovl_01(Gfx *p) {
 Gfx *out=p;
 s32 i=D_80113778_ovl_01, j=D_8011377C_ovl_01, x, y;
 f64 d;
 d=(f64)i;
 if(i<0) d=d+D_800B6968_ovl_01;
 d=d*D_800B6970_ovl_01;
 x=(s32)(f32)d;
 d=(f64)j;
 if(j<0) d=d+D_800B6978_ovl_01;
 d=d*D_800B6970_ovl_01;
 y=(s32)(f32)d;
 switch(D_800E91E0_ovl_01) {
 case 0:
  out->w0=0xE3001001;out->w1=0;out++;
  out->w0=0xE200001C;out->w1=0;out++;
  out->w0=0xE3000A01;out->w1=0x00200000;out++;
  out->w0=0x0A000000;out->w1=(u32)&D_800C4EA8_ovl_01;out++;break;
 case 1:
  out->w0=0xE7000000;out->w1=0;out++;
  out->w0=0xED000000;out->w1=D_8010B69C_ovl_01;out++;break;
 case 2:
  out->w0=0xE3000A01;out->w1=0x00300000;out++;
  out->w0=0xFCFFFFFF;out->w1=0xFFFE793C;out++;break;
 case 3:
  out->w0=0xE200001C;out->w1=0x0F0A4000;out++;break;
 case 4:
  out->w0=0xF7000000;out->w1=0xFFFCFFFC;out++;break;
 case 5:
  out->w0=0xF6000000;out->w1=0;out++;break;
 }
 return (u32)out;
}
