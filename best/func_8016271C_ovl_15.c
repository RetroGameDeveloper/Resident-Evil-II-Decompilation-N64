typedef struct { u8 pad0[4]; s32 state; u8 pad8[0x2B0-8]; s32 timer; u8 unk[0x20]; } Obj;
extern s32 D_80165FF0_ovl_15[];
extern s32 D_80166010_ovl_15[];
extern s32 D_800C7650_ovl_01[];
void func_801621F0_ovl_15(Obj *arg0, s32 arg1, s32 arg2) {
 s32 (*fn)(Obj *,s32,s32);
 fn=(s32 (*)(Obj *,s32,s32))((u8*)D_80165FF0_ovl_15 + 4*arg0->pad0[5]);
 fn(arg0,arg1,arg2);
 func_80036764_ovl_01(arg0, *(s32 *)((u8 *)arg0+0x2BC));
 *(s32 *)((u8 *)arg0+0x2BC)=arg0->state;
 fn=(s32 (*)(Obj *,s32,s32))((u8*)D_80166010_ovl_15 + 4*arg0->pad0[5]);
 fn(arg0,arg1,arg2);
}
void func_8016266C_ovl_15(Obj *arg0) {
 if (!*((u8 *)arg0+6)) func_80036764_ovl_01(arg0,0,0x20,0);
}
void func_80162698_ovl_15(Obj *arg0) {
 func_80162CE0_ovl_15(arg0);
 if (*((u8 *)arg0+0x2B6)==1 && *(s32 *)((u8*)D_800C7650_ovl_01+0x1A5E0)<0x251C+*(s32 *)((u8*)arg0+0x30)) arg0->state=0x01010000;
 if (*(u32 *)((u8*)arg0+0x28C)<0x5A) arg0->state=0x01010000;
 if (*((u8 *)arg0+0x2D4)) arg0->state=0x01010000;
}
void func_8016271C_ovl_15(Obj *arg0) {
 if (!*((u8 *)arg0+6) && func_80036764_ovl_01(arg0,1,4,0)) arg0->state=0x01020000;
}
