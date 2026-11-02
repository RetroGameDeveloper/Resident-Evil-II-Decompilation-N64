typedef s32 (*Fn6)(void*,void*,s32,s32,s32,s32); typedef s32 (*Fn3)(void*,s32,s32); extern u8 D_800E10D0_ovl_01[]; extern u8 D_800C7650_ovl_01[];
u16 func_80166648_ovl_26(void*p,void*q,s32 a,s32 b){u32 t=a*47;u32 f=(*(u16*)((u8*)p+0x2d4))>>15; s32 v=0,r;
 if(((Fn6)0x80032FB4)(p,(u8*)q+0x28,a,b,(s32)((u8*)p+0x234+t*8+0x4c),f)==0)goto E;
 if(*((u8*)q+0x26f)&0x80)goto E;
 if(*((u8*)p+0x1a2)!=*((u8*)q+0x1a2))goto E;
 if(*(s16*)((u8*)q+0x1f2)<0)goto N;
 if(q==(void*)D_800E10D0_ovl_01)r=func_80059E30_ovl_01(*((u8*)p+0x2b9),f);else r=((Fn3)0x80080D34)((u8*)p+0x2b9,0,f);
 switch(r){case 1:*(u16*)(D_800C7650_ovl_01+0x19a78)|=0x20;case 0:func_80166888_ovl_26(q,(*((u8*)p+0x2cd)^func_80033174_ovl_01(p,q))&255);break;case 2:func_801668E0_ovl_26(q);break;}
 N:func_80077D48_ovl_01(1,p);v=1;E:return v;}
