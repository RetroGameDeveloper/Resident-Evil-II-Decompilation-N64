typedef struct { u8 pad[5]; u8 f5; } S5; typedef void (*Fn)(void *);
extern Fn D_8016E7B8_ovl_11[]; void func_8016B470_ovl_11(S5 *p){ D_8016E7B8_ovl_11[p->f5](p); }
extern void func_80032DEC_ovl_01(void *,s16,s16,s32); extern void func_800334F8_ovl_01(void *,s32,s32,s32); extern void func_80089D34_ovl_01(void *,s32,s32,s32); extern void func_80032B8C_ovl_01(void *,s32);
void func_8016B514_ovl_11(void *p){ u8 state=((u8*)p)[6]; if(state==0){((u8*)p)[6]=1;*(s32*)((u8*)p+0x1e8)=((s32)((u8*)p)[0x2b4]<<24)+0xf00;} else if(state!=1)return; func_80032DEC_ovl_01(p,*(s16*)((u8*)p+0x260),*(s16*)((u8*)p+0x262),0x24); func_800334F8_ovl_01(p,*(s32*)((u8*)p+0x1a4),*(s32*)((u8*)p+0x218),0); func_80089D34_ovl_01(p,*(s32*)((u8*)p+0x1a4),*(s32*)((u8*)p+0x218),0x100); func_80032B8C_ovl_01(p,0); }
extern Fn D_8016E7CC_ovl_11[]; extern void func_8016D6F8_ovl_11(void *);
void func_8016C034_ovl_11(void *p){ s16 v; D_8016E7CC_ovl_11[((u8*)p)[5]](p); v=*(s16*)((u8*)p+0x1a8); if(v && (*(s32*)(*(u32*)((u8*)p+0x234)+0x50)-0x1f4)<v && (((u8*)p)[0x1e9]&15)==1)func_8016D6F8_ovl_11(p);}
extern Fn D_8016E7DC_ovl_11[]; extern void func_80077B0C_ovl_01(u32,void *);
void func_8016CA78_ovl_11(void *p){ s16 v; D_8016E7DC_ovl_11[((u8*)p)[5]](p); v=*(s16*)((u8*)p+0x1a8); if(v && (*(s32*)(*(u32*)((u8*)p+0x234)+0x50)-0x1f4)<v && (((u8*)p)[0x1e9]&15)==1){func_8016D6F8_ovl_11(p);func_80077B0C_ovl_01(0x2020001,(u8*)p+0x28);}}
