typedef struct {u8 pad[0x1AA8];s32 a;u8 p[4];s32 b;} G;
extern G *g;
extern u8 D_800C7650_ovl_01[];
extern u8 D_801630B0_ovl_25;
s32 func_80032EA4_ovl_01(void*,void*,void*,s32);
s32 func_80162D0C_ovl_25(void*,s32,s32);
s32 func_80077D48_ovl_01(s32,void*);
void func_80162134_ovl_25(void *p){
u32 t; s32 x,y; u32 flag;
t=*(u32*)((u8*)p+0x28c);
x=func_80032EA4_ovl_01(g->a,g->b,0,0x400);
y=func_80032EA4_ovl_01(p,g->a,g->b,0x2f8);
if(t<0x9c4){
flag=t<0xbb8;
if((x<<16)==0){
flag=t<0xbb8;
if(*(u8*)((u8*)p+6)>=2){
*(u32*)((u8*)p+4)=0x01010000;
func_80162D0C_ovl_25(p,*(u8*)((u8*)p+0x1ab)&1,1);
*(u32*)((u8*)p+0x28)=*(u32*)((u8*)p+0x2b8);
*(u8*)((u8*)p+0x26f)=0;
*(u32*)((u8*)p+0x30)=*(u32*)((u8*)p+0x2bc);
if(*(s16*)((u8*)p+0x2c0)!=1){*(s16*)((u8*)p+0x2c0)=1;return;}
goto L;
}}
}else flag=t<0xbb8;
if(flag && (y<<16)==0 && *(u8*)((u8*)p+6)==2){
*(u8*)((u8*)p+6)=3;
func_80162D0C_ovl_25(p,*(u8*)((u8*)p+0x1ab)&1,1);
*(u8*)((u8*)p+0x26f)=0;
if(*(s16*)((u8*)p+0x2c0)==1){L: if(!D_801630B0_ovl_25){func_80077D48_ovl_01(4,p);D_801630B0_ovl_25=0x3c;}}
else *(s16*)((u8*)p+0x2c0)=1;
}
}
