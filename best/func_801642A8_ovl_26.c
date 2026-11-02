extern s32 func_80032C08_ovl_01(void*,s32,s32); extern s32 func_80077D48_ovl_01(s32,void*);
void func_801642A8_ovl_26(void *p){u8*b=p;u16 v; s32 flags;
if(b[7]==0){b[7]=1;*(u16*)(b+0x1e2)=0xf0;*(s8*)(b+0x2b6)=0; flags=*(s32*)b; flags &= -0x401; flags |=4; *(s32*)b=flags;}
v=*(u16*)(b+0x1e2);v+=0x50;*(u16*)(b+0x1e2)=v;
if((s16)v>=0x281) *(u16*)(b+0x1e2)=0x280;
func_80032C08_ovl_01(p,0,0);
if(*(s32*)(b+0x2c)<*(s16*)(b+0x25e))return;
*(s16*)(b+6)=0x200;
*(s32*)b &= -9;
v=*(u16*)(b+0x1aa); v &=0xfff; *(u16*)(b+0x1aa)=v;
*(s32*)(b+0x2c)=*(s16*)(b+0x25e);
func_80077D48_ovl_01(10,p);
}
