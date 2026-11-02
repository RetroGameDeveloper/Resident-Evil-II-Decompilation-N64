extern u8 D_801671E8_ovl_26[];
extern void func_801665C4_ovl_26(void *);
extern void func_801669C4_ovl_26(void *);
extern void func_80166504_ovl_26(void *);
extern void func_801668F8_ovl_26(void *);
extern void func_800342B0_ovl_01(void *, s32);
typedef struct { u8 pad[0x18000]; u8 data[0x3000]; } BigData; extern BigData D_800C7650;
void func_801622CC_ovl_26(u8 *p, void *arg1, void *arg2) {
u8 *s=p+0x2B4; u8 x; s32 n; s32 dummy[2];
x=s[8]; if(x)s[8]=x-1;
x=s[9]; if(x)s[9]=x-1;
x=s[10]; if(x)s[10]=x-1;
x=s[0x22]; if(x)s[0x22]=x-1;
x=s[0x23]; if(x)s[0x23]=x-1;
x=s[0x1a]; if(x)s[0x1a]=x-1;
func_801665C4_ovl_26(p);
((void (*)(void *,void *,void *))(*(void **)(D_801671E8_ovl_26+4*p[5])))(p,arg1,arg2);
func_801669C4_ovl_26(p); func_80166504_ovl_26(p);
func_800342B0_ovl_01(p, (s16)((u16)(*(u16*)(p+0x66))+((u32)p[0x2cd]<<11)));
func_801668F8_ovl_26(p);
p[0x2ca]=p[5];p[0x2cb]=p[6];p[0x2cc]=p[7];
if(s[1]) { n=*(s32*)(s+0x1c); if(*(s16*)(n+0x1f2)<0)s[1]=0; }
{ u8 *g=D_800C7650.data; u16 h=*(u16*)(g+0x1a78); if((h&0x20)&&*(s16*)(g+0x1c72)>0)*(u16*)(g+0x1a78)=h&0xffdf; }
}
