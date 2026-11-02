extern u8 D_800C5694_ovl_01; extern s32 func_8004CDB8_ovl_01(s32);
void func_801713CC_ovl_07(s32 arg0){s32 i; u8 flag; u8 *p=&D_800C5694_ovl_01; flag=(*p==0); i=arg0-1; if(i!=0){*p=flag; do{func_8004CDB8_ovl_01(1);i--;if(i!=0)*p=flag;}while(i!=0);}}
extern s32 D_80171CA0_ovl_07[]; extern void func_801713CC_ovl_07(s32);
void func_80171428_ovl_07(s32 arg0){s32 i=0; s32 *p=D_80171CA0_ovl_07; do{if(arg0==p[0])func_801713CC_ovl_07(p[1]);i++;p+=2;}while((u32)i<3);}
