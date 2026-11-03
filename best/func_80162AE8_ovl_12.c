extern u8 D_800C7650_ovl_01[];
extern u8 D_800E10D0_ovl_01[];
extern u8 D_80166C10_ovl_12[];
typedef struct { u8 pad[0x2C3]; u8 unk2C3; u8 pad2C4[7]; u8 unk2CB; u8 unk2CC; } P;
s32 func_80032B8C_ovl_01(void*,s32);
s32 func_80032EA4_ovl_01(void*,s16,s16,s32);
s32 func_80033634_ovl_01(void);
s32 func_80040BE4_ovl_01(s32);
s32 func_80065400_ovl_01(void*,s32,s32,s32);
s32 func_801664A8_ovl_12(void*,s32,s32);
s32 func_80166510_ovl_12(void*,s16);
s32 func_80166568_ovl_12(void*);
void func_80162AE8_ovl_12(P *p) {
 s32 s4,s1,v,t,dx,dy; void *s3; u8 *s2=(u8*)p+0x2B4;
 if(p->unk2C3) s3=*(void**)((u8*)D_800C7650_ovl_01+0x18000+0x1D3C); else s3=D_800E10D0_ovl_01;
 if(s2[0x17]) s2[0x17]--;
 func_801664A8_ovl_12(p,0x28,0xF0);
 s4=func_80065400_ovl_01(p,0,s2[0],1)&255;
 s1=func_80032EA4_ovl_01(p,*(s16*)((u8*)p+0x260),*(s16*)((u8*)p+0x262),0x40);
 v=func_80032EA4_ovl_01(p,*(s16*)((u8*)s3+0x28),*(s16*)((u8*)s3+0x2C),0x80);
 if(*(s16*)((u8*)p+0x1F6)!=0){s1=*(s8*)((u8*)p+0x206); --*(s16*)((u8*)p+0x1F6);}
 else if(p->unk2CC>=16){*(s16*)((u8*)p+0x1F6)=30; if(s1) *(s8*)((u8*)p+0x206)=-s1; else *(s8*)((u8*)p+0x206)=-(v>>1);}
 *(u16*)((u8*)p+0x66)=*(u16*)((u8*)p+0x66)+s1;
 func_80032B8C_ovl_01(p,0);
 func_80166510_ovl_12(p,s1);
 if(*((u8*)p+7)!=0 && (s4!=1 || func_80040BE4_ovl_01((dx=*(s32*)((u8*)p+0x28)-*(s16*)((u8*)p+0x260))*dx+(dy=*(s32*)((u8*)p+0x30)-*(s16*)((u8*)p+0x262))*dy)>=1000)) goto done;
 *((u8*)p+7)=1; s4=s2[0]; t=func_80065400_ovl_01(p,0,0,0); s2[0]=t; if(s4!=(t&255))s2[0]=s4+1;
 {u8*q=*(u8**)((u8*)D_800C7650_ovl_01+0x18000+0x27C); s16 d=*(s16*)(*(u8**)(q+0x38)); s2[0]=s2[0]%d;}
 done: if(s2[0x17]==0 && (func_80166568_ovl_12(p)!=0 || s3==0)){*((u8*)p+5)=3;*(u16*)((u8*)p+6)=0;s2[0x17]=D_80166C10_ovl_12[func_80033634_ovl_01()&7]+30;}
}
