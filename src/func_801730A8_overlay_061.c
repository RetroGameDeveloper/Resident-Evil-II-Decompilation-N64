/* identical to func_80166518_ovl_33 (matched), with its names changed by decompdecomp */
typedef s32 (*Fn)(void); extern Fn D_80167210_ovl_33[]; s32 func_80040E88_ovl_01(s32,s32); s32 func_80036038_ovl_01(s32,s32,s32,s32); s32 func_800362C0_ovl_01(s32,s32,s32); s32 func_80036764_ovl_01(s32,s32); extern s32 D_801672C0_ovl_33[],D_80167348_ovl_33[],D_801673C0_ovl_33[]; extern u8 D_801314F0_ovl_01[];
void func_80165A58_ovl_33(u8*p){u32 n=(p[5]-1)*9+p[0x26e];((Fn*)D_80167210_ovl_33)[n]();}
void func_801730A8_overlay_061(s32 a0,s32 p){func_80040E88_ovl_01(p+0x58,p+8);func_80040E88_ovl_01(p+0x1d0,p+0x180);func_80040E88_ovl_01(p+0x348,p+0x2f8);func_80040E88_ovl_01(p+0x4c0,p+0x470);}
void func_80166568_ovl_33(s32 p,s32 a1){s32 r;r=func_80036038_ovl_01(*(s32*)(p+0x234),(s32)D_801672C0_ovl_33,a1,0);r=func_80036038_ovl_01(p,*(s32*)(p+0x234),(s32)D_80167348_ovl_33,r);func_80036038_ovl_01(p,*(s32*)(p+0x234),(s32)D_801673C0_ovl_33,r);}
void func_801665CC_ovl_33(s32 p){s32 s=*(s32*)(p+0x234);func_800362C0_ovl_01(s,(s32)D_801672C0_ovl_33,0);func_800362C0_ovl_01(p,s,(s32)D_80167348_ovl_33);func_800362C0_ovl_01(p,s,(s32)D_801673C0_ovl_33);}
