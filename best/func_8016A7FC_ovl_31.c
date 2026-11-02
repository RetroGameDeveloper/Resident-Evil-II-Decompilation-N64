s32 func_8016A7FC_ovl_31(void*a,s16 b){s32 t=(~b&1)<<10;s32 x=t; s32 y=x-*(u16*)((char*)a+0x66);y+=0x400;y&=0xfff;if((u32)y<0x800)return x;return x|0x800;}
