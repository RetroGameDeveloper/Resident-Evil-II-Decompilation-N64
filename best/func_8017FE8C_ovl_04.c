
extern s32 D_8018032C_ovl_04;
extern s32 func_8017FF00_ovl_04(s32 *,s32,s32,s32 *);
s32 func_8017FE38_ovl_04(s32 arg0){s32 local; s8 *p=(s8*)&D_8018032C_ovl_04;local=*(s32*)p;*((s8*)&local+2)+=arg0;return func_8017FF00_ovl_04(&local,p[4],p[5],&D_8018032C_ovl_04)^1;}
extern s32 D_80180A58_ovl_04; extern s32 D_80181F14_ovl_04;
extern s32 func_8000C9E0(s32*,s32,s32); 
s32 func_8017FE8C_ovl_04(void){s32 x=0;func_8000C9E0((s32*)&D_80181F14_ovl_04,0,1);switch(D_80180A58_ovl_04){case 0:x=0;break;case 1:x=2;break;case 2:x=3;break;default:break;}return x;}
extern s32 func_8017F7C4_ovl_04(void);extern s32 func_8017FFA0_ovl_04(s32);extern s32 func_8017FE8C_ovl_04(void);
s32 func_8017FDD4_ovl_04(s32 arg0){s32 s0=3,s1=0;func_8017F7C4_ovl_04();do{if(!func_8017FFA0_ovl_04(arg0*16))s0--;else{s0--;s1=func_8017FE8C_ovl_04();if(!s1)return 0;} }while(s0);return s1;}
extern s32 D_80131EB0; extern s32 D_80180A58_ovl_04; extern s32 D_80180A5C_ovl_04; extern s32 D_80180A64_ovl_04; extern s32 D_80181F14_ovl_04;
extern s32 func_800879D0_ovl_01(void*); extern s32 func_8000CB60(void*,s32,s32);
s32 func_8017FF08_ovl_04(s32 arg0){s32 a0=arg0>>4;s32 *a3=&D_80180A5C_ovl_04; s32 *a1=&D_80181F14_ovl_04;D_80180A5C_ovl_04=5;*(s32**)((u8*)a3+4)=&D_80180A64_ovl_04;D_80180A64_ovl_04=a0;*(s32**)((u8*)&D_80180A64_ovl_04+4)=&D_80180A58_ovl_04;*(s32**)((u8*)&D_80180A64_ovl_04+8)=a1;if(a0){if(D_80131EB0){func_800879D0_ovl_01(a3);return 1;}D_80180A58_ovl_04=10;}else D_80180A58_ovl_04=0;func_8000CB60(a1,0,0);return 1;}
