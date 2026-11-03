extern s8 D_80112720_ovl_01; void func_80026858_ovl_01(void){D_80112720_ovl_01=10;}
extern s32 func_80001180(u8); extern s32 func_8004CC24_ovl_01(s32); extern u8 D_8010B280_ovl_01[];
typedef struct {u8 kind; u8 pad[3]; s32 (*cb)(void);} Entry;
void func_8004CC8C_ovl_01(s32 i){Entry *p; s32 x; p=(Entry*)(D_8010B280_ovl_01+i*8); x=func_80001180(p->kind); x=func_8004CC24_ovl_01(x); p->cb();}
extern void func_8004CD84_ovl_01(s32,s32 *); s32 func_8004CCD8_ovl_01(s32 a,s32 i){Entry *p; s32 x; p=(Entry*)(D_8010B280_ovl_01+i*8); x=func_80001180(p->kind); x=func_8004CC24_ovl_01(x); func_8004CD84_ovl_01(a,(s32*)p->cb); return x;}
extern s32 func_8004CE70_ovl_01(s32); void func_8004CD38_ovl_01(s32 i){Entry *p; s32 x; p=(Entry*)(D_8010B280_ovl_01+i*8); x=func_80001180(p->kind); x=func_8004CC24_ovl_01(x); func_8004CE70_ovl_01((s32)p->cb);}
