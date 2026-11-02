extern u32 D_80168FEC_ovl_28[];
extern u32 D_80168FC0_ovl_28[];
extern u8 D_800C7650_ovl_01[];
s32 func_80032EA4_ovl_01(void*,void*,void*,s32);
void func_80168770_ovl_28(void *a) { ((void(*)(void))D_80168FEC_ovl_28[*((u8*)a+0x2bc)])(); }
void func_80165890_ovl_28(s32 *a1) { *a1 |= 0x4000; }
void func_8016585C_ovl_28(void *a) { ((void(*)(void))D_80168FC0_ovl_28[*((u8*)a+0x2b4)])(); }
void func_80163ED0_ovl_28(void *a) {
 u8 *p=a; u8 *base=D_800C7650_ovl_01+0x18000; s32 t;
 t=*(s32*)(p+0x28c);
 func_80032EA4_ovl_01(a,*(void**)(base+0x1aa8),*(void**)(base+0x1ab0),0x5f4);
 func_80032EA4_ovl_01(a,*(void**)(base+0x1aa8),*(void**)(base+0x1ab0),0x338);
 if((func_80032EA4_ovl_01(a,*(void**)(base+0x1aa8),*(void**)(base+0x1ab0),0x400)<<16)==0 && t>=0x9c5) *(u32*)(p+4)=0x01010000;
}
