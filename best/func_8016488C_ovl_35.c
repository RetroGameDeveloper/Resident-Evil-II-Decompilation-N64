typedef void(*Fn)(void*,void*,void*);
typedef struct { u8 pad[6]; unsigned int b : 8; } Obj;
extern volatile Fn D_80166728_ovl_35[];
extern void func_80089D34_ovl_01(void*,void*,void*,s32);
extern void func_801661F0_ovl_35(void*,s32,s32);
extern void func_80164604_ovl_35(void*,void*,void*);

void func_8016488C_ovl_35(void*a0,void*a1,void*a2){
    Obj *o = a0;
    u8 *p = a0;
    s32 ff;
    if(p[6] == 0){
        func_801661F0_ovl_35(a0,0,7);
        func_80164604_ovl_35(a0,a1,a2);
    }else{
        ff = o->b;
        D_80166728_ovl_35[ff](a0,a1,a2);
        func_80089D34_ovl_01(a0,a1,a2,0x100);
    }
}
