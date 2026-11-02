extern s32 D_80011860;extern u32 D_801129B8;extern s32 D_801320B0;
s32 func_80002FE8(void*);s32 func_8000319C(s32,s32*,s32);u32 func_800031C4(void*,s32);s32 func_8000472C(void*);s32 func_800048B0(void*);s32 func_8004CDB8_ovl_01(s32);
s32 func_800045DC(void *arg0,s32 arg1,s32 arg2,s32 arg3){
 s32 v;volatile s32 *p320=&D_801320B0;volatile u32 *p129=&D_801129B8;
 *(s32*)((u8*)arg0+0x44)=arg1;*(s32*)((u8*)arg0+0x50)=arg2;*(s32*)((u8*)arg0+0x10)=0x8000;*(u32*)((u8*)arg0+0x40)=0;*(s32*)((u8*)arg0+4)=0;*(s32*)((u8*)arg0+0x38)=0;*(s32*)((u8*)arg0+0x3C)=arg3;*(s32*)((u8*)arg0+0x48)=arg3;*(s32*)((u8*)arg0+0xC)=arg2;
 func_8000319C(arg2,&D_80011860,0x38);
loop:
 v=0;if(*p320!=0)v=*p129>0;
 if(v){func_8004CDB8_ovl_01(1);*p129=0;}
 if(*(s32*)((u8*)arg0+0x38)!=0)goto step;
 if(func_8000472C(arg0)==0)goto after_first;
 *(u32*)((u8*)arg0+0x40)=func_800031C4(arg0,0);
 func_800048B0(arg0);
 if(*(u32*)((u8*)arg0+0x40)==0)goto loop;
 goto after_first;
step:
 goto after_first;
again:
 *(u32*)((u8*)arg0+0x40)=func_800031C4(arg0,4);
 if(func_800048B0(arg0)==0)goto after_first;
 if(*(u32*)((u8*)arg0+0x40)==0)goto again;
after_first:
 if(*(s32*)((u8*)arg0+0x38)==0)goto again;
 func_80002FE8(arg0);
 if(*(s32*)((u8*)arg0+0x38)==0&&*(u32*)((u8*)arg0+0x40)<2)*(u32*)((u8*)arg0+0x40)=0;
 if(*(u32*)((u8*)arg0+0x40)!=0)return 0;
 return *(s32*)((u8*)arg0+0x14);
}
