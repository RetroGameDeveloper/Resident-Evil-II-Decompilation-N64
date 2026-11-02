typedef struct { s32 x[10]; } R10;
extern s32 D_800C7614_ovl_01; extern void func_8006B3A4_ovl_01(s32);
extern s32 D_800C4E40_ovl_01,D_800C4E44_ovl_01,D_800C5684_ovl_01,D_800C5268_ovl_01,D_800C7618_ovl_01,D_800C7620_ovl_01;
typedef struct { unsigned char pad[0x28]; s32 x,y; } Obj28;
extern Obj28 *D_800C568C_ovl_01,*D_800C5690_ovl_01,*D_800C75DC_ovl_01,*D_800C75E8_ovl_01;
extern void func_800879D0_ovl_01(void *);
extern s32 D_800C4F20_ovl_01,D_800C75E0_ovl_01,D_800C75EC_ovl_01,D_800C75F0_ovl_01,D_800C75F4_ovl_01,D_800C75F8_ovl_01,D_800C75FC_ovl_01,D_800C7600_ovl_01,D_800C7604_ovl_01,D_800C7608_ovl_01,D_800C760C_ovl_01,D_800C7610_ovl_01;
extern void func_80025D80_ovl_01(void*,s32,s32,s32);
void func_80025E6C(void){s32 x=*(volatile s32*)&D_800C7614_ovl_01; func_8006B3A4_ovl_01(x);}
void func_80025E90(void){s32 a=D_800C4E40_ovl_01; s32 b=D_800C4E44_ovl_01; s32 x=a+b; D_800C5684_ovl_01=x; D_800C568C_ovl_01->x=a;D_800C568C_ovl_01->y=x;D_800C5690_ovl_01->x=a;D_800C5690_ovl_01->y=x;D_800C75E8_ovl_01->x=a;D_800C75E8_ovl_01->y=x;D_800C75DC_ovl_01->x=a;D_800C75DC_ovl_01->y=x;}
void func_80025EF0(void){struct {s32 a,b;} *p=(void*)&D_800C7618_ovl_01; struct {s32 a,b,c;} *q=(void*)&D_800C7620_ovl_01; q->c=0;p->a=2;q->a=D_800C5268_ovl_01;p->b=(s32)q;func_800879D0_ovl_01(p);}
void func_80025DBC(void){s32 *p=&D_800C4F20_ovl_01+D_800C75E0_ovl_01*10; p[1]=D_800C75F0_ovl_01;p[2]=D_800C75F4_ovl_01;p[3]=D_800C75F8_ovl_01;p[4]=D_800C75FC_ovl_01;p[5]=D_800C7600_ovl_01;p[6]=D_800C7604_ovl_01;p[7]=D_800C7608_ovl_01;p[8]=D_800C760C_ovl_01;p[9]=D_800C7610_ovl_01;p[0]=D_800C75EC_ovl_01;func_80025D80_ovl_01(&D_800C4F20_ovl_01,D_800C75F0_ovl_01,D_800C75F4_ovl_01,D_800C75F8_ovl_01);}
