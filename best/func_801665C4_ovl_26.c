extern s32 func_8003334C_ovl_01(void *,s32,s32,s32);
extern s32 func_80089D34_ovl_01(void *,s32,s32,s32);
void func_80166388_ovl_26(void *arg0,s32 arg1,s32 arg2){
 u8 *p=arg0; u8 state=p[6];
 if(state==1) goto work;
 if(state<2) {
   if(state) goto done;
   *(u32 *)p |= 8; *(u32 *)(p+0x1E8)=0x02003F00; p[6]=1;
   goto work;
 }
 goto done;
work:
 {u16 n=*(u16 *)(p+0x66); *(u16 *)(p+0x66)=n+0x800;}
 func_8003334C_ovl_01(arg0,arg1,arg2,0);
 {u16 n=*(u16 *)(p+0x66); *(u16 *)(p+0x66)=n-0x800;}
 p[5]+=func_80089D34_ovl_01(arg0,arg1,arg2,0x40);
done:;
}
extern s32 func_8003420C_ovl_01(void *,s32);
void func_8016646C_ovl_26(void *arg0){u8*p=arg0;u8 state=p[0x2CF];u8*s=*(u8**)(p+0x208);
if(state==1)goto update;
if(state>=2)goto done;
if(state!=0)goto done;
p[0x2CF]=1;func_8003420C_ovl_01(s,0x6F3F3F00);p[0x207]=90;
update:*(u16*)(s+4)+=8;*(u16*)(s+6)+=8;p[0x207]--;
if(p[0x207]==0)p[0x2CF]=2;
done:;}
extern u32 D_800C7650_ovl_01[]; extern u32 D_800E10D0_ovl_01[];
u32 *func_801665C4_ovl_26(void *arg0){u8*p=arg0;u32 a3=*(u32*)(p+0x290);s32 a1=*(s32*)(p+0x28C);u32 a2=a3&0x3fffffff;u32*t0=D_800E10D0_ovl_01;u32*t1;
p[0x2B4]=0;t1=(u32*)((u8*)D_800C7650_ovl_01+0x18000);
if((t1[0x1A5C/4]&0x10000000)==0)goto done;
if(a1<0x1771){if(a2<0x1771)goto done;}
if((a3&0xc0000000)!=0x40000000)goto done;
if((s32)a2>=a1)goto done;
t0=(u32*)((u8*)t1+0x1d3c);p[0x2B4]=1;
done:return t0;}
void func_80166200_ovl_26(void *arg0){u8*p=arg0; if(p[6]){func_80089D34_ovl_01(arg0,0,0,0x40);return;} p[6]=1;*(u32*)(p+0x1E8)=0x03003F00;p[0x25C]|=1;func_80089D34_ovl_01(arg0,0,0,0x40);}
