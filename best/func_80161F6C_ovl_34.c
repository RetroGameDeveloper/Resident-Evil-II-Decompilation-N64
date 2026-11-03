typedef struct { u8 pad[5]; s8 unk5; } Arg;
typedef struct { u8 pad[0x1AA8]; void *p1; u8 pad2[4]; void *p2; } Globals;
extern Globals D_800C7650_ovl_01;
void func_80032EA4_ovl_01(void *,void *,void *,s32);
void func_80161F6C_ovl_34(Arg *p) {
 func_80032EA4_ovl_01(D_800C7650_ovl_01.p1,D_800C7650_ovl_01.p2,0,0x400);
 func_80032EA4_ovl_01(p,D_800C7650_ovl_01.p1,D_800C7650_ovl_01.p2,0x320);
 p->unk5=1;
}
