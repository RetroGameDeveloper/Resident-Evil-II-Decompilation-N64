extern u16 D_80119E1C_ovl_01; extern u8 D_8011A22F_ovl_01; extern void func_800B2038_ovl_01(s32,s32,s32,s32);
void func_800750E0_ovl_01(s32 arg0,s32 arg1) { s32 n;
    s32 __repair_n_1; s32 d; if ((u16)arg0) D_8011A22F_ovl_01=D_80119E13_ovl_01; n=(u8)D_80119E13_ovl_01; d=D_80119E1C_ovl_01; func_800B2038_ovl_01(((n*d)>>7)&255,0,0,1); __repair_n_1=(u8)D_80119E14_ovl_01; func_800B2038_ovl_01(((__repair_n_1*d)>>7)&255,0,1,0); }
