extern u16 D_801535B0[];
extern s32 D_8014E10C,D_8014E170,D_80152180,D_80152990,D_801535A0,D_80157DB0;
extern void func_800A5C7C_ovl_01(void);
void func_800AE074_ovl_01(void) {
 s32 i;
 D_8014E10C=0; D_8014E170=0; D_80152180=0; D_80152990=0; D_80157DB0=0; D_801535A0=0;
 for(i=0;i<0x200;i++){ D_801535B0[i*2]=0; D_801535B0[i*2+1]=0; }
 func_800A5C7C_ovl_01();
}
extern s16 D_8014E100;
extern s32 D_80157DB0;
extern u8 D_80157DC0[];
extern u8 D_800AE124_ovl_01[];
extern s32 func_800AB3DC_ovl_01(void *, void *, u16, s32, void *);
s32 func_800ADFD4_ovl_01(s16 arg0) {
 s32 i, v;
 D_8014E100=arg0;
 for(i=0;i<D_80157DB0;i++) {
   v=func_800AB3DC_ovl_01(&D_8014E100, *(s32 *)(D_80157DC0+i*8+4), *(u16 *)(D_80157DC0+i*8+2),12,D_800AE124_ovl_01);
   if(v) return v;
 }
 return 0;
}
extern u8 D_8014E0F0[],D_801529A0[],D_800AE114_ovl_01[];
extern s32 D_8014E0FC,D_80152990;
s32 func_800ADF54_ovl_01(s16 arg0, s16 *arg1) {
 s32 v;
 *(s16 *)(D_8014E0F0+4)=arg0;
 v=func_800AB3DC_ovl_01(D_8014E0F0,D_801529A0,D_80152990,12,D_800AE114_ovl_01);
 D_8014E0FC=v;
 if(v){*arg1=*(u16 *)(v+6); return *(s32 *)D_8014E0FC;}
 return 0;
}
