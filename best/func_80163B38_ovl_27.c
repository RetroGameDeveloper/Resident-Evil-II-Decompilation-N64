extern u8 D_80163D9C_ovl_27[];
s32 func_800377B0_ovl_01(s32,s16,s32,s16*);
void func_80163B38_ovl_27(void *arg0,s32 arg1,s32 arg2) {
 u8 *rec; s16 result[3]; s32 p;
 rec=D_80163D9C_ovl_27+(arg2&255)*6;
 result[0]=0;result[1]=0;result[2]=0;
 p=*(s32*)((u8*)arg0+0x234)+(arg1&255)*0x178;
 func_800377B0_ovl_01(((s32)rec[0]<<24)|((s32)rec[1]<<16)|*(u16*)(rec+4),*(s16*)((u8*)arg0+0x66),p+0x38,result);
}
