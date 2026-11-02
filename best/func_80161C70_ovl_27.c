extern u32 D_800C7650_ovl_01[];extern void (*D_80163CD4_ovl_27[])(void*,s32,s32);
extern void func_80163AD0_ovl_27(void*);extern void func_8004DB8C_ovl_01(void*);extern void func_8004DCE8_ovl_01(void*,s32);
void func_80161C70_ovl_27(void *p){u8 *b=p;u32 *g=(u32*)((u8*)D_800C7650_ovl_01+0x18000);u8 x;
if(!(g[0x1A60/4]&0x20000000)){
x=b[0x26F];if(x&0x7f)b[0x26F]=x-1;
x=b[0x2BE];if(x)b[0x2BE]=x-1;
D_80163CD4_ovl_27[b[4]](p,*(s32*)(b+0x1A4),*(s32*)(b+0x218));
if(!b[0x2C8]&&b[0x2C6]&&*(u16*)(*(u32*)(b+0x250)+0x2D4))func_80163AD0_ovl_27(p);
func_8004DB8C_ovl_01(p);func_8004DCE8_ovl_01(p,0x400);
}}
