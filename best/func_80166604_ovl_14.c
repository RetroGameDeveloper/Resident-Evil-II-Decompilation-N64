static __inline__ u16 __repair_inline(u16 a) { return a; }
s32 func_80077D48_ovl_01(s32,void *); s32 func_8008A974_ovl_01(void *,s32); s32 func_80162940_ovl_14(void *);
void func_80166604_ovl_14(void *p) {
 u8 st=*((u8*)p+6); s32 v;
s32 __repair_phase_v; u16 h;
 switch(st){
 case 0: func_80036764_ovl_01_510(p,3); *((u8*)p+0x1E9)=0; if(*((s16*)((u8*)p+0x270))){*((s32*)((u8*)p+0x1E8))=0x13000F00; h=*((u16*)((u8*)p+0x1AA)); *((u16*)((u8*)p+0x270))=0; *((u16*)((u8*)p+0x1E2))=0; *((u16*)((u8*)p+0x1AA))=h&0xBFFF; ++*((u8*)p+6);} break;
 case 1: *((u8*)p+0x1E9)=0; h=*((u16*)((u8*)p+0x1E2))+0x48; *((u16*)((u8*)p+0x1E2))=h; *((s32*)((u8*)p+0x2C))+=(s16)h; func_8008A974_ovl_01(p,0x100); v=*((s32*)((u8*)p+0x2C))+(s16)*((u16*)((u8*)p+0x1E2))+0x48; if(v>=0){*((u8*)p+0x2CE)=3; func_80077D48_ovl_01(2,p); func_80162940_ovl_14(p); __repair_phase_v=*((s32*)p); *((u8*)p+0x1E8)=0; __repair_phase_v&=-9; *((s32*)p)=__repair_phase_v; ++*((u8*)p+6);} break;
 case 2: *((s32*)((u8*)p+0x2C))=0; v=func_80036764_ovl_01_510_24(p,0x13,0,0); *((u8*)p+6)+=v; break;
 case 3: func_80036764_ovl_01_510(p,3); *((u8*)p+0x2CE)=4; h=__repair_inline(*((u16*)((u8*)p+0x2C8))); *((u16*)((u8*)p+0x2C8))=h|2; if(*((s16*)((u8*)p+0x270))) *((s32*)((u8*)p+4))=0x010E0000; break;
 }
}
