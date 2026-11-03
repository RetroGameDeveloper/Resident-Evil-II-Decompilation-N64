s16 func_800844FC_ovl_01(s16);
s32 func_80084514_ovl_01(s32);
extern u8 D_800C7650_ovl_01[];
extern s16 *D_800EBB48_ovl_01[];
extern s16 *D_800EBC48_ovl_01[];
extern u8 D_800EBD48_ovl_01[];
extern u8 D_800EBD60_ovl_01[];
s8 func_800377B0_ovl_01(u32 arg0,s16 arg1,s32 *arg2,s32 *arg3) {
 s32 sp10; s16 *p; s16 *q; s16 *r; s16 *rec; s32 *rec32;
 s32 idx; s32 count; s32 i; s32 temp; s32 *src; s32 *dst; u8 *base;
 s32 mode; s32 j; s32 k;
 mode=arg0>>24;
 if ((D_800C7650_ovl_01[0x21962]&12)==0 && mode!=0 && mode!=8 && mode!=9 && mode!=0x1f && mode!=0x26) return 0;
 idx=mode*4; p=D_800EBC48_ovl_01[idx/4]; 
 count=(arg0>>16)&255;
 i=func_800844FC_ovl_01(p[(count&7)]);
 p=(s16*)((u8*)p+((i<<16)>>14));
 j=func_800844FC_ovl_01(*p); p+=2;
 q=D_800EBB48_ovl_01[idx/4];
 mode=func_800844FC_ovl_01(q[0]);
 sp10=((mode<<16)>>14)+4;
 count=j;
 base=D_800EBD48_ovl_01+0x2E80-0x7c;
 for(i=0x60;i!=0;i--,base-=0x7c) if (*(u16*)(base+0x18)==0) break;
 if(i==0) return -1;
 rec=(s16*)base; rec32=(s32*)base;
 *(u16*)(base+0x18)=0xA003; base[0x1a]=0;base[0x1b]=0;
 rec32[7]=func_80084514_ovl_01((count<<16)|mode);
 *(u16*)(base+0x20)=func_800844FC_ovl_01(*(u8*)(q+5));
 *(u16*)(base+0x22)=arg1;
 rec32[9]=0;
 *(u16*)(base+0x28)=func_80084514_ovl_01(func_800844FC_ovl_01(*(s16*)((u8*)q+6))<<16);
 if(arg3){rec32[11]=arg3[0];rec32[12]=arg3[1];}else{rec32[11]=0;rec32[12]=0;}
 rec32[13]=0;*(u16*)(base+0x38)=0;rec32[16]=0x100;rec32[15]=0;rec32[17]=0;rec32[18]=0;
 *(u16*)(base+0x3a)=arg0;
 *(u16*)(base+0x32)=*(u16*)((u8*)q+4)+((count>>3)<<6);
 src=arg2; for(i=0;i<8;i++)rec32[19+i]=src[i];
 rec32[27]=(s32)arg2;rec32[28]=(s32)((u8*)q+8);rec32[29]=(s32)((u8*)q+sp10*2);
 rec32[30]=(s32)(p+2);rec32[0]=*(s32*)(p+4);
 count=j-1;
 *(u16*)(base+4)=func_800844FC_ovl_01(*(s16*)((u8*)p+8));
 *(u16*)(base+6)=func_800844FC_ovl_01(*(s16*)((u8*)p+10));
 rec32[2]=*(s32*)((u8*)p+12);
 for(k=0;k<6;k++) *(u16*)(base+12+2*k)=func_800844FC_ovl_01(*(s16*)((u8*)p+12+2*k));
 while(count!=0){
  base=D_800EBD48_ovl_01+count*0; /* placeholder */
  return -2;
 }
 return (s8)i;
}
