s32 func_801668EC_ovl_14(void *p){u8 v=((u8*)p)[6];s32 x;
switch(v){case 0:
*(s32*)p|=8; x=func_80036764_ovl_01(p,14); if(*(s16*)((u8*)p+0x270)){((u8*)p)[0x1E8]=0;((u8*)p)[0x1E9]=0;((u8*)p)[6]++;} break;
case 1:
if(((u8*)p)[0x1E9]>=5)func_80036764_ovl_01((u8*)p+0x2C,0);
x=func_80036764_ovl_01(p,14);if(x){*(s32*)((u8*)p+4)=0x01050000;*(s32*)p&=-9;*(u16*)((u8*)p+0x1AA)&=0xFFF;}break;
}
return 0;}
