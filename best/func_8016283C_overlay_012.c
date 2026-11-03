s32 func_80032B8C_ovl_01(void *,s32); s16 func_80032EA4_ovl_01(void *,s16,s16,s16); s32 func_80065400_ovl_01(void *,void *,s32,s32); s32 func_801664A8_ovl_12(s32,s32); s32 func_80166510_ovl_12(void *,s16); s32 func_80166568_ovl_12(void *); void *func_80166B54_ovl_12(void *);
void func_8016283C_overlay_012(void *arg0) {u8 *s0=(u8*)arg0+0x2B4; s16 s1=0; s32 result; void *s3;
 func_801664A8_ovl_12(0x28,0xF0);
 if(s0[5]==0) {s3=func_80166B54_ovl_12(arg0); func_80065400_ovl_01(arg0,(u8*)s3+0x28,0,0); s1=func_80032EA4_ovl_01(arg0,*(s16*)((u8*)arg0+0x260),*(s16*)((u8*)arg0+0x262),*(s16*)(s0+0xC)); if((u8)s0[0x18]>=0x10){if(s1==0)s1=*(s16*)(s0+0xC);} *(u16*)((u8*)arg0+0x66)+=s1;}
 else {s0[5]--;if(!s0[5]||(*(s32*)((u8*)arg0+0x1AC)&1)){s0[5]=0;s0[8]=0;}}
 func_80032B8C_ovl_01(arg0,0);func_80166510_ovl_12(arg0,s1);result=func_80166568_ovl_12(arg0);
 if(result){if(result<0){*(u16*)(s0+2)+=10;if(result==-2){*(u8*)((u8*)arg0+5)=8;*(u16*)((u8*)arg0+6)=0;return;}if(result==-4)s0[4]=1;}else{*(u8*)((u8*)arg0+5)=3;*(u16*)((u8*)arg0+6)=0;return;}}
 if(*(s16*)(s0+2)>=0x1C3){if(*(s16*)((u8*)s3+0x1F2)>=0x15)*(u16*)(s0+2)=0;s0[4]=1;}if(s0[4]){s0[4]=0;*(u16*)((u8*)arg0+6)=0x200;}
}
