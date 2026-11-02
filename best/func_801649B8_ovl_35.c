extern s32 D_80166748_ovl_35[];
s32 func_80077D48_ovl_01(s32,void*); s32 func_8016472C_ovl_35(void*,s32,s32); s32 func_801661F0_ovl_35(void*,s32,s32);
void func_801649B8_ovl_35(u8 *p,s32 arg1,s32 arg2){
 s32 i,off,n; s32 *dst; s32 val; s8 count;
 func_80077D48_ovl_01(3,p);
 p[0x2D6]=p[5];
 if(!(p[0x2BD]&1)){p[5]=7;func_801661F0_ovl_35(p,0,3);return;}
 p[0x26F]|=0x80;
 count=(s8)p[0x2CB]-15; p[0x2CB]=(u8)count;
 if(count<0)p[0x2CB]=0;
 count=(s8)p[0x2CB];
 if(count==0){
 i=3;off=0x468;
 do { n=((s8)p[0x2CB])/10; dst=(s32*)(*(u32*)(p+0x234)+off); val=D_80166748_ovl_35[n]; dst[0x60/4]=val; i++;off+=0x178; }while(i<7);
 }
 if(!p[0x2BC]){*(s16*)(p+6)=0x200;return;}
 if(p[0x2C5]){*(s16*)(p+6)=0x300;return;}
 *(s16*)(p+6)=0x100;func_8016472C_ovl_35(p,arg1,arg2);
}
