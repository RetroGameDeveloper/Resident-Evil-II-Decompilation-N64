s32 func_800014AC(s32); s32 func_800013D4(s32); extern s32 *D_80012874; extern s32 D_800128A8; extern s32 D_80012884; extern u8 D_800C7650[];
void func_8000490C(s32 a0,s32 a1){func_800014AC(a1);}
void func_800048E8(s32 a0,s32 a1,s32 a2){func_800013D4((s32)((s64)a1*(s64)a2));}
s32 func_80004930(s32 a0){return D_800128A8 + *(s32*)((u8*)D_80012874+a0*8);}
void func_80004A20(void){D_80012884=0;*(s32*)(D_800C7650+0x18000+0x1a5c)&=~0x21;}
