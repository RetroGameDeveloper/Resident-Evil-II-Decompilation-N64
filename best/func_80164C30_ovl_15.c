extern s32 func_800377B0_ovl_01(s32,s32,void*,void*);
extern u8 D_80165EAC_ovl_15[]; extern u8 D_800E1C00[];
typedef struct {u8 b[0x30];} Blob30;
void func_80164C30_ovl_15(void){
 Blob30 tmp=*(Blob30*)D_80165EAC_ovl_15;
 s32 *p=(s32*)D_800E1C00+0x11;
 func_800377B0_ovl_01(0x030F2000,0,p,&tmp);
 func_800377B0_ovl_01(0x030F3000,0,p,(u8*)&tmp+8);
 func_800377B0_ovl_01(0x030F3000,0,p,(u8*)&tmp+16);
 func_800377B0_ovl_01(0x030F2000,0,p,(u8*)&tmp+24);
 func_800377B0_ovl_01(0x030F2000,0,p,(u8*)&tmp+32);
 func_800377B0_ovl_01(0x030F3000,0,p,(u8*)&tmp+40);
}
