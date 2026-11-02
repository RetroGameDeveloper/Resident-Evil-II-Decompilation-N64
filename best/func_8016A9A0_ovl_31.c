s16 func_80040BE4_ovl_01(s32);s32 func_80040E88_ovl_01(void*,void*);s32 func_8004251C_ovl_01(void*,void*,void*);
void func_8016A9A0_ovl_31(void *arg0,s32 arg1,s32 arg2){
 u8*p=arg0;u8*obj=*(u8**)(p+0x234);u8 tmp[0x20];u8*at;s32 dx,dy;
 func_80040E88_ovl_01(p+0x64,p+0x14);
 func_8004251C_ovl_01(p+0x14,obj+8,tmp);
 func_8004251C_ovl_01(tmp,obj+0xd40,tmp);
 func_8004251C_ovl_01(tmp,obj+0xeb8,tmp);
 if(arg2){at=obj+0x1490;}else{at=obj+0x1be8;func_8004251C_ovl_01(tmp,at-0x5d8,tmp);}
 func_8004251C_ovl_01(tmp,at-0x460,tmp);func_8004251C_ovl_01(tmp,at-0x2e8,tmp);func_8004251C_ovl_01(tmp,at-0x170,tmp);func_8004251C_ovl_01(tmp,at+8,tmp);
 dx=*(s32*)(tmp+0x14)-*(s32*)(at+0x4c);dy=*(s32*)(tmp+0x1c)-*(s32*)(at+0x54);
 if(arg1==0){*(s32*)(p+0x28)-=dx;*(s32*)(p+0x30)-=dy;}else{*(s16*)(p+0x1e0)=func_80040BE4_ovl_01(dx*dx+dy*dy);}
}
