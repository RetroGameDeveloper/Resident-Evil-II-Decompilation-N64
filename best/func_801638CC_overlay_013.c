extern u8 D_800C7650_ovl_01[];
void func_801638CC_overlay_013(void *arg0, void *arg1, void *arg2) {
u8 *p=arg0; u8 *base; u8 *base2; s32 v; s16 t;
if (p[6] == 0) {
*(s32*)(p+0x1E8)=0x04000700;
base=(u8*)D_800C7650_ovl_01 + 0x18000;
t=*(u16*)(base+0x1CDE)-0xA8C;
*(s16*)(p+0x2C0)=t;
if ((s16)t - *(s32*)(p+0x2C) < 0) p[0x2B4]=0; else p[0x2B4]=1;
*(s16*)(p+0x1E2)=0; p[0x2B5]=0; p[6]=1;
} else if (p[6] != 1) return;
v=(u8)p[0x2B5]; v--; p[0x2B5]=v;
if ((v&255)==255) { func_80077D48_ovl_01(1,arg0); p[0x2B6]=14; }
base2=(u8*)D_800C7650_ovl_01 + 0x18000;
func_80032DEC_ovl_01(arg0,*(s32*)(base2+0x1AA8),*(s32*)(base2+0x1AB0),0x60);
if(*(s16*)(p+0x1E0)<300) *(s16*)(p+0x1E0)+=5;
func_80089D34_ovl_01(arg0,arg1,arg2,0x200);
if(!p[0x2B4]) { if(*(s16*)(p+0x2C0)<*(s32*)(p+0x2C)) *(s32*)(p+0x2C)-=40; }
else { if(*(s32*)(p+0x2C)<*(s16*)(p+0x2C0)) *(s32*)(p+0x2C)+=40; }
if(!p[0xD]) {
if((u32)(*(s16*)(p+0x2C0)-*(s32*)(p+0x2C)+0x167)<0x2CF) {
if(*(s16*)(p+0x1E0)>=0xE7) {func_80165BE8_ovl_13(arg0,12);return;}
v=func_80033634_ovl_01(); v&=0x7f; ((void(*)(void))0x80065658)(); p[0x2BC]=v; p[0x2BB]=0; func_80165BE8_ovl_13(arg0,8); return;
}
} else func_80032C08_ovl_01(arg0,0,0);
}
