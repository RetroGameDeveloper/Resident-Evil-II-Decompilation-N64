void func_80166250_ovl_26(void *p,s32 x,s32 y) {
 s32 state=*(u8*)((u8*)p+6); s32 one=1;
 switch(state) {
 case 0: *(u8*)((u8*)p+6)=one; *(s32*)((u8*)p+0x1E8)=0x3F00; *(u8*)((u8*)p+0x25C)|=1;
 case 1:
  *(u16*)((u8*)p+0x66)=*(u16*)((u8*)p+0x66)+0x800; func_8003334C_ovl_01(p,x,y,0); *(u16*)((u8*)p+0x66)=*(u16*)((u8*)p+0x66)-0x800;
  if(func_80089D34_ovl_01(p,x,y,0x40)) { *(u8*)((u8*)p+6)=2; *(s32*)((u8*)p+0x1E8)=0x01003F00; } break;
 case 2:
  *(u16*)((u8*)p+0x66)=*(u16*)((u8*)p+0x66)+0x800; func_8003334C_ovl_01(p,x,y,0); *(u16*)((u8*)p+0x66)=*(u16*)((u8*)p+0x66)-0x800;
  if(func_80089D34_ovl_01(p,x,y,0x40)) { *(u8*)((u8*)p+5)=state; *(u16*)((u8*)p+6)=0; } break;
 }
}
