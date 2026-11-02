extern s32 func_80036764_ovl_01_510(void*,s32); extern s32 func_80036764_ovl_01_510_24(void*,s32,s32,s32); extern s32 func_80036764_ovl_01_510_24(void*,s32,s32,s32);
void func_80164768_ovl_23(void *p){u8 st=*(u8*)((u8*)p+6); s16 n; if(st<6){switch(st){
case 0: *(u8*)((u8*)p+0x1E9)=0; *(u16*)((u8*)p+0x1AA)|=0x4000; func_80036764_ovl_01_510_24(p,10,0,0); *(u16*)((u8*)p+0x1F4)=0; *(u8*)((u8*)p+6)=*(u8*)((u8*)p+6)+1; if(*(s16*)((u8*)p+0x270)!=1)break; *(u16*)((u8*)p+0x1AA)&=0xBFFF; *(u8*)((u8*)p+0x1E9)=1; *(u8*)((u8*)p+0x2D2)=1; *(u8*)((u8*)p+6)=*(u8*)((u8*)p+6)+1; break;
case 1: if(*(u8*)((u8*)p+0x1E9)>=16)goto mode; *(u8*)((u8*)p+0x1E8)=10; func_80036764_ovl_01_510_24(p,10,0,0); break; mode: if(*(s16*)((u8*)p+0x270)==2) *(u8*)((u8*)p+6)=*(u8*)((u8*)p+6)+1; break;
case 2: {u8 ret=func_80036764_ovl_01_510(p,10); *(u8*)((u8*)p+0x1E8)=ret; *(u8*)((u8*)p+6)=*(u8*)((u8*)p+6)+ret;} break;
case 3: n=*(u16*)((u8*)p+0x1F4); n++; *(u16*)((u8*)p+0x1F4)=n; if(n<6)break; *(u8*)((u8*)p+6)=*(u8*)((u8*)p+6)+1; break;
case 4: func_80036764_ovl_01_510_24(p,10,3,1); break;
case 5: break;
}} if(*(s16*)((u8*)p+0x270)==3) *(s32*)((u8*)p+4)=0x1010000;}
