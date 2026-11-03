extern s16 D_8014E100;
extern s32 D_80157DB0;
extern u8 D_80157DC0[];
extern u8 D_800AE124_ovl_01[];
extern s32 func_800AB3DC_ovl_01(void *, s32, u16, s32, void *);
extern u8 D_8014E0F0[],D_801529A0[],D_800AE114_ovl_01[];
extern s32 D_8014E0FC,D_80152990;
s32 func_800ADF54_ovl_01(s16 arg0, s16 *arg1) {
 s32 v;
 *(s16 *)(D_8014E0F0+4)=arg0;
 v=func_800AB3DC_ovl_01(D_8014E0F0,(s32)D_801529A0,D_80152990,12,D_800AE114_ovl_01);
 D_8014E0FC=v;
 if(v){*arg1=*(u16 *)(v+6); return *(s32 *)D_8014E0FC;}
 return 0;
}
s32 func_800ADFD4_ovl_01(s16 arg0) {
 s32 i,v;
 D_8014E100=arg0;
 for(i=0;i<D_80157DB0;i++) {
   v=func_800AB3DC_ovl_01(&D_8014E100, *(s32 *)(D_80157DC0+i*8+4), *(u16 *)(D_80157DC0+i*8+2),12,D_800AE124_ovl_01);
   if(v) return v;
 }
 return 0;
}
extern u8 D_8014E0C8[],D_8014E0D0[],D_8014E180[],D_800AE104_ovl_01[];
extern s32 D_8014E170;
s32 func_800ADE94_ovl_01(s16 arg0) {
 s32 *v;
 *(s16 *)(D_8014E0C8+4)=arg0;
 v=(s32 *)func_800AB3DC_ovl_01(D_8014E0C8,(s32)D_8014E180,D_8014E170,8,D_800AE104_ovl_01);
 *(s32 *)D_8014E0D0=(s32)v;
 if(v) return *v;
 return 0;
}
