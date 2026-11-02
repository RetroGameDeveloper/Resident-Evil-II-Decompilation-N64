extern u8 D_800E10D0_ovl_01[];
void func_8016753C_ovl_30(void *a0,s32 a1,s32 a2) {
 volatile u8 *g=D_800E10D0_ovl_01; u8 *p=(u8*)a0; u32 val;
 *((void**)(g+0x250))=a0;
 val=*((u32*)(p+0x224));
 *((u32*)(g+0x224))=val;
 *((u32*)(g+4))=0x05000000;
 val=*((u32*)(p+0x228));
 *((u32*)(g+0x228))=val;
 g[5]=a1+a2;
}
