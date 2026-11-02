extern s32 D_800C7650_ovl_01; extern s32 D_800E10D0_ovl_01;
s32 func_80033634_ovl_01(s32); s32 func_80074D94_ovl_01(s32,s32); void func_801637E8_ovl_17(void*);
void func_80163888_ovl_17(void *arg0){
 s32 *v; s16 temp_v1; s32 temp_s1; s32 temp_v0,temp_v0_2;
 func_801637E8_ovl_17(arg0);
 if(*(u8*)((u8*)arg0+0x2d3)!=0) v=(s32*)((u8*)&D_800C7650_ovl_01+0x19d3c); else v=&D_800E10D0_ovl_01;
 temp_s1=v[0xb]-*(s32*)((u8*)arg0+0x2c);
 if(temp_s1>=0xdad){
 temp_v0=func_80074D94_ovl_01(*(s32*)((u8*)arg0+0x28),*(s32*)((u8*)arg0+0x30));
 if(temp_v0>=*(s16*)((u8*)arg0+0x25e)) *(s16*)((u8*)arg0+0x1f4)=(s16)((temp_s1-0xdac)/100);
 else {temp_v1=(temp_v0-(*(s32*)((u8*)arg0+0x2c)+0x898))/100;*(s16*)((u8*)arg0+0x1f4)=temp_v1;if(temp_v1&0x8000)*(s16*)((u8*)arg0+0x1f4)=0;}
 if(*(s16*)((u8*)arg0+0x1f4)!=0){temp_v0_2=func_80033634_ovl_01(temp_v0);*(u8*)((u8*)arg0+5)=1;*(u8*)((u8*)arg0+0x2cd)=2;*(u16*)((u8*)arg0+6)=0;*(s16*)((u8*)arg0+0x1f4)+=temp_v0_2&3;return;}
 }
 *(u8*)((u8*)arg0+5)=2;*(u16*)((u8*)arg0+6)=0x100;*(s16*)((u8*)arg0+0x1f4)=(func_80033634_ovl_01(0)&15)+0x1e;
}
