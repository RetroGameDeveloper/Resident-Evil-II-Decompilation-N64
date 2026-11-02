extern s32 D_800127CC,D_80014F50,D_80014F54,D_80014F58,D_80014F5C; extern s32 func_800040D4; extern s32 D_800125E4,D_80012660,D_800126DC,D_80012754;
extern s32 func_800038F0(s32*,s32,s32,s32*,s32*,s32*,s32*,s32*);
s32 func_800040FC(s32 *arg0,s32 *arg1,s32 *arg2,s32 *arg3){
 s32 sp20[0x120],sp25C[0x90],sp94[0x1E],sp4A0[8],sp4D8=0x212,*sp4C0=&func_800040D4,sp4C4=0,*sp4C8=&sp4D8;
 s32 *v1; s32 a0;
 if(D_800127CC==0){
  a0=0x8f;v1=&sp25C[0x8f];do{*v1=8;a0--;v1--;}while(a0>=0);
  for(a0=0x90,v1=&sp20[0x90];a0<0x100;a0++,v1++)*v1=9;
  if(a0<0x118)for(v1=&sp20[a0];a0<0x118;a0++,v1++)*v1=7;
  if(a0<0x120)for(v1=&sp20[a0];a0<0x120;a0++,v1++)*v1=8;
  D_80014F50=7;
  func_800038F0(sp20,0x120,0x101,&D_800125E4,&D_80012660,&D_80014F58,&D_80014F50,sp4A0);
  for(a0=0x1d,v1=&sp94[0x1d];a0>=0;a0--,v1--)*v1=5;
  D_80014F54=5;
  func_800038F0(sp20,0x1e,0,&D_800126DC,&D_80012754,&D_80014F5C,&D_80014F54,sp4A0);
  D_800127CC=1;
 }
 *arg0=D_80014F50;*arg1=D_80014F54;*arg2=D_80014F58;*arg3=D_80014F5C;return 0;
}
