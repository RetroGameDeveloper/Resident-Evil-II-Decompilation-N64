typedef struct {u8 pad[0x2cf];u8 count;u8 p[8];s32 reset;} Obj;
typedef struct {u8 b[0x20];} __attribute__((packed)) Pack;
extern Pack D_80166FF0_ovl_16;
extern u8 D_800E10D0_ovl_01[],D_800C7650_ovl_01[];
s32 func_80083800_ovl_01(s32,void*,void*);
s32 func_80166E0C_ovl_16(void*,s32,s32,s32,s32,s32,void*);
void func_801650CC_ovl_16(Obj *arg0){Obj*p=arg0;u8*scratch;u8 n;Pack tmp=D_80166FF0_ovl_16;
 if(!(p->count&1)){scratch=(u8*)&tmp+(p->count>>1)*8;func_80083800_ovl_01((s16)(*(s16*)(D_800C7650_ovl_01+0x18000+0x1c74)<<11),scratch,scratch);func_80166E0C_ovl_16(D_800E10D0_ovl_01,0,2,0x2400,0,0,scratch);}
 n=p->count+1;p->count=n;if((n&255)==7)p->reset=0;}
