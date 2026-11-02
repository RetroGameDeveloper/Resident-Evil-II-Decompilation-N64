extern s32 D_800C7650_ovl_01; extern s32 D_800E10D0_ovl_01; s32 func_8004D3D0_ovl_01(void*);
void func_8016686C_ovl_33(void *arg0){
 s16 delta[3]; u16 mask; void *entry; s32 p;
 entry=*(void**)((u8*)&D_800C7650_ovl_01+0x18000+0x1d38+((*(u8*)((u8*)arg0+0x2b4)-1)*4));
 p=*(s32*)((u8*)entry+0x234);
 *(s32*)((u8*)arg0+0x120)=*(s32*)(p+0x4b4);*(s32*)((u8*)arg0+0x124)=*(s32*)(p+0x4b8);*(s32*)((u8*)arg0+0x128)=*(s32*)(p+0x4bc);
 *(s32*)((u8*)arg0+0x140)=*(s32*)(p+0x33c);*(s32*)((u8*)arg0+0x144)=*(s32*)(p+0x340);*(s32*)((u8*)arg0+0x148)=*(s32*)(p+0x344);
 *(s32*)((u8*)arg0+0x160)=*(s32*)(p+0x1c4);*(s32*)((u8*)arg0+0x164)=*(s32*)(p+0x1c8);*(s32*)((u8*)arg0+0x168)=*(s32*)(p+0x1cc);
 delta[0]=*(u16*)((u8*)arg0+0x142)-*(u16*)((u8*)arg0+0x162);delta[1]=*(u16*)((u8*)arg0+0x146)-*(u16*)((u8*)arg0+0x166);delta[2]=*(u16*)((u8*)arg0+0x14a)-*(u16*)((u8*)arg0+0x16a);
 *(s16*)((u8*)arg0+0x10)=delta[0];*(s16*)((u8*)arg0+0x12)=delta[1];*(s16*)((u8*)arg0+0x14)=delta[2];
 *(s32*)((u8*)arg0+0x180)=*(s32*)((u8*)arg0+0x160)+((s32)delta[0]>>1);
 *(s32*)((u8*)arg0+0x184)=*(s32*)((u8*)arg0+0x164)+((s32)delta[1]>>1);
 *(s32*)((u8*)arg0+0x188)=*(s32*)((u8*)arg0+0x168)+((s32)delta[2]>>1);
 *(s8*)((u8*)arg0+0xd)=-1;
 mask=*(u16*)((u8*)entry+0x2bc);mask &= 0xfff9;*(u16*)((u8*)entry+0x2bc)=mask;
 mask|=func_8004D3D0_ovl_01(&D_800E10D0_ovl_01)*6;*(u16*)((u8*)entry+0x2bc)=mask;
}
