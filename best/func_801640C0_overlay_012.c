extern u8 D_800C7650_ovl_01[];
extern u32 D_800E10D0_ovl_01[];
extern u8 D_80166C10_ovl_12[];
s32 func_80032B8C_ovl_01(void*,s32); s32 func_800334F8_ovl_01(void*,s32,s32,s32); s32 func_80033634_ovl_01(); s32 func_80033678_ovl_01(void*); s32 func_80089D34_ovl_01(void*,s32,s32,s32); s32 func_80166900_ovl_12(void*,s32,s32);
void func_801640C0_overlay_012(void *arg0,s32 arg1,s32 arg2){
 u8 temp_v1; s32 temp_s1; u16 temp_v0; u32 var_a0;
 temp_v1=*((u8*)arg0+7);
 switch(temp_v1){
 case 0:
  *((u8*)arg0+7)=1;*((u8*)arg0+0x2B5)=0;*((u8*)arg0+0x2C9)=0;
  *(s32*)((u8*)arg0+0x1E8)=((func_80033634_ovl_01(1,&D_800E10D0_ovl_01)&0x3F)<<16)+0x0E001F00;
  func_800334F8_ovl_01(arg0,arg1,arg2,0);func_80089D34_ovl_01(arg0,arg1,arg2,0x80);break;
 case 1:
  if(*(s16*)((u8*)D_800C7650_ovl_01+0x18000+0x1C72)>=0){
   var_a0=0xDAC;if((D_800E10D0_ovl_01[1]&0xFFFF0000)==0x01020000)var_a0=0x1388;
   if(var_a0<(u32)*(s32*)((u8*)arg0+0x28C)){
    if(*(u16*)((u8*)D_800C7650_ovl_01+0x18000+0x1A7A)&1){
     if(!(*(u16*)((u8*)D_800C7650_ovl_01+0x18000+0x1A78)&0x80)){*(u16*)((u8*)arg0+6)=0x100;*(u16*)((u8*)D_800C7650_ovl_01+0x18000+0x1A78)|=0x80;}
     else{*((u8*)arg0+7)=2;*(u16*)((u8*)arg0+0x1F4)=D_80166C10_ovl_12[func_80033634_ovl_01(var_a0,(u8*)D_800C7650_ovl_01+0x18000,&D_800E10D0_ovl_01)&7];}
    }
   }else goto hit;
  }break;
 case 2:
  temp_v0=*(u16*)((u8*)arg0+0x1F4)-1;*(u16*)((u8*)arg0+0x1F4)=temp_v0;if((temp_v0<<16)==0)goto hit;break;
 }
 goto common;
hit:*(u16*)((u8*)arg0+6)=0x100;
common:temp_s1=**(s32**)((u8*)arg0+0x214);
 if(temp_s1&0x30000){*((u8*)arg0+0x2BB)=1;func_80166900_ovl_12(arg0,4,0);if((temp_s1&0x20000)&&!(func_80033634_ovl_01()&3)){*((u8*)arg0+0x2BB)=1;func_80166900_ovl_12(arg0,4,(func_80033634_ovl_01()&1)+1);}}
 func_80033678_ovl_01(arg0);func_800334F8_ovl_01(arg0,arg1,arg2,0);func_80089D34_ovl_01(arg0,arg1,arg2,0x80);func_80032B8C_ovl_01(arg0,0);
}
