
typedef void (*Fn)(void);
extern Fn D_80167F68_ovl_30[];
void func_80166E74_ovl_30(void *a0, void *a1) { D_80167F68_ovl_30[*((u8*)a1+0x10)](); }
s32 func_80033634_ovl_01();
s32 func_8016714C_ovl_30(s16); s32 func_8016719C_ovl_30(s16);
void func_80166FE4_ovl_30(void *a0, void *a1) {
 s32 s1,s0,v0; u8 n;
 n=*((u8*)a1+0x12);
 if(n) *((u8*)a1+0x12)=n-1;
 else {s1=(func_80033634_ovl_01()&7)-3;s0=func_80033634_ovl_01()&3;v0=s0&2;if(s0&1){func_8016714C_ovl_30(s1);v0=s0&2;}if(v0)func_8016719C_ovl_30(s1);*((u8*)a1+0x12)=*((u8*)a1+0x11)*(func_80033634_ovl_01()&7);}
}
typedef void (*Fn3)(void*,void*,void*);
extern Fn3 D_80167F54_ovl_30[];
void func_80166974_ovl_30(void *a0, void *a1, void *a2) { D_80167F54_ovl_30[*((u8*)a0+5)](a2,a1,a1); }
s32 func_80089D34_ovl_01(void*,s32);
void func_80166928_ovl_30(void *a0) {
 if(*((u8*)a0+6)==0){*((u8*)a0+6)=1;*((s32*)((u8*)a0+0x1e8))=0xf00;}
 func_80089D34_ovl_01(a0,0x100); *((s16*)((u8*)a0+0x272))=1;
}
