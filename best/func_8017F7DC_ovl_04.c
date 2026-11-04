typedef struct { u8 b[6]; } Blob6;
extern u8 D_8018032C_ovl_04[]; extern u8 D_801806F0_ovl_04[];
extern s32 D_80180A58_ovl_04[],D_80180A5C_ovl_04[],D_80180CBC_ovl_04[],D_80180CF4_ovl_04[];
extern u8 D_80181F14_ovl_04[],D_80181F4C_ovl_04[]; extern s32 D_800C5270;
s32 func_80082230_ovl_01(void *,...); s32 func_800823B8_ovl_01(void *,...); s32 func_8000DE9C(s32,s32,s32); s32 func_8009C1B0_ovl_01(void *,s32); s32 func_8009C094_ovl_01(void *); s32 func_8000CB60(s32,s32,s32); s32 func_800879D0_ovl_01(s32); s32 func_8000C9E0(s32,s32,s32);
s32 func_8017F7DC_ovl_04(void *arg0,s32 arg1,void *arg2,s32 arg3) {
 u8 frame[0x1A]; volatile u8 space[0x1E8]; Blob6 b; s32 a,c,d; s32 *s6,*s4,*s7,*s1,*s0,*r; s32 i,idx,res; u32 x; u8 *fp=arg2;
 a=((s32 *)((u8 *)arg0+0x268))[0]; c=((s32 *)((u8 *)arg0+0x26C))[0]; d=((s32 *)((u8 *)arg0+0x270))[0]; b=*(Blob6 *)D_8018032C_ovl_04;
 s4=D_80180A5C_ovl_04;s7=D_80180A58_ovl_04;s6=D_80180CBC_ovl_04;s1=(s32 *)D_80181F4C_ovl_04;s0=(s32 *)D_80181F14_ovl_04;
 func_80082230_ovl_01(frame,0,0x1A);x=d; *((u8 *)arg0+3)=(x>>13)+((x&0x1FFF)!=0);func_800823B8_ovl_01((u8 *)arg0+4);
 *s4=7;s6[0]=(u32)arg1&255;s6[1]=(s32)s7;s7[1]=(s32)D_80180A58_ovl_04;s6[5]=d;s6[6]=a;s6[7]=arg3;
 func_80082230_ovl_01((u8 *)s6+0x22,fp,0x10);func_80082230_ovl_01((u8 *)s6+0x1E,fp+0x10,4);s6[3]=1;s6[2]=0;s6[13]=(s32)arg0;s6[14]=(s32)s0;
 if(!*D_801806F0_ovl_04){idx=(fp[0x12]-0x1A)*10+fp[0x13]-0x1A;r=(s32 *)(D_80181F4C_ovl_04+idx*0x2A4);
 r[0]=s6[5];r[1]=s6[6];r[2]=s6[7];r[3]=s6[8];r[4]=s6[9];r[5]=s6[10];r[6]=s6[11];r[7]=s6[12];
 func_8000DE9C((s32)fp,(s32)r,0);res=func_8009C1B0_ovl_01(r,0x820);*((s32 *)(D_80181F4C_ovl_04+idx*0x2A4-4))=res;
 if(D_800C5270&&func_8009C094_ovl_01(r))*s7=11;else *s7=0;func_8000CB60(*D_80180CF4_ovl_04,0,0);return *s7;}func_800879D0_ovl_01((s32)s4);func_8000C9E0((s32)s0,0,1);return *s7;
}
