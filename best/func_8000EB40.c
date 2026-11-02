extern f64 D_80011CF0; extern void *D_800129D4;
void func_8000EB40(f32 arg0) {
 s32 temp_v0=func_800072E0(); s32 temp_v1; s32 var_v0; f64 var_ft0; f32 temp_fv1;
 void *a=D_800129D4; void *b=*(void**)((u8*)a+8);
 *(f32*)((u8*)a+0x18)=arg0; *(u16*)a|=2;
 temp_v1=*(s32*)((u8*)b+0x20)&0xFFF; var_ft0=(f64)temp_v1;
 if(temp_v1<0) var_ft0+=D_80011CF0;
 temp_fv1=*(f32*)((u8*)a+0x18)*(f32)var_ft0;
 if(temp_fv1>=2.1474836e9f) {
   var_v0=((s32)(temp_fv1-2.1474836e9f)|0x80000000)&0xFFF;
 } else var_v0=(s32)temp_fv1&0xFFF;
 *(s32*)((u8*)a+0x20)=var_v0;
 func_80007300(temp_v0);
}
