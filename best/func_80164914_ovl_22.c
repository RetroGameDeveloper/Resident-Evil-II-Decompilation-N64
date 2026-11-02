extern s32 func_80036764_ovl_01_510(void*,s32); extern s32 func_80036764_ovl_01_510_24(void*,s32,s32,s32);
void func_80164914_ovl_22(void*p){u8*b=p;u8 st;u16 f;s32 r;static void *jtbl_80166070_ovl_22[6]={&&c0,&&c1,&&c2,&&c3,&&c4,&&c5};st=b[6];if(st>=6)goto out;goto *jtbl_80166070_ovl_22[st];
c0:st=b[6];*(u16*)(b+0x270)=0;b[6]=st+1;f=*(u16*)(b+0x270);if(f&8){b[6]=5;goto out;}if((s16)f<0){b[6]++;r=func_80036764_ovl_01_510(p,1);f=*(u16*)(b+0x270);if(f&2){b[6]++;func_80036764_ovl_01_510_24(p,12,31,0);f=*(u16*)(b+0x270);if(f&4){b[0x1e9]=1;b[6]++;r=func_80036764_ovl_01_510(p,12);b[6]+=r;}}}goto out;
c1:goto out;c2:goto out;c3:goto out;c4:goto out;
c5:f=*(u16*)(b+0x270);if(f&8){*(u32*)(b+4)=0x01010000;*(u16*)(b+0x1aa)&=0xbfff;}out:;}
