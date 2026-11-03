
s16 func_80040A44_ovl_01(s32,s16,s16,s16);
s32 func_80032D44_ovl_01(s16 arg0,s16 arg1,s16 arg2,s16 arg3){s32 dx,dy,v; s16 r; v=0x400; dx=arg2-arg0; dy=arg3-arg1; if(dy>0)v=0xc00; if(dx!=0){r=func_80040A44_ovl_01((dy<<12)/dx,arg1,arg2,arg3); v=dx<0?0x800:0x1000; return (v-r)&0xfff;}return v;}
extern u8 D_800C7650_ovl_01[];
s32 func_8008C380_ovl_01(void){u8 *base=(u8*)D_800C7650_ovl_01+0x18000; s16 a=*(s16*)(base+0x1c72);u16 b=*(u16*)(base+0x1d34);s16 c=*(s16*)(base+0x1c7e);if(b)return 4;if((u32)(c>>1)<(u32)a)return 0;if((u32)a>=0x29)return 1;if((u32)a<0x15)return 3;return 2;}
extern u8 D_8012BF38_ovl_01[], D_8012FF48_ovl_01[];
u8 func_8008C3F4_ovl_01(void){u8*state=D_8012BF38_ovl_01;u8 a3=state[12],a2=state[13];u8*base=D_800C7650_ovl_01+0x21818;u8 v3=base[a3*4],a1=base[a2*4],a0,*p;u32 t0=0;if(a2==a3)return 0;if(!a1)return 0;p=D_8012FF48_ovl_01+v3*8;a0=p[3];if(!a0)return 0;p=*(u8**)(p+4);while(p[0]!=a1){t0++;if(t0>=a0)return 0;p+=4;}state[0x26]=p[2];state[0x27]=p[3];return p[1];}
extern u8 D_800E7650_ovl_01[];
s32 func_8008C498_ovl_01(s32 arg0){s32 v1=0,a2=0;u8 *a1=D_800C7650_ovl_01;u8*a3=D_800E7650_ovl_01;for(;;){if(a1[0x21818]==0){a2++;if(!arg0)return v1;}v1++;if((u32)v1>=a3[0x1488])break;a1+=4;}if(!arg0)return -1;return a2;}
