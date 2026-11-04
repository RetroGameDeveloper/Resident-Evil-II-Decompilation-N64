typedef void(*Fn)(void*,void*,void*);
extern Fn D_80166738_ovl_35[];
extern Fn D_80166728_ovl_35[];
extern void func_80089D34_ovl_01(void*,void*,void*,s32);
extern void func_801661F0_ovl_35(void*,s32,s32);
extern void func_80164604_ovl_35(void*,void*,void*);
extern u8 D_800C7650_ovl_01[];

void func_8016488C_ovl_35(void*a0,void*a1,void*a2){
    if(*((u8*)a0+6)==0){
        func_801661F0_ovl_35(a0,0,7);
        func_80164604_ovl_35(a0,a1,a2);
    }else{
        ((Fn*)D_80166728_ovl_35)[*((u8*)a0+6)](a0,a1,a2);
        func_80089D34_ovl_01(a0,a1,a2,0x100);
    }
}
