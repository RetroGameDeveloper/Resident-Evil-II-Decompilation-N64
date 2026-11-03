extern s16 *D_800EBC48_ovl_01[];
extern s16 *D_800EBB48_ovl_01[];
extern u8 D_800EBD48_ovl_01[];
extern u8 D_800EBD60_ovl_01[];
s16 func_800844FC_ovl_01(s16);
s32 func_80084514_ovl_01(s32);
typedef struct {s32 a[8];} Args;
typedef struct {s32 a;u16 b;} Extra;
s32 func_80037C80_ovl_01(u32 arg0,u16 arg1,Args *arg2,Extra *arg3,Extra *arg4){
 s32 s6=arg0>>24,s0=s6*4; s16 *s5=D_800EBC48_ovl_01[s6]; s32 s2=(arg0>>16)&255,s3=0x60; s16 *s0p; s32 s4; s32 size; u8 *v1,*s1; s32 i;
 s5+=((s32)func_800844FC_ovl_01(s5[s2&7])<<16)>>14; func_800844FC_ovl_01(*s5);
 s0p=D_800EBB48_ovl_01[s6]; s4=func_800844FC_ovl_01(*s5); size=(((s32)func_800844FC_ovl_01(*s0p)<<16)>>14)+4;
 v1=D_800EBD48_ovl_01+0x2e04; while(*(u16*)(v1+0x18)){s3--;v1-=0x7c;if(!s3)return -1;}
 s1=v1; *(u16*)(s1+0x18)=0xa003;s1[0x1a]=0;s1[0x1b]=0; *(s32*)(s1+0x1c)=func_80084514_ovl_01((s2<<16)|s6);
 *(u16*)(s1+0x20)=func_800844FC_ovl_01(*(s16*)((u8*)s0p+10));*(u16*)(s1+0x22)=arg1;*(s32*)(s1+0x24)=0;
 *(s32*)(s1+0x28)=func_80084514_ovl_01(func_800844FC_ovl_01(*(s16*)((u8*)s0p+6))<<16);
 if(arg3){*(s32*)(s1+0x2c)=arg3->a;*(s32*)(s1+0x30)=*(s32*)((u8*)arg3+4);}else{*(s32*)(s1+0x2c)=0;*(s32*)(s1+0x30)=0;}
 *(s32*)(s1+0x40)=0x100;*(s32*)(s1+0x34)=0;*(u16*)(s1+0x38)=0;*(u16*)(s1+0x3a)=arg0;*(s32*)(s1+0x3c)=0;*(s32*)(s1+0x44)=0;*(u16*)(s1+0x48)=0;*(u16*)(s1+0x32)=*(u16*)((u8*)s0p+4)+((s2>>3)<<6);
 for(i=0;i<8;i++)*(s32*)(s1+0x4c+i*4)=arg2->a[i];
 *(s32*)(s1+0x6c)=(s32)arg2;*(s32*)(s1+0x70)=(s32)((u8*)s0p+8);*(s32*)(s1+0x74)=(s32)((u8*)s0p+size*2);
 s5=(s16*)((u8*)s5+4);*(s32*)s1=*(s32*)((u8*)s5+4);*(s32*)(s1+0x78)=(s32)((u8*)s5+4);s4--;
 *(s16*)(s1+4)=func_800844FC_ovl_01(*(s16*)((u8*)s5+8));*(s16*)(s1+6)=func_800844FC_ovl_01(*(s16*)((u8*)s5+10));*(s32*)(s1+8)=*(s32*)((u8*)s5+12);
 *(s16*)(s1+0xc)=func_800844FC_ovl_01(*(s16*)((u8*)s5+12));*(s16*)(s1+0xe)=func_800844FC_ovl_01(*(s16*)((u8*)s5+14));*(s16*)(s1+0x10)=func_800844FC_ovl_01(*(s16*)((u8*)s5+16));*(s16*)(s1+0x12)=func_800844FC_ovl_01(*(s16*)((u8*)s5+18));*(s16*)(s1+0x14)=func_800844FC_ovl_01(*(s16*)((u8*)s5+20));*(s16*)(s1+0x16)=func_800844FC_ovl_01(*(s16*)((u8*)s5+22));
 if(arg4){*(s32*)(s1+0x44)=arg4->a;*(u16*)(s1+0x48)=arg4->b;}
 if(s4){u8 *base=D_800EBD48_ovl_01;u8 *tab=D_800EBD60_ovl_01;u8 *dst,*src,*q,*data;s16 *a0;
 do{if(!s3)return -2;v1=base+s3*0x7c-0x7c;while(*(u16*)(v1+0x18)){s3--;v1-=0x7c;if(!s3)return -2;}
 dst=v1+0x18;src=tab+s6*0x7c;*(u16*)(v1+0x18)=0xa003;v1[0x1b]=0;
 for(q=src;q!=src+0x60;q+=0x10,dst+=0x10){*(u32*)dst=*(u32*)q;*(u32*)(dst+4)=*(u32*)(q+4);*(u32*)(dst+8)=*(u32*)(q+8);*(u32*)(dst+12)=*(u32*)(q+12);}
 *(u32*)dst=*(u32*)(src+0x60);v1[0x1a]=s3;a0=s5;for(i=s4;i;i--)a0+=((s32)func_800844FC_ovl_01(*a0)*0x18)/2+2;data=(u8*)(a0+2);
 *(u32*)(v1+0x78)=(u32)data;*(u32*)v1=*(u32*)(data+4);s4--;
 *(s16*)(v1+4)=func_800844FC_ovl_01(*(s16*)(data+4));*(s16*)(v1+6)=func_800844FC_ovl_01(*(s16*)(data+6));*(u32*)(v1+8)=*(u32*)(data+8);
 *(s16*)(v1+0xc)=func_800844FC_ovl_01(*(s16*)(data+0xc));*(s16*)(v1+0xe)=func_800844FC_ovl_01(*(s16*)(data+0xe));*(s16*)(v1+0x10)=func_800844FC_ovl_01(*(s16*)(data+0x10));*(s16*)(v1+0x12)=func_800844FC_ovl_01(*(s16*)(data+0x12));*(s16*)(v1+0x14)=func_800844FC_ovl_01(*(s16*)(data+0x14));*(s16*)(v1+0x16)=func_800844FC_ovl_01(*(s16*)(data+0x16));
 if(arg4){*(s32*)(v1+0x44)=arg4->a;*(u16*)(v1+0x48)=arg4->b;}
 }while(s4);}
 return s6;
}
