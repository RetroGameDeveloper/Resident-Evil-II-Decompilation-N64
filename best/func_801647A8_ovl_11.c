typedef struct {u8 pad[0x2B8];} Obj; typedef struct {u8 pad[0x1C22];} Big; extern Big D_800C7650_ovl_01; extern s32 D_800E10F8_ovl_01; extern s32 func_80032EA4_ovl_01(void*,void*,void*,s32); extern s32 func_80032F94_ovl_01_48(void*,void*,s32,s32);
void func_801647A8_ovl_11(Obj *o){ s32 n; n=*(s32*)((u8*)o+0x28c); func_80032EA4_ovl_01((u8*)&D_800C7650_ovl_01+0x1aa8,(u8*)&D_800C7650_ovl_01+0x1ab0,0,0x400); func_80032EA4_ovl_01(o,(u8*)&D_800C7650_ovl_01+0x1aa8,(u8*)&D_800C7650_ovl_01+0x1ab0,0x100);
 if((u32)n<0x514 && !(((u8*)&D_800C7650_ovl_01)[0x1cef]&0x80) && *((u8*)o+0x1a2)==((u8*)&D_800C7650_ovl_01)[0x1c22]){
  if(!(*(u16*)((u8*)o+0x2b6)&0x20)){ if(!func_80032F94_ovl_01_48((u8*)o+0x28,&D_800E10F8_ovl_01,(s16)(*(u16*)((u8*)o+0x66)+0x100),0x100)){*(s32*)((u8*)o+4)=0x01010000;((u8*)&D_800C7650_ovl_01)[0x1cef]|=0x80;}}
  if(!(*(u16*)((u8*)o+0x2b6)&0x40)){ if(!func_80032F94_ovl_01_48((u8*)o+0x28,&D_800E10F8_ovl_01,(s16)(*(u16*)((u8*)o+0x66)-0x100),0x100)){*(s32*)((u8*)o+4)=0x01010000; ((u8*)&D_800C7650_ovl_01)[0x18000+0x1cef]|=0x80;}}
 } }
