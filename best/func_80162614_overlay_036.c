s32 func_80033634_ovl_01(void);
extern u8 D_800E10D0_ovl_01[];
void func_80162614_overlay_036(void *p) {
 u8 *b=p; u8 *q=b+0x2b4; s32 value; u32 mode;
 if(!b[7]) { b[7]=1; *(u16*)(b+0x1f4)=0x12c-(func_80033634_ovl_01()&0x1f); }
 if(*(s16*)(b+0x270)==0)return;
 mode=*(u32*)(D_800E10D0_ovl_01+4)&0xffff0000;
 if(mode==0x01010000 || mode==0x01030000) *(u16*)(b+0x1f4)-=10;
 else if(mode==0x01020000) *(u16*)(b+0x1f4)-=15;
 *(u16*)(b+0x1f4)-=1;
 if((s16)*(u16*)(b+0x1f4)>0 && *(s16*)(D_800E10D0_ovl_01+0x1f2)>=0)return;
 if(((0x5335>>(func_80033634_ovl_01()&15))&1)==0) { *(u16*)(b+0x1f4)=0; return; }
 value=2;
 if((0x990>>(func_80033634_ovl_01()&15))&1)value=5;
 q[5]=value;
 *(u16*)(q+6)=*(u16*)(D_800E10D0_ovl_01+0x2a);
 *(u16*)(q+8)=*(u16*)(D_800E10D0_ovl_01+0x32);
 *(u16*)(b+6)=0x100;
 *(u16*)(b+0x1f4)=0;
}
