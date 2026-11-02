s32 func_800334F8_ovl_01(void*,s32,s32,s32); s32 func_80089D34_ovl_01(void*,s32,s32,s32); s32 func_80032B8C_ovl_01(void*,s32); s32 func_80033678_ovl_01(void*); s32 func_80077D48_ovl_01(s32,void*); s32 func_801672F4_ovl_30(void*,s32,s32); s32 func_80167B9C_ovl_30(void*); extern s16 D_80167CEC_ovl_30;
void func_80166664_ovl_30(void *arg0, s32 arg1, s32 arg2) {
s16 temp_s1; u8 *p=(u8*)arg0;
if (p[6] == 0) { p[6]=1; *(s32*)(p+0x1e8)=0x07000f00; func_800334F8_ovl_01(NULL,arg1,arg2,0); func_80089D34_ovl_01(arg0,arg1,arg2,0x100); p[0x207]=0; return; }
func_800334F8_ovl_01(arg0,arg1,arg2,0); if(func_80089D34_ovl_01(arg0,arg1,arg2,0x100)!=0){p[5]=3;*(u16*)(p+6)=0;}
func_80032B8C_ovl_01(arg0,0);func_80033678_ovl_01(arg0);
if((*(u32*)*(u32**)(p+0x214)&0x10000)&&p[7]==0){p[7]=1;func_80077D48_ovl_01(3,arg0);p[0x207]=15;}
temp_s1=D_80167CEC_ovl_30;
if(*(s8*)(p+0x207)!=0){func_801672F4_ovl_30(arg0,(temp_s1+1)&0xff,1);func_801672F4_ovl_30(arg0,(temp_s1+3)&0xff,1);p[0x207]=(u8)(p[0x207]-1);}
func_80167B9C_ovl_30(arg0);
}
