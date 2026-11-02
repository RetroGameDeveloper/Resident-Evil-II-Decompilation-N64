s32 func_80040E88_ovl_01(void*,void*); s32 func_8004251C_ovl_01(void*,void*,void*); s16 func_80040BE4_ovl_01(s32);
void func_800336B0_ovl_01(void*arg0,s32 arg1,s32 arg2){
 u8 *p=arg0; u8 *obj=*(u8**)(p+0x234); u8 tmp[0x20]; s32 *new_var; u8 *at;
 func_80040E88_ovl_01(p+0x64,p+0x14);
 func_8004251C_ovl_01(p+0x14,obj+8,tmp);
 func_8004251C_ovl_01(tmp,obj+0x180,tmp);
 at=obj+((arg2*0x468)+0x5E0);
 func_8004251C_ovl_01(tmp,at-0x2E8,tmp);
 func_8004251C_ovl_01(tmp,at-0x170,tmp);
 func_8004251C_ovl_01(tmp,at+8,tmp);
 if(arg1==0){*(s32*)(p+0x28)-=*(s32*)(tmp+0x14)-*(s32*)(at+0x4C);new_var=(s32*)(tmp+0x1C);*(s32*)(p+0x30)-=*new_var-*(s32*)(at+0x54);}
 else{ s32 x=*(s32*)(tmp+0x14)-*(s32*)(at+0x4C);s32 y=*(s32*)(tmp+0x1C)-*(s32*)(at+0x54);*(s16*)(p+0x1E0)=func_80040BE4_ovl_01(x*x+y*y);}
}
