extern s32 func_80004CFC(s32, void *, s32, s32); extern u8 D_800EA230_ovl_01; extern u8 D_800C7650_ovl_01[];
void func_80031AE0_ovl_01(void){
 u8 *v1; s32 a1,t0,a0,a3,t3,a2;
 func_80004CFC(0xFD6,&D_800EA230_ovl_01,0,0);
 v1=D_800C7650_ovl_01+0x18000; a1=v1[0x1A76]; t0=0x300; a0=*(s32*)(v1+0x284); a3=-1; t3=-8; a2=4;
 *(s32*)(v1+0x284)=a0+a1*t0;
 do { a0=(a0+8)&t3; *(s32*)(D_800C7650_ovl_01+0x18000+a2+0x1D38)=a0; *(s32*)a0=0; a0+=t0; a2+=4; a1--; a3++; } while(a1);
 *(s32*)(D_800C7650_ovl_01+0x18000+0x28C)= (s32)(D_800C7650_ovl_01+0x18000+0x19D40+a3*4);
}
