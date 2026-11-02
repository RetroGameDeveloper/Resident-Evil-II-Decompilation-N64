extern s32 func_800662B8_ovl_01(void*,void*,void*);
void func_801671EC_ovl_30(void *arg0,void *arg1){u8 state,mode;u16 value;s32 temp;
if(*(u8*)((u8*)arg1+0x15)) return;
mode=*(u8*)((u8*)arg1+0x14);
switch(mode){case 0:*(u8*)((u8*)arg1+0x14)=1;*(u16*)((u8*)arg1+0x16)=0;break;
case 1:value=*(u16*)((u8*)arg1+0x16)+0x200;*(u16*)((u8*)arg1+0x16)=value;if((s16)value>=0x2801){*(u16*)((u8*)arg1+0x16)=0x2800;*(u8*)((u8*)arg1+0x14)=2;}break;
case 2:value=*(u16*)((u8*)arg1+0x16)-0x800;*(u16*)((u8*)arg1+0x16)=value;if((s16)value<0){*(u16*)((u8*)arg1+0x16)=0;*(u8*)((u8*)arg1+0x14)=1;}break;}
{u8 *base=*(u8**)((u8*)arg0+0x234)+0x2f0;u8 *obj=*(u8**)(base+0x120);s16 x=*(s16*)((u8*)arg1+0x16);if(x<0x1000){*(s16*)(obj+0x10)=0;*(s16*)(obj+0x14)=0x1000-x;}else{*(s16*)(obj+0x10)=x-0x1000;*(s16*)(obj+0x14)=0;}}
func_800662B8_ovl_01(arg0,0,0);}
