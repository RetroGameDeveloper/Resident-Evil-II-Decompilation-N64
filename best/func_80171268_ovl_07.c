void func_801712D4_ovl_07(s16 **arg0) { s16 *p=*arg0; u32 i=0; do { *p=0; i++; p+=2; } while(i<0x140); *arg0=p; }
void func_80171268_ovl_07(s16 **arg0, u8 **arg1) { u8 *src=*arg1; s16 *dst=*arg0; u32 i=0; u8 *q=src+1; do { u8 r=q[1], g=q[0], b=*src; q+=3; src+=3; i++; *dst=(((r>>3)*2)+((g>>3)<<6)+((b>>3)<<11))|1; dst+=2; } while(i<0x140); *arg0=dst; *arg1=src; }
void func_80171204_ovl_07(s16 **arg0, u8 **arg1) { s16 *dst=*arg0; u8 *src=*arg1; u32 x=0, bit=0; do { u8 *p=src+x; do { s16 *q=dst; s16 v; dst+=2; v=1; if (((*p >> bit)&1)!=0) v=-1; bit++; *q=v; } while(bit<8); x++; bit=0; } while(x<0x28); *arg1=src+0x28; *arg0=dst; }
extern u8 D_800E9128_ovl_01[];
void func_801711DC_ovl_07(s32 arg0, s16 arg1) { *(s16 *)(D_800E9128_ovl_01 + arg0 * 0x2C)=arg1; }
