extern s32 func_8017B48C_ovl_02(s32,void*,s32);extern s32 D_8018579C_ovl_02;extern void *D_80186C14_ovl_02;
void func_8017B768_ovl_02(void){s32 n;u8 *buf;struct {u8 *data; s32 arg; s32 x; s32 size; s32 y; s32 z; } *p=D_80186C14_ovl_02;
n=func_8017B48C_ovl_02(p->arg,p,0x800);p->x=(s32)p->data;if(D_8018579C_ovl_02)p->size-=0x800;
if(n<0x800){if(n<0)n=0;while(n&3){p->data[n++]=0;}while(n<0x800){p->data[n++]=0;p->data[n++]=0;p->data[n++]=1;p->data[n++]=0xb7;}}}
