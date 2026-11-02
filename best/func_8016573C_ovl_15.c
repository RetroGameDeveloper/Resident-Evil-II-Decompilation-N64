s32 func_80033634_ovl_01(void); s32 func_800377B0_ovl_01(s32,s32,s32,s16*);
void func_8016573C_ovl_15(void *arg0) {
 s16 p[3]; s32 dstA; s32 dstB; s32 base; u8 state;
 state=*(u8*)((u8*)arg0+0x2CD); base=*(s32*)((u8*)arg0+0x234);
 if(state!=1) {
  if(state>=2) { if(state>=9) goto finish; goto build; }
  if(state==0) { *(void**)((u8*)arg0+0x2D0)=(void*)func_8016573C_ovl_15; state=*(u8*)((u8*)arg0+0x2CD); *(u8*)((u8*)arg0+0x2CD)=state+1; return; }
  goto finish;
 }
 p[0]=((func_80033634_ovl_01()<<24)>>23)+300;
 p[1]=(func_80033634_ovl_01()<<24)>>23;
 p[2]=((func_80033634_ovl_01()<<24)>>22)+200;
 func_800377B0_ovl_01(0x26032000,0,base+0x908,p);
build:
 dstA=base+0xA80;
 p[0]=((func_80033634_ovl_01()<<24)>>22)+300;
 p[1]=(func_80033634_ovl_01()<<24)>>23;
 p[2]=((func_80033634_ovl_01()<<24)>>23)+200;
 func_800377B0_ovl_01(0x64000,(func_80033634_ovl_01()<<24)>>20,dstA,p);
 p[0]=((func_80033634_ovl_01()<<24)>>22)+300;
 p[1]=(func_80033634_ovl_01()<<24)>>23;
 p[2]=((func_80033634_ovl_01()<<24)>>23)+200;
 func_800377B0_ovl_01(0x34000,(func_80033634_ovl_01()<<24)>>20,dstA,p);
 dstB=base+0x908;
 p[0]=((func_80033634_ovl_01()<<24)>>23)+300;
 p[1]=(func_80033634_ovl_01()<<24)>>23;
 p[2]=((func_80033634_ovl_01()<<24)>>22)+200;
 func_800377B0_ovl_01(0x8024000,(func_80033634_ovl_01()<<24)>>20,dstB,p);
 func_80033634_ovl_01();
 func_800377B0_ovl_01(0x8024000,(func_80033634_ovl_01()<<24)>>20,dstB,p);
finish:
 state=*(u8*)((u8*)arg0+0x2CD);
 if(state==0x40) *(s32*)((u8*)arg0+0x2D0)=0;
 state=*(u8*)((u8*)arg0+0x2CD); *(u8*)((u8*)arg0+0x2CD)=state+1;
}
