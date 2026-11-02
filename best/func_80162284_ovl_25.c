extern s32 func_80089D34_ovl_01(void*,s32,s32,s32);
extern void func_80032B8C_ovl_01(void*,s32,u16,s32);
void func_80162284_ovl_25(void *p) {
 u8 *b=p; u8 st=b[6]; u16 t; s32 c,d; u8 mask; s32 one=1;
 if(st==one) goto dec;
 if(st<2){if(st==0)goto init; return;}
 if(st==2)return;
 if(st==3)goto update;
 return;
init:
 *(u32*)(b+0x1e8)=0xf00;
 func_80089D34_ovl_01(p,0,0,0x100);
 c=*(s32*)(b+0x2b8); d=*(s32*)(b+0x2bc);
 mask=b[0x26f];
 *(u16*)(b+0x66)=*(u16*)(b+0x2b4);
 *(s32*)(b+0x28)=c; *(s32*)(b+0x30)=d;
 b[0x26f]=mask|0x80; b[6]=one; *(s16*)(b+0x1e0)=0x190;
 *(s16*)(b+0x1e4)=0; *(s16*)(b+0x1e2)=0;
 func_80032B8C_ovl_01(p,0x800,*(u16*)(b+0x2b4),c);
dec:
 t=*(u16*)(b+0x1f4); t--; *(u16*)(b+0x1f4)=t;
 if((s16)t==-1)b[6]=2;
 return;
update:
 if(func_80089D34_ovl_01(p,0,0,0x100)){
  *(u32*)(b+4)=0x01010000; *(s32*)(b+0x28)=*(s32*)(b+0x2b8);
  *(s32*)(b+0x30)=*(s32*)(b+0x2bc); return;
 }
 if(b[0x1e9]<11){*(s16*)(b+0x1e0)=50; *(s16*)(b+0x1e4)=0;
  *(s16*)(b+0x1e2)=0; func_80032B8C_ovl_01(p,0,0,0);}
}
