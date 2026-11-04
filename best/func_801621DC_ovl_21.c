extern s32 func_80033634_ovl_01(void);
void func_801621DC_ovl_21(void *p){u8 v=((u8*)p)[6];s32 x;
*(u16*)((u8*)p+0x2BA)|=8;
switch(v){
case 0:
x=func_80036764_ovl_01(p,1,0);
if(x){if(func_80033634_ovl_01()&2)((u8*)p)[6]=((u8*)p)[6]+1;else *(s32*)((u8*)p+4)=0x01010000;}break;
case 1:
x=func_80036764_ovl_01(p,0,0,0);
v=((u8*)p)[6]-x;((u8*)p)[6]=v;
if(v){if(func_80033634_ovl_01()&2)((u8*)p)[6]--;else *(s32*)((u8*)p+4)=0x01010000;}break;
}
}
