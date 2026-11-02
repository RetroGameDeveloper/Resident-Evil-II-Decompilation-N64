extern u8 D_801689D0_ovl_14[]; extern s32 func_80033634_ovl_01(void); extern s32 func_800377B0_ovl_01(s32,s32,void*,s32); extern s32 func_80162C84_ovl_14(void*); extern s32 func_80162E88_ovl_14(void*,s32,s32,s32,s32); extern void *jtbl_80168670_ovl_14[];
void func_80162B24_ovl_14(u8 *a0,u8 *a1,s32 arg2) {
 u8 count; s32 *obj; s32 selector; s32 mask; s32 i; u8 *table; u32 code; u8 n;
 count=a1[0]; obj=*(s32**)(a0+0x234); n=a1[3]; if(arg2)selector=a1[2];else selector=a1[1];
 if(count){mask=n-1;table=D_801689D0_ovl_14;do{i=func_80033634_ovl_01()&mask;i&=255;i+=selector;i*=8;table+=i;code=(a1[4]<<24)|(a1[5]<<16)|*(u16*)(a1+6);i=*(s16*)(table+6);func_800377B0_ovl_01(code,0,(u8*)obj+i*0x178+0x38,0);count--;}while(count);}
 if((u8)(a0[0x2cb]-1)<19){a0[0x2cf]=0;switch(a0[0x2cb]){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:case 12:case 13:case 14:case 15:case 16:case 17:case 18:default:if(*(u8*)((u8*)obj+0x63)!=72){func_80162C84_ovl_14(a0);func_80162E88_ovl_14(a0,22,72,72,0);}break;}}
}
