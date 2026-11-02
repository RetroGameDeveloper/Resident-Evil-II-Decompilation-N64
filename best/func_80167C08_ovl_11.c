s32 func_80033634_ovl_01(void); s32 func_800377B0_ovl_01(s32,s32,s32,s16*);
void func_80167C08_ovl_11(void *arg0) {
 s16 p[3]; s32 base; s32 tex; s32 v; s32 angle; s32 zero=0x80; s32 tail;
 base=*(s32*)((u8*)arg0+0x234);
 p[0]=zero-(func_80033634_ovl_01()&255); p[1]=zero-(func_80033634_ovl_01()&255); p[2]=zero-(func_80033634_ovl_01()&255);
 tex=((func_80033634_ovl_01()&255)<<3)+0x13E8;
 func_800377B0_ovl_01(tex|0x06000000,*(s16*)((u8*)arg0+0x66),base+0x38,p);
 base=*(s32*)((u8*)arg0+0x234);
 p[0]=zero-(func_80033634_ovl_01()&255); p[1]=zero-(func_80033634_ovl_01()&255); p[2]=zero-(func_80033634_ovl_01()&255);
 tex=((func_80033634_ovl_01()&255)<<3)+0x1000;
 func_800377B0_ovl_01(tex|0x06000000,*(s16*)((u8*)arg0+0x66),base+0x38,p);
 base=*(s32*)((u8*)arg0+0x234);
 p[0]=zero-(func_80033634_ovl_01()&255); p[1]=zero-(func_80033634_ovl_01()&255); p[2]=zero-(func_80033634_ovl_01()&255);
 tex=((func_80033634_ovl_01()&255)<<3)+0x1000;
 func_800377B0_ovl_01(tex|0x06000000,*(s16*)((u8*)arg0+0x66),base+0x38,p);
 base=*(s32*)((u8*)arg0+0x234);
 p[0]=zero-(func_80033634_ovl_01()&255); p[1]=zero-(func_80033634_ovl_01()&255); p[2]=zero-(func_80033634_ovl_01()&255);
 tex=((func_80033634_ovl_01()&255)<<3)+0xC18;
 func_800377B0_ovl_01(tex|0x06000000,*(s16*)((u8*)arg0+0x66),base+0x38,p);
 tail=*(s32*)((u8*)arg0+0x234);
 tex=((func_80033634_ovl_01()&255)<<3)|0x040C1000;
 func_800377B0_ovl_01(tex,*(s16*)((u8*)arg0+0x66),tail+0x38,0);
 tail=*(s32*)((u8*)arg0+0x234);
 tex=((func_80033634_ovl_01()&255)<<3)+0xC18;
 func_800377B0_ovl_01(tex|0x06000000,*(s16*)((u8*)arg0+0x66),tail+0xD70,p);
 tail=*(s32*)((u8*)arg0+0x234);
 tex=((func_80033634_ovl_01()&255)<<3)+0xC18;
 func_800377B0_ovl_01(tex|0x06000000,*(s16*)((u8*)arg0+0x66),tail+0x4A0,p);
}
