s32 func_80033634_ovl_01(void); s32 func_800377B0_ovl_01(s32,s16,s32,s32);
void func_801627A4_overlay_022(void *arg0,s32 arg1,s32 arg2,s32 arg3,s32 arg4,s32 arg5){
s32 t0; s32 t1; s32 n; s32 i; u16 v1; s8 *p=(s8*)arg0; s8 *q=(s8*)arg5;
t1=*(s32*)(p+0x234); n=arg1-1;
if(arg1){i=arg5+6;do{t0=t1+(*(s32*)(i+2)*0x178)+0x38;v1=*(u16*)i;i+=0xc;
func_800377B0_ovl_01((arg2<<24)|(arg3<<16)|(arg4+((func_80033634_ovl_01()&0xff)*2)),(s16)(*(u16*)(p+0x66)+v1),t0,arg5);arg5+=0xc;n--;}while(n!=0);}
}
