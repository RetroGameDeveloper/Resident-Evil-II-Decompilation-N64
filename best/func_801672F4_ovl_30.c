extern s32 func_80032D44_ovl_01(s32,s32,s32,s32);extern s32 func_800377B0_ovl_01(s32,s32,void*,void*);extern u8 D_800E10D0_ovl_01[];extern u8 D_80167F74_ovl_30[];extern u8 D_800E8FC8_ovl_01[];
void func_801672F4_ovl_30(void *a,s32 b,s32 c){u16 q[3];s32 t;u8 *e;void *p;void *src; t=c&255;e=D_80167F74_ovl_30+t*6;func_80032D44_ovl_01(*(s16*)((u8*)a+0x2a),*(s16*)((u8*)a+0x32),*(s16*)(D_800E10D0_ovl_01+0x2a),*(s16*)(D_800E10D0_ovl_01+0x32));b&=255;p=*(void**)((u8*)a+0x234);p=(u8*)p+b*0x178;
if(!(e[0]&0x80)){q[0]=*(u16*)((u8*)p+0x4e);q[1]=*(u16*)((u8*)p+0x52);q[2]=*(u16*)((u8*)p+0x56);src=D_800E8FC8_ovl_01;}else{src=(u8*)p+0x38;q[2]=0;q[1]=0;q[0]=0x12c;}
t=(e[0]&0x7f)<<24; t|=(e[1]+*(u16*)(e+2))<<16;t|=*(u16*)(e+4);func_800377B0_ovl_01(t,0,src,q);}
