extern u8 D_800C7650_ovl_01[]; extern u8 D_800E10D0_ovl_01[]; extern s32 D_800E10D4_ovl_01; extern u8 D_800E8FC8_ovl_01[];
void func_80163F80_ovl_22(void *arg0) { u8 *p=arg0,*s1,*s2; u16 sp18,sp1A,sp1C; s32 v; s2=*(u8**)(p+0x234); v=p[6];
switch(v){case 0: *(u16*)(p+0x1F4)=0;p[6]++;*(s32*)p|=4; case 1:
func_80036764_ovl_01_510(p,12); s1=D_800C7650_ovl_01+0x18000;p[6]+=func_80036764_ovl_01_510(p,12);
if(!func_80161D90_ovl_22(p,12,47,50,0x226))break;
func_80077D48_ovl_01(2,p);D_800E10D4_ovl_01=0x02000000;p[0x1A85]+=func_80033174_ovl_01(p,D_800E10D0_ovl_01);
sp18=*(u16*)(s2+0x11EE);sp1A=*(u16*)(s2+0x11F2);sp1C=*(u16*)(s2+0x11F6);if((s16)sp1A < *(s16*)(p+0x25E)-0xBB8)sp1A=*(u16*)(p+0x25E)-0xBB8;
func_800377B0_ovl_01(0x2400,0,D_800E8FC8_ovl_01,&sp18);sp1A+=0x64;func_800377B0_ovl_01(0x2B00,0,D_800E8FC8_ovl_01,&sp18);func_80052C00_ovl_01(3,0);func_80052C9C_ovl_01(8,255,0);func_80052D40_ovl_01(4,255,0x28,8);func_80162094_ovl_22(0x28);break;
case 2:p[0x2C8]=0x32;*(s32*)(p+4)=0x01010000;*(s32*)p&=~4;}}
