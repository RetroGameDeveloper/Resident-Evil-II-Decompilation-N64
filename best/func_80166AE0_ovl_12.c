extern u8 D_800C7650_ovl_01; extern u8 D_800E10D0_ovl_01;
void func_80166A48_ovl_12(s32 a,s32 b){volatile u32 base=0x18000;u8 *p;if(a)p=*(u8 **)((u8*)&D_800C7650_ovl_01+base+0x1d3c);else p=&D_800E10D0_ovl_01;p[4]=2;p[5]=b+2;p[6]=0;p[7]=0;p[0x26f]|=0x80;}
void func_80166A9C_ovl_12(s32 a){volatile u32 base=0x18000;u8 *p;if(a)p=*(u8 **)((u8*)&D_800C7650_ovl_01+base+0x1d3c);else p=&D_800E10D0_ovl_01;p[4]=3;p[5]=0;p[6]=0;p[7]=0;}
void func_80166AE0_ovl_12(void *a){volatile u32 base=0x18000;u8 *p=(u8*)&D_800C7650_ovl_01+base;if(p[0x1c22]!=*((u8*)a+0x1a2)){*((u8*)a+5)=9;*((u16*)((u8*)a+6))=0;*(u16*)(p+0x1a78)&=0xffdf;}}
void func_80166B20_ovl_12(void *a){volatile u32 base=0x18000;u8 *p=(u8*)&D_800C7650_ovl_01+base;if(*(u16*)(p+0x1a78)&0x40){*((u8*)a+5)=11;*((u16*)((u8*)a+6))=0;}}
