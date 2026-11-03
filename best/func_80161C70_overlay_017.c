extern u32 D_800C7650_ovl_01[];
extern u32 D_80167D10_ovl_17[];
extern void func_8004DB8C_ovl_01(void *);
extern void func_8004DCE8_ovl_01(void *,s32);
extern void func_80166730_ovl_17(void *);
extern void func_801679E0_ovl_17(void *);
extern s32 func_80074D94_ovl_01(s32,s32);
void func_80161C70_overlay_017(void *arg0){u8*p=arg0;u8 v; s32 x;
 if(!(*(u32*)((u8*)D_800C7650_ovl_01+0x18000+0x1A60)&0x20000000)){
 v=p[0x26f];if(v&0x7f)p[0x26f]=v-1;v=p[0x2d9];if(v)p[0x2d9]=v-1;
 ((void(*)(void*,s32,s32))D_80167D10_ovl_17[p[4]])(arg0,*(s32*)(p+0x1a4),*(s32*)(p+0x218));
 *(s8*)(p+0x1a2)=-(s32)*(s32*)(p+0x2c)/1800;
 func_8004DB8C_ovl_01(arg0);func_8004DCE8_ovl_01(arg0,0x600);func_80166730_ovl_17(arg0);func_801679E0_ovl_17(arg0);
 }else if(p[0x2db]){s16 a=*(s16*)(p+0x25e); x=func_80074D94_ovl_01(*(s32*)(p+0x28),*(s32*)(p+0x30))+0x46;if(x>=a)*(s32*)(p+0x2c)=a;else *(s32*)(p+0x2c)=x;}
}
