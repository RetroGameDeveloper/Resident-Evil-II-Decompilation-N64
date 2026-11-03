s32 func_80032B8C_ovl_01(void *, s32); s32 func_80077B0C_ovl_01(s32, void *); s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_801669B0_ovl_30(void *arg0) {
 s32 t1,t2; u8 v1,a0; u16 v0;
 t1=*(s32*)((u8*)arg0+0x1A4); v1=*(u8*)((u8*)arg0+6); t2=*(s32*)((u8*)arg0+0x218);
 switch(v1) {
 case 0:
 *(u8*)((u8*)arg0+6)=1; *(u16*)((u8*)arg0+0x1E0)=0x258;
 a0=*(u8*)((u8*)arg0+5);
 *(s16*)((u8*)arg0+0x1E4)=0; *(s16*)((u8*)arg0+0x1E2)=0;
 *(u8*)((u8*)arg0+0x25C)|=1;
 *(s32*)((u8*)arg0+0x1E8)=((a0+3)<<24)+0xF00;
 if(a0) *(s16*)((u8*)arg0+0x1F4)=0; else *(s16*)((u8*)arg0+0x1F4)=0x800;
 func_80077B0C_ovl_01((((a0&1)+1)<<16)|0x04000001,(u8*)arg0+0x28);
 case 1:
 if(func_80089D34_ovl_01(arg0,t1,t2,0x100)) {
 *(s32*)((u8*)arg0+4)=0x01000000;
 *(u8*)((u8*)arg0+0x25C)&=0xFE; *(u8*)((u8*)arg0+0x26F)&=0x7F;
 }
 func_80032B8C_ovl_01(arg0,*(s16*)((u8*)arg0+0x1F4)-*(s16*)((u8*)arg0+0x66));
 v0=*(u16*)((u8*)arg0+0x1E0)-0x5A; *(u16*)((u8*)arg0+0x1E0)=v0;
 if((s16)v0<0) *(u16*)((u8*)arg0+0x1E0)=0;
 }
}
