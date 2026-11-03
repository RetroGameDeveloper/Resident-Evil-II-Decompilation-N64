typedef struct B4 { u8 pad[2]; u8 unk6; } B4;
typedef union U4 { s32 unk4; B4 b; } U4;
typedef struct P { u8 pad0[4]; U4 u; u8 pad8[0x1E4 - 8]; u16 unk1E4; u8 pad1E6[0x1F4 - 0x1E6]; s16 unk1F4; u8 pad1F6[0x234 - 0x1F6]; u8 *unk234; u8 pad238[0x25E - 0x238]; s16 unk25E; u8 pad260[0x2B8 - 0x260]; u16 unk2B8; u16 unk2BA; u8 pad2BC[0x2C6 - 0x2BC]; u8 unk2C6; } P;
extern u8 D_800E10D0_ovl_01[], D_800E8FC8_ovl_01[];
extern s32 func_80036764_ovl_01_510_24(void*,s32,s32,s32); extern s32 func_80032DEC_ovl_01(P*,s32,s32,s32); extern s32 func_800377B0_ovl_01(s32,s32,void*,void*); extern s32 func_80052C00_ovl_01(s32,s32); extern s32 func_80052C9C_ovl_01(s32,s32,s32); extern s32 func_80052D40_ovl_01(s32,s32,s32,s32); extern s32 func_80077D48_ovl_01(s32,P*); extern s32 func_80161E8C_ovl_22(P*,s32,s32,s32,s32,s32); extern s32 func_80162094_ovl_22(s32); extern s32 func_801621FC_ovl_22(P*,void*,s32);
void func_80163C50_ovl_22(P *p) {
    u8 *s1=p->unk234, *s2=D_800E10D0_ovl_01; u16 buf[8];
    switch(p->u.b.unk6) {
    case 0: p->unk1F4=0; p->u.b.unk6++; 
    case 1: break;
    default: return;
    }
    if(func_80036764_ovl_01_510_24(p,6,3,0)){p->unk2C6=0x23;p->u.unk4=0x01010000;}
    func_80032DEC_ovl_01(p,*(s32*)(s2+0x28),*(s32*)(s2+0x30),8);
    buf[0]=p->unk2B8;buf[2]=p->unk2BA;
    if(func_80161E8C_ovl_22(p,12,5,14,0x258,*(u16*)(s2+0x136)*2)){
      func_80077D48_ovl_01(2,p);func_80052C00_ovl_01(3,0);func_80052C9C_ovl_01(5,220,0);func_80052D40_ovl_01(4,220,40,5);func_801621FC_ovl_22(p,buf,12);
      buf[4]=*(u16*)(s1+0x11EE);buf[5]=*(u16*)(s1+0x11F2);buf[6]=*(u16*)(s1+0x11F6);
      if((s16)buf[5]<p->unk25E-3000)buf[5]=p->unk25E-3000;
      func_800377B0_ovl_01(0x2400,0,D_800E8FC8_ovl_01,&buf[4]);func_80162094_ovl_22(20);
    }
    p->unk1E4=100;
}
