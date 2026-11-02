typedef struct{u8 pad[5];u8 st;} S5;typedef void(*F)(void*,void*,void*);extern F D_8016E12C_ovl_11[],D_8016E16C_ovl_11[];void func_801629E4_ovl_11(S5*p,void*a1,void*a2){void*t; t=a2;D_8016E12C_ovl_11[p->st](p,a1,t);D_8016E16C_ovl_11[p->st](p,a1,t);}
typedef void(*F0)(void*);extern F0 D_8016E0F4_ovl_11[];void func_801629AC_ovl_11(void*p){D_8016E0F4_ovl_11[(*(u16*)((u8*)p+0x1aa))&63](p);}
extern void func_80077D48_ovl_01(u32,void*);void func_80162EF8_ovl_11(void*p){u32 x,t; x=*(u32*)(*(u32*)((u8*)p+0x214));t=x>>28;if(x&0x08000000){if(t<2)func_80077D48_ovl_01(t,p);}}
void func_801652E4_ovl_11(void*p){}
