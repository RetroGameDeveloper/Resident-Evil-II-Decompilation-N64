typedef struct {u32 a; void *(*fn)(void*,s32,s32);} Obj284; void func_80028420_ovl_01(Obj284 *p){void *r; r=p->fn(p,0,0x84); *(s32*)((u8*)r+0x80)=0;}
extern u8 D_8010B2C8_ovl_01[]; void func_8004CE44_ovl_01(s32 i){u8 *p; p=D_8010B2C8_ovl_01+i*0x1C8; *(u16*)p=0;}
extern s32 func_80007450(void*,s32,s32); extern s32 func_8000DCB0(s32); extern u8 D_80139AD0[]; typedef struct {u8 pad[0x390]; s32 *sub;} ObjCE; typedef struct{u8 pad[0x1B8]; s32 value;} Sub;
void func_8004CE70_ovl_01(s32 x){Sub *p; ObjCE *o; o=(ObjCE*)D_8010B2C8_ovl_01; p=(Sub*)o->sub; if(p){p->value=x; *(s16*)p=2; func_80007450(D_80139AD0,0,0); func_8000DCB0(0);}}
void func_8004CEC0_ovl_01(s32 i){u8 *p; p=D_8010B2C8_ovl_01+i*0x1C8; *(u16*)p |= 0x40;}
