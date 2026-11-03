
typedef struct {u8 pad[0x1e0]; u16 x,y,z;} Obj;
typedef struct {u8 pad[0x2b4+0x22];} Big;
typedef void (*Fn)(void *,void *,void *);
extern Fn D_80166738_ovl_35[];
extern Fn D_80166728_ovl_35[];
extern void func_80089D34_ovl_01(void *,void *,void *,s32);
extern void func_801661F0_ovl_35(s32,s32);
extern void func_80164604_ovl_35(void *,void *,void *);
void func_8016492C_ovl_35(void *a0,void *a1,void *a2) {
    ((Fn*)D_80166738_ovl_35)[*((u8*)a0+6)](a0,a1,a2);
    if (*((u8*)a0+6)!=3) func_80089D34_ovl_01(a0,a1,a2,0x100);
    *(u16*)((u8*)a0+0x2d0)=*(u16*)((u8*)a0+0x1e0);
    *(u16*)((u8*)a0+0x2d2)=*(u16*)((u8*)a0+0x1e2);
    *(u16*)((u8*)a0+0x2d4)=*(u16*)((u8*)a0+0x1e4);
}
void func_8016488C_ovl_35(void *a0,void *a1,void *a2) {
    u8 *p=a0;
    if (p[6]==0) {func_801661F0_ovl_35(0,7);func_80164604_ovl_35(a0,a1,a2);}
    else {((Fn*)D_80166728_ovl_35)[p[6]](a0,a1,a2);func_80089D34_ovl_01(a0,a1,a2,0x100);}
}
void func_80164570_ovl_35(void *a0,void *a1,void *a2) {
    u8 *p=a0; u8 *q=p+0x2b4; 
    ((Fn*)D_80166728_ovl_35)[p[6]](a0,a1,a2);
    if (p[6]!=0) func_80089D34_ovl_01(a0,a1,a2,0x100);
    *(u16*)(q+0x1c)=*(u16*)(p+0x1e0);
    *(u16*)(q+0x1e)=*(u16*)(p+0x1e2);
    *(u16*)(q+0x20)=*(u16*)(p+0x1e4);
}
extern u8 D_800C7650_ovl_01[];
void func_801644C4_ovl_35(void *a0) {
    u8 *p=(u8*)a0+0x2b4;
    s32 v1; u32 temp;
    if (p[0x11]) p[0xf]=1;
    temp=*(u32*)(D_800C7650_ovl_01+0x19800+0x1a3c);
    if (temp&0x20) v1=0xfa; else v1=0xc8;
    if (p[0x15] && !p[0xf] && (p[9]&1)) {
        u32 n=(u32)p[0x15]*(u32)v1;
        u32 q=(u64)n*0xaaaaaaabULL>>33;
        if ((u32)*(s16*)((u8*)a0+0x1f2)<q) {p[0xf]=1;p[0x15]--;}
    }
}
