s32 func_80032DEC_ovl_01(void *,s32,s32,s32); s32 func_800377B0_ovl_01(s32,s32,void *,void *); s32 func_80052C00_ovl_01(s32,s32); s32 func_80052C9C_ovl_01(s32,s32,s32); s32 func_80052D40_ovl_01(s32,s32,s32,s32); s32 func_80077D48_ovl_01(s32,void *); s32 func_80161E8C_ovl_22(void *,s32,s32,s32,s32,s32); s32 func_80162094_ovl_22(s32); s32 func_801621FC_ovl_22(void *);
typedef struct {u8 pad[0x1664];} Obj234; extern u8 D_800E10D0_ovl_01[]; extern u8 D_800E8FC8_ovl_01[];
void func_80163DEC_ovl_22(void *p) {u16 w18,w1c,w20,w22,w24,t; u8 st; Obj234 *s1=*(Obj234**)((u8*)p+0x234); st=*((u8*)p+6);
 if(st){if(st!=1)return;} else{*((u8*)p+0x1F4)=0; st=*((u8*)p+6); *((u8*)p+6)=st+1;}
 if(func_80036764_ovl_01_510_24(p,7,3,0)){*((u8*)p+0x2C6)=0x23; *((s32*)((u8*)p+4))=0x01010000;}
 func_80032DEC_ovl_01(p,*(s32*)(D_800E10D0_ovl_01+0x28),*(s32*)(D_800E10D0_ovl_01+0x30),8);
 w18=*((u16*)((u8*)p+0x2B8)); w1c=*((u16*)((u8*)p+0x2BA));
 t=func_80161E8C_ovl_22(p,15,5,14,0x258,*(u16*)(D_800E10D0_ovl_01+0x136)*2);
 if(t){func_80077D48_ovl_01(2,p); func_80052C00_ovl_01(3,0); func_80052C9C_ovl_01(5,0xDC,0); func_80052D40_ovl_01(4,0xDC,0x28,5); func_801621FC_ovl_22(p);
 w20=*(u16*)((u8*)s1+0x1656); t=*(u16*)((u8*)s1+0x165A); w22=t; w24=*(u16*)((u8*)s1+0x165E);
 if((s16)t < (s16)*((u16*)((u8*)p+0x25E))-0xBB8) w22=*((u16*)((u8*)p+0x25E))-0xBB8;
 func_800377B0_ovl_01(0x2400,0,D_800E8FC8_ovl_01,&w20); func_80162094_ovl_22(0x14);
 }
}
