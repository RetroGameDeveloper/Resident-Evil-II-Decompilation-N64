extern s32 func_80032C08_ovl_01(void*,s32,s32); extern s32 func_80033634_ovl_01(void); extern s32 func_80077D48_ovl_01(s32,void*,s16,s32); extern s32 func_80089D34_ovl_01(void*,s32,s32,s32); extern u8 func_80166C00_ovl_12[160];
void func_801631C8_ovl_12(void *arg0, s32 arg1, s32 arg2) {
 s32 t; u8 state=*((u8*)arg0+7); u8 *base=(u8*)arg0; u8 *s2=base+0x2b4;
 switch(state) {
 case 0: base[7]=1; *(s32*)(base+0x1e8)=0x16000f00; *(s16*)(base+0x1f4)=0; t=*(u16*)(base+0x1e0); *(s16*)(base+0x1e0)=(s16)(t<<14>>16); s2[6]=0; s2[7]=4;
 case 1: func_80032C08_ovl_01(arg0,0x800,0); *(u16*)(base+0x1e2)+=0x28;
 if(*(s32*)(base+0x2c)>=*(s16*)(base+0x25e)){t=*(s16*)(base+0x25e); base[7]=2; base[0x2b5]=0; *(s32*)(base+0x2c)=t; *(s32*)base=(*(s32*)base&0xefffffff)|0x4000000; func_80077D48_ovl_01(10,arg0,t,0xefffffff);}
 if(base[0x1e9]<17) func_80089D34_ovl_01(arg0,arg1,arg2,0x100); else *(u16*)(base+0x1e0)=0; break;
 case 2: if(func_80089D34_ovl_01(arg0,arg1,arg2,0x100)){base[5]=state; *(s16*)(base+6)=0; s2[5]=func_80166C00_ovl_12[func_80033634_ovl_01()&7];} break;
 }
 if(*(s16*)(base+0x1f4)<0x800){*(u16*)(base+0x66)+=0x80; *(u16*)(base+0x1f4)+=0x80;}
}
