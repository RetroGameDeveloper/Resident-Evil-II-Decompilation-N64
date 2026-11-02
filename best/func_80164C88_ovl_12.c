typedef void (*Fn)(void *);
extern Fn func_80166D80_ovl_33[];
void func_80165280_ovl_12(void *);
void func_80164C88_ovl_12(void *arg0) { if(!(((u8*)arg0)[0x2BF]&0x80)) { func_80166D80_ovl_33[((u8*)arg0)[5]-1](arg0); } else { func_80165280_ovl_12(arg0); } }
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_801659DC_ovl_12(void *, s32);
void func_80165140_ovl_12(void *arg0) {
 if(!((u8*)arg0)[7]) { ((u8*)arg0)[7]=1; *(s32*)((u8*)arg0+0x1E8)=0x160F0300; ((u8*)arg0)[0x26F]&=127; }
 if(func_80089D34_ovl_01(arg0,0,0,0x400)) { func_801659DC_ovl_12(arg0,1); ((u8*)arg0)[0x2BF]=0; *(s32*)((u8*)arg0+4)=0x01020000; }
}
typedef void (*Fn0)(void *);
extern Fn0 func_80166DD8_ovl_20[];
s32 func_80033634_ovl_01(void);
s32 func_80166900_ovl_12(void *, s32, s32);
void func_80165280_ovl_12(void *arg0) { func_80166DD8_ovl_20[9+((u8*)arg0)[6]](arg0); func_80166900_ovl_12(arg0,func_80033634_ovl_01()&15,0); func_80166900_ovl_12(arg0,func_80033634_ovl_01()&15,0); func_80166900_ovl_12(arg0,func_80033634_ovl_01()&15,5); }
