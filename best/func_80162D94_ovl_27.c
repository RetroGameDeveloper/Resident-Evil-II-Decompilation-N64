extern void (*D_80163D48_ovl_27[])(void);extern void func_801626D4_ovl_27(void*,s32,s32);extern void func_801636DC_ovl_27(void*,s32);
void func_80162D94_ovl_27(void *p,s32 a1,s32 a2){u8 *b=p;u8 *s3=(u8*)(*(u32*)(b+0x250)+0x2B4);u8 state=b[6];
if(state<2)D_80163D48_ovl_27[state]();
if(b[0x2C7]){u8 v=s3[0xD];if(v==7){func_801626D4_ovl_27(p,a1,a2);b[4]=1;return;}if(v==0x45){func_801626D4_ovl_27(p,a1,a2);b[5]=4;*(u16*)(b+6)=0;}}
func_801636DC_ovl_27(p,0);}
