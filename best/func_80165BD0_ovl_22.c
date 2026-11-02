extern u32 D_80166814_ovl_22[];
void func_80165BD0_ovl_22(void *p){*(u32*)((u8*)p+4)=*(u32*)((u8*)p+0x298);if(*(u8*)((u8*)p+4)==1){volatile u32 *tab=D_80166814_ovl_22;u32 i=*(u8*)((u8*)p+5);((void(*)(void))tab[i])();}else{*(u32*)((u8*)p+4)=0x01010000;}}
