extern s32 func_80033634_ovl_01(void); extern s32 func_800662B8_ovl_01(void *); extern u8 D_8016976A_ovl_29; extern u8 D_8016976B_ovl_29;
typedef struct { u8 p[0x2bc]; u8 f2bc; u8 f2bd; u16 f2be; } Obj;
typedef struct {u8 p[0x120]; void *f120;} Obj1;
typedef struct {u8 p[0xc]; s16 fC;} State;
void func_80169198_ovl_29(Obj *x, Obj1 *y, u32 a2){u8 s= x->f2bd; State *q; switch(s){case 0:q=y->f120;q->fC+=0x400;q=y->f120;if(q->fC<0x1001)break;q->fC=0x1000;x->f2bd=1;x->f2be=0;{s32 v=func_80033634_ovl_01()&0xff;u32 n=(v>>1)*0x92492493>>32;n>>=2;D_8016976B_ovl_29=7-(v-((n*14)));v=func_80033634_ovl_01()&0xff;n=(v>>1)*0x92492493>>32;n>>=2;D_8016976A_ovl_29=7-(v-n*14);}break;case 1:q=y->f120;q->fC-=x->f2be;x->f2be+=0x64;q=y->f120;if(q->fC<0){q->fC=0;x->f2bc=0;x->f2bd=0;
x->f2bc=0;D_8016976B_ovl_29=0;D_8016976A_ovl_29=0;}break;}func_800662B8_ovl_01(x);}
