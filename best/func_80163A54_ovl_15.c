typedef struct{u8 x[0x300];} Obj;
extern void func_8016454C_ovl_15(void); extern void (*D_80166044_ovl_15[])(void*,s32,s32);
void func_80164554_ovl_15(Obj*a,s32 b,s32 c){if(a->x[5]!=255){a->x[5]=255;func_8016454C_ovl_15();} D_80166044_ovl_15[a->x[0x26e]](a,b,c);}
extern void func_80077D48_ovl_01(s32,void*); extern void func_8016528C_ovl_15(void*); extern s32 func_80036764_ovl_01(void*,s32,s32,s32);
void func_801644B0_ovl_15(Obj*a){u8 st=a->x[6]; if(st==0){if(!a->x[0x2ce])func_80077D48_ovl_01(0,a);a->x[0x26f]|=128;func_8016528C_ovl_15(a);a->x[6]++;} else if(st!=1)return; if(func_80036764_ovl_01(a,10,3,0)){*(s32*)(a->x+4)=0x1010000;a->x[0x26f]&=127;}}
extern void (*D_80166010_ovl_15[])(void*,s32,s32); extern s32 saved_reg_s1,saved_reg_s2;
void func_80163A54_ovl_15(Obj*a,s32 x,s32 y,s32 z,s32 w){D_80166010_ovl_15[a->x[5]](a,x,y);}
extern u8 D_800C7650_ovl_01[];
void func_80162CE0_ovl_15(Obj*a){u8 x; if(*(u16*)(D_800C7650_ovl_01+0x19a8e)==0)return; if(*(s32*)(D_800C7650_ovl_01+0x19a5c)&16)return; if(*(u8*)(D_800C7650_ovl_01+0x19cef))return; if(*(s8*)(a->x+0x2c0))return; if(a->x[0x25c]&4)return; x=a->x[0x2c2]; if(x!=0 && x!=7)return; a->x[0x2c0]=1;}
