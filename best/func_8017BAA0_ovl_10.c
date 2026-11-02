typedef struct {u8 b[0x2000];} Glob;
typedef struct {u8 b[0x1B0];} Player;
typedef struct {u8 b[0x1AA];} Row;
extern Glob D_800C7650_ovl_01;extern Player *D_8017E680_ovl_10_player;
extern u8 D_800E10D0_ovl_01[];extern Row D_8017E4B0_ovl_10[];extern u8 D_8017E654_ovl_10[];extern u8 D_8017E680_ovl_10[];extern u8 D_8017E688_ovl_10[];extern u8 D_8017E6B4_ovl_10;
extern s32 func_80033174_ovl_01(void*,void*,void*);
extern void func_8017C1B4_ovl_10(s16);extern void func_8017BDEC_ovl_10(void);extern void func_8017C0E8_ovl_10(void);extern void func_8017C5E4_ovl_10(void);
void func_8017BAA0_ovl_10(void){s32 *g=(s32*)((u8*)&D_800C7650_ovl_01+0x18000);Player *p=(Player*)g[0x1CD0/4];s32 c=p->b[8];s32 i=14;Row *row;u8 *r;u8 typ;
*(u16*)(D_8017E680_ovl_10+4)=0;*(u16*)(D_8017E680_ovl_10+0x2e)=0;
if(c==0x34&&!(*(u16*)(p->b+0x1aa)&1))c=0x33;if(c==0x39)c=0x2e;for(i=14;i>0&&D_8017E654_ovl_10[i]!=c;i--){}
row=(Row*)(D_8017E4B0_ovl_10+i*0x1c);*(Row**)(D_8017E680_ovl_10+0x3c)=row;*(s32*)(D_8017E680_ovl_10+0x28)=*(s32*)row;*(s32*)(D_8017E680_ovl_10+0x30)=*(s32*)(row->b+4);
*(u16*)(D_8017E680_ovl_10+0x2c)=*(u16*)((u8*)g+0x1ae6)&0xfff;
if(func_80033174_ovl_01(D_800E10D0_ovl_01,p,D_8017E654_ovl_10)&0xff){*(u16*)(D_8017E680_ovl_10+0x2c)+=*(u16*)(row->b+0xc);*(u16*)(D_8017E680_ovl_10+0x2e)=*(u16*)(row->b+0xa);}else{*(u16*)(D_8017E680_ovl_10+0x2c)+=*(u16*)(row->b+0x10);*(u16*)(D_8017E680_ovl_10+0x2e)=*(u16*)(row->b+0xe);}
typ=*(s16*)(row->b+0x16);if(typ==0){if(!(D_8017E6B4_ovl_10&1)){r=(u8*)(*(u32*)((u8*)g+0x1cb4))+*(s16*)(row->b+0x18)*0x178+0x38;}else{r=(u8*)(*(u32*)((u8*)g+0x1d3c))+((*(s16*)(row->b+0x18)*3*16-*(s16*)(row->b+0x18))*8)+0x38;}}else{Player *q=(Player*)g[0x1cd0/4];r=q->b+0x234+((*(s16*)(row->b+0x18)*3*16-*(s16*)(row->b+0x18))*8)+0x38;}
*(s32*)(D_8017E688_ovl_10+8)=*(s32*)(r+0x18)+*(s16*)(row->b+0x12);*(u16*)(D_8017E688_ovl_10+0x2e)=0;*(u16*)(D_8017E688_ovl_10-8)=*(u16*)(row->b+8);*(s32*)(D_8017E688_ovl_10+0x10)=*(s32*)(r+0x14);*(s32*)(D_8017E688_ovl_10+0x18)=*(s32*)(r+0x1c);*(s32*)(D_8017E688_ovl_10+0x14)=*(s32*)(r+0x18)-0x12c;func_8017C1B4_ovl_10(*(s16*)(row->b+0x12));func_8017BDEC_ovl_10();func_8017C0E8_ovl_10();func_8017C5E4_ovl_10();}
