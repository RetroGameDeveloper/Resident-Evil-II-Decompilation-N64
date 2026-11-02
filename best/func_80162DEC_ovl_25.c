extern s32 func_80033634_ovl_01(void),func_80077B0C_ovl_01(s32,void*),func_80033174_ovl_01(void*,void*),func_80032DEC_ovl_01(void*,s32,s32,s32),func_80089D34_ovl_01(void*,s32,s32,s32); extern u8 D_800C7650_ovl_01[];
void func_80162DEC_ovl_25(void *arg0,s32 a1,s32 a2){
 u8 mode=((u8*)arg0)[6]; void *p=*(void**)((u8*)arg0+0x250); s32 t;
 if(mode>=5)return;
 switch(mode){
 case 0: *(s32*)((u8*)arg0+0x1E8)=0xF00;((u8*)arg0)[6]=1;t=func_80033634_ovl_01();func_80077B0C_ovl_01((((t&1)+1)<<16)|0x04000001,(u8*)arg0+0x28);func_80033174_ovl_01(arg0,p);t=func_80032DEC_ovl_01(arg0,*(s32*)((u8*)p+0x28),*(s32*)((u8*)p+0x30),0x800);if(t&255)*(u16*)((u8*)arg0+0x66)+=0x800;func_80089D34_ovl_01(arg0,a1,a2,0x100);return;
 case 1: *(s32*)((u8*)arg0+0x1E8)=0x1000700;((u8*)arg0)[6]=3;t=func_80089D34_ovl_01(arg0,a1,a2,0x100);((u8*)arg0)[6]+=t;return;
 case 2: *(s32*)((u8*)arg0+4)=0x1000000;((u8*)D_800C7650_ovl_01)[0x18000+0x1CEF]&=0x7F;return;
 case 3: *(s32*)((u8*)arg0+0x1E8)=0x1000700;((u8*)arg0)[6]=3;func_80089D34_ovl_01(arg0,a1,a2,0x100);return;
 case 4: *(s32*)((u8*)arg0+4)=0x1000000;((u8*)D_800C7650_ovl_01)[0x18000+0x1CEF]&=0x7F;return;
 }
}
