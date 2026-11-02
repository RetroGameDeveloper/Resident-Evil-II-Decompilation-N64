s32 func_80032D44_ovl_01(s16,s16,s16,s16);
s32 func_80162A48_ovl_22(void *arg0,s16 a1,s16 a2,s16 a3) {
 s16 s0=a3,s1=a3; s32 x,old,d,lim,v;
 x=func_80032D44_ovl_01(*(s16*)((u8*)arg0+0x2A),*(s16*)((u8*)arg0+0x32),a1,a2);
 x=(x+0x800)&0xFFF;
 if(s0&0x8000){s1=-s0;x=(x+0x800)&0xFFF;}
 old=*(u16*)((u8*)arg0+0x66); d=(x-old)&0xFFF; lim=((s32)s1<<16)>>15;
 if(d<lim){*(u16*)((u8*)arg0+0x66)=x;}
 else {v=old-s1;*(u16*)((u8*)arg0+0x66)=v;if(d<0x801)*(u16*)((u8*)arg0+0x66)=v+s1*2;}
}
