extern s32 func_8017BB68_ovl_02(s32); extern s32 func_8017BE48_ovl_02(s32); extern s32 D_80185740_ovl_02,D_8018575C_ovl_02,D_80185760_ovl_02,D_80185764_ovl_02,D_80185768_ovl_02,D_8018576C_ovl_02; extern u8 *D_80186C14_ovl_02;
void func_8017DC24_ovl_02(void){s32 v;
 v=func_8017BE48_ovl_02(10); *(s32*)(D_80186C14_ovl_02+0x42c)=1;
 func_8017BB68_ovl_02(1);D_8018575C_ovl_02=v;
 v=func_8017BE48_ovl_02(15);D_80185760_ovl_02=v;if(v>=0x4000)D_80185760_ovl_02=v-0x8000;
 func_8017BB68_ovl_02(1);
 v=func_8017BE48_ovl_02(15);D_80185764_ovl_02=v;if(v>=0x4000)D_80185764_ovl_02=v-0x8000;
 v=func_8017BE48_ovl_02(2); D_80185740_ovl_02=v;
 v=func_8017BE48_ovl_02(1); D_80185768_ovl_02=v; D_8018576C_ovl_02=func_8017BE48_ovl_02(1);
}
