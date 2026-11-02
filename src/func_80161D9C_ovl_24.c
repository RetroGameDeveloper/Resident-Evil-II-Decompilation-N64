s32 func_800377B0_ovl_01(s32,s32,void *,s16 *);
void func_80161D9C_ovl_24(void *arg0) {
 s16 args[3]; s32 object=*(s32 *)((u8 *)arg0+0x234);
 args[0]=0;args[1]=0;args[2]=0;
 func_800377B0_ovl_01(0x05011600,0,(u8 *)object+0x38,args);
 args[0]=0; args[1]=0x1F4; args[2]=0;
 args[0]=0;args[1]=0xC8;args[2]=0;
 func_800377B0_ovl_01(0x05011600,0,(u8 *)object+0x1B0,args);
 args[0]=0;args[1]=0;args[2]=-0x64;
 func_800377B0_ovl_01(0x05011200,0,(u8 *)object+0x328,args);
}
