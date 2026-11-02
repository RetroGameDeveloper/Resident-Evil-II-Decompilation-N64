typedef struct{u8 pad[0x2c6];u16 flags;} X;
extern s32 D_800C7650_ovl_01[];
extern u8 D_800E1390_ovl_01[];
void func_80165F70_ovl_13(X*p){if(*(u32*)((u8*)p+0x28c)<0x708)func_80165BE8_ovl_13(p,7);}
void func_80165F9C_ovl_13(X*p){u16 v; if((p->flags&4)&&((u32)(((u8*)p)[5]-11)>=4)){u32 base=0x18000;u8*q=(u8*)D_800C7650_ovl_01+base;v=*(u16*)(q+0x1a78);*(u16*)(q+0x1a78)=v&0xfffe;v=p->flags;p->flags=v&0xfffb;}v=p->flags;if(v&0x80){p->flags=v&0xff7f;((u8*)p)[0x2bd]=0x78;}}
void func_80165F00_ovl_13(X*p){u16 v;if(p->flags&0x10){func_80166214_ovl_13(p,0x15e);v=func_80033634_ovl_01();v&=0x9d;func_80065400_ovl_01(p, v);((u8*)p)[0x2bb]=v;((u8*)p)[0x2b8]=0x1e;func_80165BE8_ovl_13(p,4);p->flags&=0xffa7;}}
void func_8016600C_ovl_13(u16 arg0){u8*start=D_800E1390_ovl_01;u8*end=(u8*)D_800C7650_ovl_01+0x1828c;u8*cur;u8*obj;u16 v; if(end!=start){cur=start;do{obj=*(u8**)cur;if(obj[8]==0x21){v=*(u16*)(obj+0x2c6);if(!(v&4)){*(u16*)(obj+0x2c6)=v|arg0;obj[0x2bc]=0;obj[0x2bb]=0;}}cur+=4;}while(cur!=end);}}
