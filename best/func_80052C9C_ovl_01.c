extern s32 func_800072E0(void); extern void func_80007300(s32); extern u8 D_80112908_ovl_01[];
void func_8002686C_ovl_01(s32 i,s8 v){s32 t=func_800072E0();D_80112908_ovl_01[i]=v;func_80007300(t);}
s8 *func_80052F1C_ovl_01(s32 *); u32 func_80052F40_ovl_01(s32 *);
extern s32 D_800E9098_ovl_01; extern s8 *D_8010BF40_ovl_01; extern s32 D_8010BF78_ovl_01; extern s32 D_8010C0C4_ovl_01; extern s8 *D_8010BF44_ovl_01;
void func_80052C00_ovl_01(s16 a,s16 b){s8*p; D_800E9098_ovl_01=1;if(func_80052F40_ovl_01(&D_8010BF78_ovl_01)<32 && a){p=func_80052F1C_ovl_01(&D_8010BF78_ovl_01);D_8010BF40_ovl_01=p;*p=1;p[1]=(a!=0);*(s16*)(p+4)=a;*(s16*)(p+2)=b;*(s16*)(p+6)=0;}}
void func_80052C9C_ovl_01(s16 a,s8 b,s16 c){s8*p;D_800E9098_ovl_01=1;if(func_80052F40_ovl_01(&D_8010C0C4_ovl_01)<32 && a){p=func_80052F1C_ovl_01(&D_8010C0C4_ovl_01);D_8010BF44_ovl_01=p;*p=1;p[1]=b;*(s16*)(p+4)=a;*(s16*)(p+2)=c;*(s16*)(p+6)=0;}}
extern s8 *D_8010BF40_ovl_01; extern s32 D_80112914_ovl_01;
void func_80052E24_ovl_01(void){u32 i; s8 *a=(s8*)&D_8010C0C4_ovl_01,*v=(s8*)&D_8010BF78_ovl_01;for(i=0;i<33;i++){*v=0;*a=0;a+=10;v+=10;}D_8010BF40_ovl_01=(s8*)&D_8010BF78_ovl_01;D_8010BF44_ovl_01=(s8*)&D_8010C0C4_ovl_01;((u8*)&D_80112914_ovl_01)[1]=0;((u8*)&D_80112914_ovl_01)[0]=0;}
