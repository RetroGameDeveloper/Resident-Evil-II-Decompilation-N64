s32 func_80032B8C_ovl_01(void *, s32);
void func_800334F8_ovl_01(void *, s32, s32, s32);
void func_80077D48_ovl_01(s32, void *);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
void func_80164F2C_ovl_30(void *arg0, s32 arg1, s32 arg2) {
    s32 force_frame[2];
    void *s0 = arg0; s32 s1=arg1; s32 s2=arg2;
    s8 *s3=(s8 *)arg0+0x2B4;
    force_frame[1]=0;
    if (*(u8 *)((u8 *)s0+6)==0) {
        *(u8 *)((u8 *)s0+6)=1; *s3=2;
        *(s32 *)((u8 *)s0+0x1E8)=0x06000F00;
        func_800334F8_ovl_01(NULL,0,0,0);
        func_80089D34_ovl_01(s0,s1,s2,0x100);
        func_80077D48_ovl_01(0xB,s0);
    } else {
        func_800334F8_ovl_01(s0,s1,s2,0);
        if (func_80089D34_ovl_01(s0,s1,s2,0x100)) {
            *(s32 *)((u8 *)s0+4)=0x01020000;
            *(u8 *)((u8 *)s0+0x26F) &= 0x7F;
            s3[0x1C]=0;
        }
        func_80032B8C_ovl_01(s0,0);
    }
}
