extern s32 D_800C5680_ovl_01; extern s32 D_800E91F0_ovl_01;
void func_800269B8_ovl_01(s32); void func_80026948_ovl_01(s32); void func_80026AC0_ovl_01(void);
void func_80025D80_ovl_01(void){func_800269B8_ovl_01(D_800C5680_ovl_01);func_80026948_ovl_01(D_800E91F0_ovl_01);func_80026AC0_ovl_01();}
s32 func_8004F57C_ovl_01(void *,void *);
void func_8004F514_ovl_01(void *a, void *b, s32 c, s32 d) {
 s32 old=*(s32*)((u8*)a+0x30); u8 *t=(u8*)a+0x120; s32 v=*(s32*)((u8*)b+8)-*(s16*)(t+0x12); s32 y;
 if(c<0)y=v+d; else y=v-d;
 *(s32*)((u8*)a+0x30)=y;
 *(s32*)(t+8)+=y-old;
 *(s32*)((u8*)a+0x280)=func_8004F57C_ovl_01(a,t);
}
s32 func_8004F7A4_ovl_01(void *a,void *b,s32 c,s32 d) {
 s32 x=*(s32*)((u8*)a); s32 y=*(s32*)((u8*)b+0x120); s32 z=*(s32*)((u8*)a+8); s32 w=*(s32*)((u8*)b+0x128); u32 m=*(u16*)((u8*)b+0x12c)+c; u32 n=*(u16*)((u8*)b+0x12e)+c; s32 r;
 if ((u32)(m*2)<(u32)((x-y)+m)) return 0;
 if ((u32)(n*2)<(u32)((z-w)+n)) return 0;
 if(d==0)return 1;
 y=*(s32*)((u8*)a+4)-*(s32*)((u8*)b+0x124); n=*(u16*)((u8*)b+0x13a)-1;
 if((s32)n<0)return 0;
 r=y+n; if((u32)(n*2+1)<(u32)r)return 0; return 1;
}
extern u8 D_800B8B40_ovl_01[];
void func_8004F9EC_ovl_01(void) { u32 a=*(u32*)D_800B8B40_ovl_01; u32 b=*(u32*)(D_800B8B40_ovl_01+4); volatile u32 x[2]; x[0]=a;x[1]=b; }
