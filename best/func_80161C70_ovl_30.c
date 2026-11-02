typedef struct {u8 pad[0x1A60];u32 flags;} Gsub; typedef struct {u8 pad[0x18000];Gsub sub;} Big; extern volatile Big D_800C7650_ovl_01;
extern u8 D_80167D44_ovl_30[]; extern u32 D_80167D44tab_ovl_30[];
extern s32 func_80033634_ovl_01(void); extern void func_801672F4_ovl_30(void*,u8,s32); extern void func_80166E74_ovl_30(void*,void*);
extern void func_80167864_ovl_30(void*,s32); extern void func_801671EC_ovl_30(void*,void*); extern void func_8016570C_ovl_30(void*);
extern void func_8004DB8C_ovl_01(void*); extern void func_8004DCE8_ovl_01(void*,s32);
typedef struct {u8 b[0x2C2];} Obj;
void func_80161C70_ovl_30(Obj *o) {
 s32 dx,dy; u8 *p=(u8*)o; volatile u8 *item=p+0x2B4; volatile u32 target=0x800347E0; s32 (*dispatch)(void*,s32); u8 v;
 if (!(D_800C7650_ovl_01.sub.flags&0x20000000)) {
  v=*(p+0x26F); if(v&0x7F)*(p+0x26F)=v-1;
  v=item[4];if(v)item[4]=v-1; v=item[5];if(v)item[5]=v-1;v=item[0x13];if(v)item[0x13]=v-1;v=item[0xB];if(v)item[0xB]=v-1;
  dispatch=(s32(*)(void*,s32))D_80167D44tab_ovl_30[*(u8*)(p+4)];dispatch(o,*(s32*)(p+0x1A4));
  ((s32(*)(void*,s32))target)(o,*(s16*)(p+0x66));
  v=item[1]; if(v){item[1]=v-1; v=func_80033634_ovl_01()&7; func_801672F4_ovl_30(o,D_80167D44_ovl_30[v+2],7); v=func_80033634_ovl_01()&7;func_801672F4_ovl_30(o,D_80167D44_ovl_30[v+2],7);}
  func_80166E74_ovl_30(o,(void*)item); func_80167864_ovl_30(o,*(s32*)(p+0x234)+0x1028);func_801671EC_ovl_30(o,(void*)item);
  func_8016570C_ovl_30(o);func_8004DB8C_ovl_01(o);func_8004DCE8_ovl_01(o,0x400);
  dx=*(s32*)(p+0x28)-*(s16*)(p+0x34);if(dx<0)dx=-dx;
  dy=*(s32*)(p+0x30)-*(s16*)(p+0x38);if(dy<0)dy=-dy;
  if(dx<12&&dy<12&&(*(u32*)(p+0x1AC)&1))*(p+0x2C1)+=1; else *(p+0x2C1)=0;
 }
}
