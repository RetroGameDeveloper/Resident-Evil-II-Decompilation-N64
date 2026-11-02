s32 func_80032B8C_ovl_01(void *, s32);
s32 func_800334F8_ovl_01(void *, s32, s32, s32);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80077D48_ovl_01(s32, void *);
s32 func_80164C84_ovl_30(void *, s32);
void func_80164DB4_ovl_30(u8 *a, s32 b, s32 c) {
    u8 state=a[6];
    u8 *p=a+0x2b4;
    s32 one=1;
    switch(state) {
    case 0:
        a[6]=one;
        *(s32*)(a+0x1e8)=0x04000f00;
        func_800334F8_ovl_01(a,b,c,0);
        func_80089D34_ovl_01(a,b,c,0x100);
        func_80077D48_ovl_01(10,a);
        break;
    case 1:
        func_800334F8_ovl_01(a,b,c,0);
        func_80089D34_ovl_01(a,b,c,0x100);
        if ((*(u32*)*(u32**)(a+0x214)) & 0x10000) {
            a[0x26f]&=0x7f;
            if (!func_80164C84_ovl_30(a,one)) {
                p[0x1c]=0;
                *(s32*)(a+4)=0x01070000;
            } else *(s16*)(a+6)=0x200;
        }
        func_80032B8C_ovl_01(a,0);
        break;
    case 2:
        func_800334F8_ovl_01(a,b,c,0);
        if (func_80089D34_ovl_01(a,b,c,0x100)) {
            *(s32*)(a+4)=0x01020000;
            p[0x1c]=0;
        }
        func_80032B8C_ovl_01(a,0);
        break;
    }
}
