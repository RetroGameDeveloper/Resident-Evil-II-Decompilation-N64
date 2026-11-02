typedef void (*F)(s32,void*,s32,s32);
void func_800306D8_ovl_01(s32 arg0, void *arg1, s32 arg2) {
u8 *p=arg1; s32 s4,s3,s0,a0,v1,s2,a2; void *a1; F fn;
s4=*(s32*)(p+8); s3=*(s32*)(p+0x18)*s4; s0=0; v1=*(s32*)(p+0x10);
if(v1>0) do {
a0=v1-s0; if(*(s32*)(p+0x14)<a0)a0=*(s32*)(p+0x14);
v1=*(s32*)(p+4)-(*(s32*)(p+0x18)+s0); if(a0<v1)v1=a0;
if(v1<=0)break;
s2=v1*s4;
if(arg2){a2=*(s32*)(*(u32*)p+s0*4);fn=*(F*)(p+0x2C);a1=p+0x28;}
else {a1=p+0x28;a2=*(s32*)(*(u32*)p+s0*4);fn=*(F*)(p+0x28);}
fn(arg0,a1,a2,s3);s0+=*(s32*)(p+0x14);s3+=s2;
} while(s0<*(s32*)(p+0x10));
}
