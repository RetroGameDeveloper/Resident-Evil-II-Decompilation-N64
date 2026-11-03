extern u8 D_80119DF0_ovl_01;
extern void func_8008797C_ovl_01(void *, void *, s32);
void func_80027180_ovl_01(s16 arg0) { func_80083D1C_ovl_01(arg0); }
s32 func_80078AE8_ovl_01(s32 arg0) {
 u8 *p=&D_80119DF0_ovl_01; u8 v=*p; if(v==0xFF)return 0;
 while(1){p++; if(*p==arg0)return 1; if(*p==0xFF)return 0;}
}
void func_800793D4_ovl_01(s16 arg0) {
 func_800B2038_ovl_01(((s32)(D_80119E13_ovl_01*arg0)>>7)&0xFF,0,0,1);
 func_800B2038_ovl_01(((s32)(D_80119E14_ovl_01*arg0)>>7)&0xFF,0,1,0);
}
void func_8007AA5C_ovl_01(S_func_80162870_ovl_23_arg0 *arg0) {
 u16 v=arg0->unk_1AA;
 if(v&0x100){arg0->unk_1AA=v&0xFEFF;
 func_8008797C_ovl_01(arg0,(u8*)arg0->unk_234+0xD38,1);
 func_8008797C_ovl_01(arg0,arg0->unk_234,1);
 func_8008797C_ovl_01(arg0,(u8*)arg0->unk_234+0xBC0,1);
 func_8008797C_ovl_01(arg0,(u8*)arg0->unk_234+0x11A0,1);}
}
