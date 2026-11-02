s16 func_80032D44_ovl_01(s16,s16,s16,s16);
s32 func_80032F24_ovl_01(void*,s16,s32);
s32 func_80052D40_ovl_01(s32,s32,s32,s32);
s32 func_80077B0C_ovl_01(s32,void*);
s32 func_80089D34_ovl_01(void*,s32,s32,s32);
s32 func_80164D84_ovl_15(u8);
extern u8 D_800C7650_ovl_01[];
void func_80164810_ovl_15(void *p,s32 a1,s32 a2) {
 u8 *b=p; u8 st=b[6]; void *q=*(void**)(b+0x250);
 if(st==1) goto active;
 if(st>=2)return;
 if(st!=0)return;
 func_80077B0C_ovl_01(0x04030001,b+0x28);
 func_80052D40_ovl_01(0x35,0xf0,0x28,0);
 *(u32*)(b+0x1e8)=0x30000;
 *(u32*)(D_800C7650_ovl_01+0x19a3c)|=0x04000000;
 b[7]=0; b[6]++;
active:
 if(b[7]<3){func_80164D84_ovl_15(b[7]); b[7]++;}
 func_80032F24_ovl_01(p,func_80032D44_ovl_01(*(s16*)((u8*)q+0x2a),*(s16*)((u8*)q+0x32),*(s16*)(b+0x2a),*(s16*)(b+0x32)),0x80);
 b[6]+=func_80089D34_ovl_01(p,a1,a2,0x400);
}
