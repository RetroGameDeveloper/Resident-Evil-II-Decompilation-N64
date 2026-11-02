extern u8 D_80162FA0_ovl_25[], D_800E10F8_ovl_01[], D_800C7650_ovl_01[];
extern s32 func_80032F94_ovl_01(void *, void *, s32);
extern s32 func_80089D34_ovl_01(void *, s32);
void func_801623B8_ovl_25(void *a) { u8 *p=a; volatile u32 frame[3]; u8 *entry=D_80162FA0_ovl_25+((*(u16 *)(p+0x1aa)&1)*9); u8 n=entry[2]; if((func_80032F94_ovl_01(a, (u8 *)*(u32 *)(p+0x234)+n*0x178+0x4c, 0x384)<<16)==0) *(u32 *)(p+4)=0x01030000; }
void func_80162A70_ovl_25(void *a) { u8 *p=a; u8 v=p[6]; if(v==1){func_80089D34_ovl_01(a,0x100);if(!(*(u8 *)(D_800C7650_ovl_01+0x19cef)&0x80))p[6]=2;} else if(v==0){*(u32 *)(p+0x1e8)=0x05000f00;p[6]=1;} else if(v==2){*(u32 *)(p+4)=0x01010000;} }
