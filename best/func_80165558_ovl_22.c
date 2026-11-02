void func_80165558_ovl_22(void *p){u8 state=((u8*)p)[6];s32 x,y;
switch(state){
case 0:
x=*(s32*)((u8*)p+0x10);y=((u8*)p)[6];*(s32*)((u8*)p+0x10)=x|0x80;*(s16*)((u8*)p+0x270)=0;((u8*)p)[6]=y+1;
func_80036764_ovl_01(p,0,0,0);*(u32*)p|=8;
case 1:
if(*(s16*)((u8*)p+0x270)){((u8*)p)[6]++;}
case 2:
func_80036764_ovl_01(p,0,0,0);if(*(s16*)((u8*)p+0x270)==2)((u8*)p)[6]++;
break;
}
}
