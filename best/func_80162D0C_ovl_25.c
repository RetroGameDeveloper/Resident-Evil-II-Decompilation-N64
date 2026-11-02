extern u32 D_8016307C_ovl_25[];
void func_80162BA8_ovl_25(void*p){((void(*)(void))D_8016307C_ovl_25[*(u8*)((u8*)p+0x26e)])();}
s32 func_80033634_ovl_01();s32 func_800377B0_ovl_01(s32,s16,s32,s16*);s32 func_80077D48_ovl_01(s32,void*);extern u8 D_80162FA0_ovl_25[];
void func_80162BDC_ovl_25(void*p){s16 a[3]={0,0,0};s32 x=*(u16*)((u8*)p+0x1aa)&1;s32 t=D_80162FA0_ovl_25[x*7];s32 *base=*(s32**)((u8*)p+0x234);s32 q;func_800377B0_ovl_01(0x21000,*(s16*)((u8*)p+0x66),(s32)(base+ t*0x178)+0x38,a);*(s16*)((u8*)p+0x1f2)=250;*(s32*)((u8*)p+4)=0x01050000;*((u8*)p+0x26f)|=0x80;q=func_80033634_ovl_01();func_80077D48_ovl_01((q&1)?2:3,p);}
extern u8 D_80162FA0_ovl_25[];
void func_80162D0C_ovl_25(void*p,s32 a1,s32 a2){s32 i=7;do{s32 idx=D_80162FA0_ovl_25[(a1&255)*7-1+(i&255)];s32 *v=(s32*)(*(s32*)((u8*)p+0x234)+idx*0x178);if(a2&255)*v|=1;else *v&=~1;i--;}while(i&255);if(a2&255)*(s32*)p&=~2;else *(s32*)p|=2;}
