s32 func_800377B0_ovl_01(s32,s16,void*,u16*);
s32 func_8004279C_ovl_01(void*,s32,u16*);
extern u8 D_800E8FC8_ovl_01[];
void func_801684AC_ovl_14(void *arg0,s32 arg1,s32 arg2,s32 arg3,s32 arg4,s32 arg5,s32 arg6){
 u16 sp10[3]; void *base; s32 n;
 base=*(void**)((u8*)arg0+0x234); n=arg5*0x178; base=(u8*)base+n;
 func_8004279C_ovl_01((u8*)base+0x38,arg6,sp10);
 sp10[0]+=*(u16*)((u8*)base+0x4e); sp10[1]+=*(u16*)((u8*)base+0x52); sp10[2]+=*(u16*)((u8*)base+0x56);
 func_800377B0_ovl_01((arg1<<24)|(arg2<<16)|arg3,(s16)arg4,D_800E8FC8_ovl_01,sp10);
}
