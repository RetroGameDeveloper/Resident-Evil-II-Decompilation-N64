s32 func_80052D40_ovl_01(s32,s32,s32,s32); extern u8 D_800C7650_ovl_01[];
void func_801636C0_overlay_015(u8 *p) {
switch(p[0x2c3]) {
case 0: func_80052D40_ovl_01(10,120,50,0); p[0x206]=2; p[0x2c3]++; p[0x206]--; if(p[0x206]) return; break;
case 1: {u32 *q=(u32*)(D_800C7650_ovl_01+0x18000+0x1a5c); p[0x206]=5; *q|=4; p[0x2c3]++; p[0x206]--; if(p[0x206]) return;}
case 2: func_80052D40_ovl_01(8,85,40,0); p[0x206]=10; {u32 *q=(u32*)(D_800C7650_ovl_01+0x18000+0x1a5c); *q=(*q&~5)|8;} break;
case 3: p[0x2c3]++; break;
case 4: p[0x206]--; if(p[0x206])return; {u32 *q=(u32*)(D_800C7650_ovl_01+0x18000+0x1a5c); *q&=~9;} p[0x2c3]=0; break;
case 5: break;
default: break;
}
}
