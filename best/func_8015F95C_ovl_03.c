extern u8 D_80160B9C_ovl_03[];
extern u8 D_80161400_ovl_03[];
extern u8 D_800DF650_ovl_01[];
extern u8 D_800C7650_ovl_01[];
s32 func_80047B34_ovl_01(void *, s32);
s32 func_800439B8_ovl_01(s32, void *, s32, s32);
void func_8015F95C_ovl_03(s8 color,s8 color2,s32 flag){
 s32 i=0; s32 off=0x6e0; u8 *p=D_80160B9C_ovl_03+0x6fc;
 s32 *head=(s32*)(D_800DF650_ovl_01+0x204);
 do {
 u8 *q=D_80160B9C_ovl_03+off;
 *(u8**)(q+0x28)=D_80161400_ovl_03;
 *(s16*)(q+0x26)=0;
 q[0x1e]=color; q[0x1d]=color; q[0x1c]=color;
 if(flag) func_80047B34_ovl_01(p,0); else func_80047B34_ovl_01(p,1);
 off+=0x28;
 *head=func_800439B8_ovl_01(*head,p,0,0);
 p+=0x28; i++;
 } while(i<4);
 *(u8**)(D_80160B9C_ovl_03+0x7a8)=D_80161400_ovl_03;
 *(s16*)(D_80160B9C_ovl_03+0x7a6)=0x200;
 D_80160B9C_ovl_03[0x79e]=color2; D_80160B9C_ovl_03[0x79d]=color2; D_80160B9C_ovl_03[0x79c]=color2;
 head=(s32*)(D_800C7650_ovl_01+0x18204);
 *head=func_800439B8_ovl_01(*head,D_80160B9C_ovl_03+0x79c,0,0);
}
