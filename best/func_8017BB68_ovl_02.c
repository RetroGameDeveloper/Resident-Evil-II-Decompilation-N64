typedef struct {u32 base;u32 a;u32 ptr;u32 bits;u32 count;u32 e;u32 f;u32 limit;} Buf;
extern Buf *D_80186C14_ovl_02;extern s32 D_8018579C_ovl_02;
s32 func_8017B768_ovl_02(void*,s32);s32 func_8017B874_ovl_02(void);s32 func_8017B96C_ovl_02(void*,s32);
void func_8017BB68_ovl_02(s32 n){Buf *p=D_80186C14_ovl_02; s32 left;u32 x;u8 *q;
left=p->count-n;p->bits<<=n;p->count=left;if(left<0x19){if(D_8018579C_ovl_02) {p=D_80186C14_ovl_02;if(p->ptr>=p->limit-4){do{p=D_80186C14_ovl_02;if(p->ptr>=p->limit)func_8017B96C_ovl_02((void*)n,(s32)p);x=func_8017B874_ovl_02();left+=8;p->bits|=x<<(0x18-left);}while(left<0x19);goto done;}}
p=D_80186C14_ovl_02;if(p->ptr<p->base+0x7fc){do{q=(u8*)p->ptr;left+=8;p->ptr++;p->bits|=(u32)*q<<(0x18-left);}while(left<0x19);}else{do{p=D_80186C14_ovl_02;if(p->ptr>=p->base+0x800)func_8017B768_ovl_02(p,n);q=(u8*)p->ptr;left+=8;p->ptr++;p->bits|=(u32)*q<<(0x18-left);}while(left<0x19);}done:D_80186C14_ovl_02->count=left;}}
