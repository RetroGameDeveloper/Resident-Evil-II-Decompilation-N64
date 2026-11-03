extern s16 *D_800EBC48_ovl_01[];
extern s16 *D_800EBB48_ovl_01[];
extern u8 D_800EBD48_ovl_01[];
s16 func_800844FC_ovl_01(s16);
s32 func_80084514_ovl_01(s32);
typedef struct { s32 a[8]; } Args;
s32 func_800385D4_ovl_01(u32 arg0, u32 arg1, Args *arg2, s32 *arg3) {
 s32 s5=arg0>>24; s32 s0=s5*4; s16 *s4=D_800EBC48_ovl_01[s5]; s32 s6=(arg0>>16)&255; s32 s1=0x60; s16 *s2=D_800EBB48_ovl_01[s5]; s32 s3; s32 size; u8 *v1; u8 *p; s32 i;
 s4 += ((s32)func_800844FC_ovl_01(s4[(s6&7)])<<16)>>14;
 func_800844FC_ovl_01(*s4);
 s3=func_800844FC_ovl_01(*s2);
 size=(((s32)func_800844FC_ovl_01(*s2)<<16)>>14)+4;
 v1=D_800EBD48_ovl_01+0x2e04;
 while(*(u16*)(v1+0x18)){s1--;v1-=0x7c;if(!s1)return -1;}
 p=v1; p[0x1a]=0;p[0x1b]=0;
 *(u16*)(p+0x18)=0xa003;
 *(s32*)(p+0x1c)=func_80084514_ovl_01(s5+((arg1<<8)&0xffff)+(s6<<16));
 *(u16*)(p+0x20)=func_800844FC_ovl_01(*(s16*)((u8*)s2+0xa));
 *(u16*)(p+0x22)=arg1>>16; *(s32*)(p+0x24)=0;
 *(s32*)(p+0x28)=func_80084514_ovl_01(func_800844FC_ovl_01(*(s16*)((u8*)s2+6))<<16);
 if(arg3){*(s32*)(p+0x2c)=arg3[0];*(s32*)(p+0x30)=arg3[1];}else{*(s32*)(p+0x2c)=0;*(s32*)(p+0x30)=0;}
 *(s32*)(p+0x40)=0x100; *(s32*)(p+0x34)=0; *(u16*)(p+0x38)=0; *(u16*)(p+0x3a)=arg0; *(s32*)(p+0x3c)=0; *(s32*)(p+0x44)=0; *(s32*)(p+0x48)=0;
 *(u16*)(p+0x32)=*(u16*)((u8*)s2+4)+((s6>>3)<<6);
 for(i=0;i<8;i++)*(s32*)(p+0x4c+i*4)=arg2->a[i];
 *(s32*)(p+0x6c)=(s32)arg2; *(s32*)(p+0x70)=(s32)((u8*)s2+8); *(s32*)(p+0x74)=(s32)((u8*)s2+size*2);
 s4=(s16*)((u8*)s4+8); *(s32*)p=*(s32*)((u8*)s4+4); *(s32*)(p+0x78)=(s32)((u8*)s4+8);
 s3--;
 *(s16*)(p+4)=func_800844FC_ovl_01(*(s16*)((u8*)s4+8)); *(s16*)(p+6)=func_800844FC_ovl_01(*(s16*)((u8*)s4+10)); *(s32*)(p+8)=*(s32*)((u8*)s4+12);
 *(s16*)(p+0xc)=func_800844FC_ovl_01(*(s16*)((u8*)s4+12)); *(s16*)(p+0xe)=func_800844FC_ovl_01(*(s16*)((u8*)s4+14)); *(s16*)(p+0x10)=func_800844FC_ovl_01(*(s16*)((u8*)s4+16)); *(s16*)(p+0x12)=func_800844FC_ovl_01(*(s16*)((u8*)s4+18)); *(s16*)(p+0x14)=func_800844FC_ovl_01(*(s16*)((u8*)s4+20)); *(s16*)(p+0x16)=func_800844FC_ovl_01(*(s16*)((u8*)s4+22));
 if(s3){u8 *base=D_800EBD48_ovl_01;u8 *tab=base+0x18;u8 *dst;u8 *src;u8 *q;u8 *data;s16 *a0;
 do{if(!s1)return -2;v1=base+s1*0x7c-0x7c;while(*(u16*)(v1+0x18)){s1--;v1-=0x7c;if(!s1)return -2;}
 dst=v1+0x18;src=tab+s5*0x7c;*(u16*)(v1+0x18)=0xa003;v1[0x1b]=0;
 for(q=src;q!=src+0x60;q+=0x10,dst+=0x10){*(u32*)dst=*(u32*)q;*(u32*)(dst+4)=*(u32*)(q+4);*(u32*)(dst+8)=*(u32*)(q+8);*(u32*)(dst+12)=*(u32*)(q+12);}
 *(u32*)dst=*(u32*)(src+0x60);v1[0x1a]=s1;
 a0=s4;for(i=s3;i;i--)a0+=(u16)*a0*12+2;data=(u8*)(a0+2);
 *(u32*)(v1+0x78)=(u32)data;*(u32*)v1=*(u32*)(data+4);s3--;
 *(s16*)(v1+4)=func_800844FC_ovl_01(*(s16*)(data+4));*(s16*)(v1+6)=func_800844FC_ovl_01(*(s16*)(data+6));*(u32*)(v1+8)=*(u32*)(data+8);
 *(s16*)(v1+0xc)=func_800844FC_ovl_01(*(s16*)(data+0xc));*(s16*)(v1+0xe)=func_800844FC_ovl_01(*(s16*)(data+0xe));*(s16*)(v1+0x10)=func_800844FC_ovl_01(*(s16*)(data+0x10));*(s16*)(v1+0x12)=func_800844FC_ovl_01(*(s16*)(data+0x12));*(s16*)(v1+0x14)=func_800844FC_ovl_01(*(s16*)(data+0x14));*(s16*)(v1+0x16)=func_800844FC_ovl_01(*(s16*)(data+0x16));
 }while(s3);}
 return s1;
}
