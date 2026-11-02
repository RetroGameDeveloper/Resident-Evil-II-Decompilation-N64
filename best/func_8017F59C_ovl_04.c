extern s32 func_8006BB3C_ovl_01(s32);
typedef struct { u8 pad[0x1A88]; u8 f1; u8 p[0x21]; u16 f2; u8 p2[2]; u16 f3; u8 p3[2]; u16 f4; u8 p4[0x32]; s32 flag; u8 rest[0x1000]; } Inner;
typedef struct { u8 pad[0x18000]; Inner inner; u8 gap[0x20000-0x18000-sizeof(Inner)]; u8 dst[0x30000]; } Big;
extern Big D_800C7650_ovl_01;
extern u8 D_800E91E2,D_80119E13_ovl_01,D_80119E14_ovl_01;
extern u8 D_8012BF38_ovl_01[];
void func_8017F59C_ovl_04(void) {
 volatile Inner *s=&D_800C7650_ovl_01.inner;
 volatile u8 *d=D_800C7650_ovl_01.dst;
 d[0x148A]=s->f1; *(u16*)(d+0x14A2)=s->f2; *(u16*)(d+0x14A4)=s->f3; *(u16*)(d+0x14A6)=s->f4;
 if(s->flag&0x200000) *(s32*)(d+0x1480)=0;
 else { s32 v=func_8006BB3C_ovl_01(-1)-*(s32*)((u8*)s+0x534); v+=*(s32*)(d+0x1480); *(s32*)(d+0x1480)=v; *(s32*)((u8*)s+0x534)=func_8006BB3C_ovl_01(-1); }
 d[0x148]=D_8012BF38_ovl_01[10]; d[0x149]=D_8012BF38_ovl_01[8];
 if(s->flag&0x20) s->rest[0xA5C-0x1A88]|=1;
}
