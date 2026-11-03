extern void func_80043650_ovl_01(void); extern s32 *D_8017E860_ovl_10; extern s32 *D_8017E6D4_ovl_10; extern s32 func_80042FCC_ovl_01(void*,void*,void*); extern s32 func_80043490_ovl_01(void*,void*,void*,s32); extern s32 func_80042E10_ovl_01(void*); extern s32 func_8004344C_ovl_01(void*); extern s32 func_8004500C_ovl_01(void*);
typedef struct {s8 b[8];} Rec;
void func_8017CE68_ovl_10(void){
 s32 r,c; s32 *p; s16 t; s32 idx; u8 *out;
 func_80043650_ovl_01(); p=(s32*)D_8017E860_ovl_10; p[0]++;
 if((s16)p[0] < *(s16*)((u8*)p+0x10f54)) {
 for(r=0;r<17;r++) for(c=0;c<17;c++){u8 n=((u8*)p)[4];if(n){u8 *q=(u8*)p+((r*0x88)+(c*0x88))+0x680a;*(u16*)q+=n;}}
 ((u8*)p)[5]--; if(!((u8*)p)[5]) {switch(((u8*)p)[4]){case 3:((u8*)p)[5]=5;break;case 2:((u8*)p)[5]=8;break;case 4:((u8*)p)[5]=3;break;default:((u8*)p)[5]=1;} if(((u8*)p)[4])((u8*)p)[4]--;}
 for(r=0;r<16;r++)for(c=0;c<16;c++){u8 *q=(u8*)p+8+(r*0x88)+(c*0x78);Rec a,b,d,e; *(Rec*)(q+0x6808)=*(Rec*)(q+0x6808);a=*(Rec*)(q+0x6808);b=*(Rec*)(q+0x6890);d=*(Rec*)(q+0x6810);e=*(Rec*)(q+0x6898);func_80042FCC_ovl_01(&a,&b,&d);t=p[0]-*(s16*)((u8*)p+0x10f54);func_80043490_ovl_01(q+4,q+16,q+28,t);func_80042E10_ovl_01(&e);func_8004344C_ovl_01(q+40);}}
}
