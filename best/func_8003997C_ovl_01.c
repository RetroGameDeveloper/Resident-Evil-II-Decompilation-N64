extern s32 D_800C7650_ovl_01; extern u32 D_801607F0_ovl_03[];
void func_8003997C_ovl_01(u16 *a0,u16 *a1,s32 a2){s32 x=D_800C7650_ovl_01;u32 *p=D_801607F0_ovl_03;u16 t;
if(x==p[0]){if(!a2)return;do{a1--;a0--;t=*a1;a2--;*a0=(t>>10)|((t<<10)&0xF800)|(t&0x7C1);}while(a2);return;}
if(x==p[1]){if(!a2)return;do{a1--;a0--;t=*a1;a2--;*a0=(t>>5)|((t<<5)&0x7C0)|(t&0x3F);}while(a2);return;}
if(!a2)return;do{a1--;a0--;a2--;*a0=*a1;}while(a2);
}
