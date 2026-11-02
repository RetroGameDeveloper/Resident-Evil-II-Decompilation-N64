s32 func_80033174_ovl_01(void *);
s32 func_80033634_ovl_01(void);
s32 func_800377B0_ovl_01(s32,s16,s32,void *);
extern u8 D_800E10D0_ovl_01[];
extern u8 D_801661A0_ovl_22[];
#define F(p,t,o) (*(t *)((u8 *)(p)+(o)))
void func_801624E8_ovl_22(void *arg0,s32 arg1,s32 arg2,s32 arg3,s32 arg4,s32 arg5) {
 s32 temp_s5=F(arg0,s32,0x234); s32 var_s0; s32 var_s2=0; u32 var_s1=0x24; void *temp_a3;
 if(arg5&2) { if(func_80033174_ovl_01(D_800E10D0_ovl_01)&0xFF) var_s2=0x12; var_s1=0x12; }
 if(arg5&1) { var_s1=6; var_s2+=((F(arg0,u8,0x26E)%3)&0xFF)*6; }
 var_s0=arg1-1;
 if(arg1!=0) do {
  temp_a3=D_801661A0_ovl_22+((var_s2+((u32)(func_80033634_ovl_01()&0xFF)%var_s1))*0xC);
  func_800377B0_ovl_01((arg2<<24)|(arg3<<16)|arg4,(s16)(F(arg0,u16,0x66)+F(temp_a3,u16,6)),temp_s5+F(temp_a3,s32,8)*0x178+0x38,temp_a3);
  var_s0--;
 } while(var_s0!=0);
}
