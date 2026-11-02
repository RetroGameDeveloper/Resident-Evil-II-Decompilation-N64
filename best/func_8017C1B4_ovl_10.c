extern unsigned char D_8017E6C0_ovl_10[]; extern unsigned char D_800C7650_ovl_01[];
void func_8017C1B4_ovl_10(void) { s16 i; unsigned char *p=D_8017E6C0_ovl_10; i=0; do { s16 *q=(s16*)(p+((i<<16)>>14)); q[2]=0; q[3]=0; i++; } while(i<4); *(void**)(D_800C7650_ovl_01+0x18000+0x290)=p; }
