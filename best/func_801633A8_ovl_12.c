extern s32 D_800C7650_ovl_01; extern s32 D_800E10D0_ovl_01; extern u8 D_80166C10_ovl_12[];
s32 func_80033634_ovl_01(void*); s32 func_80089D34_ovl_01(void*,s32,s32,s32);
void func_801633A8_ovl_12(void *arg0,s32 arg1,s32 arg2){
 s32 *var_v0; u32 var_a0; u8 temp_v1;
 if(*(u8*)((u8*)arg0+0x2c3)!=0){var_v0=(s32*)((u8*)&D_800C7650_ovl_01+0x19d3c);var_a0=0xdac;}
 else{var_v0=&D_800E10D0_ovl_01;var_a0=0xdac;}
 if((var_v0[1]&0xffff0000)==0x01020000)var_a0=0x1388;
 if(var_a0 >= *(u32*)((u8*)arg0+0x28c)){*(u8*)((u8*)arg0+6)=2;*(u32*)((u8*)arg0+0x1e8)=0x8000f00;}
 else if((*(u16*)((u8*)&D_800C7650_ovl_01+0x19a7a)&1)||(*(u16*)((u8*)&D_800C7650_ovl_01+0x19a78)&0x20)){
 if((*(u16*)((u8*)&D_800C7650_ovl_01+0x19a78)&0x80)==0){*(u8*)((u8*)arg0+6)=2;*(u32*)((u8*)arg0+0x1e8)=0x8000f00;*(u16*)((u8*)&D_800C7650_ovl_01+0x19a78)|=0x80;}
 else{temp_v1=*((func_80033634_ovl_01((u8*)&D_800C7650_ovl_01+0x18000)&7)+(u8*)D_80166C10_ovl_12);*(u8*)((u8*)arg0+6)=1;*(s16*)((u8*)arg0+0x1f4)=temp_v1;}
 }
 func_80089D34_ovl_01(arg0,arg1,arg2,0x100);
}
