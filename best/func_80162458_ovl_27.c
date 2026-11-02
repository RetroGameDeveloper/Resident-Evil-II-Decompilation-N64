extern s32 func_80032D44_ovl_01(s32,s32,s32,s32); extern s32 func_80033634_ovl_01(void); extern void func_80089D34_ovl_01(void*,void*,void*,s32); extern void func_801636DC_ovl_27(void*,s32); extern u8 D_800C7650_ovl_01[]; extern u8 D_800E10D0_ovl_01[];
void func_80162458_ovl_27(u8 *p, void *x, void *y) {
 u8 *object=*(u8**)(p+0x250); u8 *sub=object+0x2B4; s32 state=p[6]; s32 temp,value; volatile s32 unused[2];
 if(state<5) switch(state) {
 case 0: p[6]=1; func_80033634_ovl_01();
 case 1: value=func_80033634_ovl_01(); temp=value; *(s32*)(p+0x1E8)=(((value&1)+5)<<24)+((value&7)<<16)+0x700;
 if(sub[0]) temp=*(s32*)(D_800C7650_ovl_01+0x18000+0x1D3C); else temp=(s32)D_800E10D0_ovl_01;
 *(s16*)(p+0x1F4)=func_80032D44_ovl_01(*(s16*)(p+0x2A),*(s16*)(p+0x32),*(s16*)((u8*)temp+0x2A),*(s16*)((u8*)temp+0x32));
 *(s16*)(p+0x2BC)=*(s16*)(p+0x1F4)-*(u16*)(object+0x66); value=func_80033634_ovl_01(); temp=*(u16*)(p+0x2C2)-((value&31)|0x100); *(s16*)(p+0x2C2)=temp; if((s16)temp < -0x3FF)p[6]=2; break;
 case 2: if(sub[0xF]) {*(s32*)(p+0x1E8)=0x1000700+(*(u8*)(p+0x2B4)<<19); p[6]=3;} break;
 case 3: *(s16*)(p+0x2BC)=*(u16*)(p+0x1F4)-*(u16*)(object+0x66); value=func_80033634_ovl_01(); temp=*(u16*)(p+0x2C2)+((value&31)|0x100); *(s16*)(p+0x2C2)=temp; func_80089D34_ovl_01(p,x,y,0x200); if(*(s16*)(p+0x2C2)>=0)p[6]=4;
 }
 func_80089D34_ovl_01(p,x,y,0x200); func_801636DC_ovl_27(p,0);
}
