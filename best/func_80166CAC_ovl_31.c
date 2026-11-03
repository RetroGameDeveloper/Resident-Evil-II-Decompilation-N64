extern u8 D_800C7650_ovl_01[];
void func_80166CAC_ovl_31(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *)arg0;
    s32 x, y, z, t, dx, dy; u16 *xy; s16 v[3];
    if (p[6] == 0) {
        x = func_80033634_ovl_01(arg0);
        p[0x206] = ((u8 *)0x8016C254)[(u8)x % *(u8 *)0x8016C250];
    }
    xy = (u16 *)(0x8016C230 + (s32)(s8)p[0x206] * 2);
    x = xy[0]; y = xy[1]; *(u16 *)(p+0x1F4) += 1;
    switch (p[6]) {
    case 0:
        *(s32 *)(p+0x1E8)=0x06000700; p[6]=1;
        *(u16 *)(p+0x2C0)=0; p[0x207]=0; p[0x2D7]=0; *(u16 *)(p+0x2D4)=0;
        *(u16 *)(p+0x2B6) &= ~2;
        func_80052C9C_ovl_01(8,0x50,0xF);
        func_800334F8_ovl_01(arg0,arg1,arg2,0);
        func_80032DEC_ovl_01(arg0,(s16)x,(s16)y,0x10);
        func_80089D34_ovl_01(arg0,arg1,arg2,0x200);
        if(p[0x1E9]==0x13) {
            p[6]=2; *(s16 *)(p+0x1E2)=-0x44C; p[0x207]=0x12;
            if(p[5]==0x11){*(s16 *)(p+0x1E2)=-0x320;p[0x207]=0x10;}
            *(s16 *)(p+0x1E4)=0; *(u16 *)(p+0x1F4)=0; *(u16 *)(p+0x2B6)|=4;
            func_80032DEC_ovl_01(arg0,(s16)x,(s16)y,0x20);
            func_80077D48_ovl_01(2,arg0);
        }
        break;
    case 1:
        func_80032DEC_ovl_01(arg0,(s16)x,(s16)y,0x40);
        z=func_80089D34_ovl_01(arg0,arg1,arg2,0x200);
        p[6]+=z;
        *(s32 *)(p+0x2C)+=*(s16 *)(p+0x1E2);
        *(u16 *)(p+0x1E2)=*(u16 *)(p+0x1E2)+0x78-*(u16 *)(p+0x2C0);
        *(u16 *)(p+0x2C0)+=2;
        break;
    case 2:
        *(s32 *)(p+0x1E8)=0x0D000F00;p[6]=4;
        z=0x18000+(s32)D_800C7650_ovl_01;
        func_80032DEC_ovl_01(arg0,*(s32 *)(z+0x1AA8),*(s32 *)(z+0x1AB0),0x20);
        if(*(u16 *)(p+0x2B6)&0x10) func_80032DEC_ovl_01(arg0,*(s32 *)(z+0x1AA8),*(s32 *)(z+0x1AB0),0x20);
        func_80089D34_ovl_01(arg0,arg1,arg2,0x100);
        *(s32 *)(p+0x2C)+=*(s16 *)(p+0x1E2);
        *(u16 *)(p+0x1E2)=*(u16 *)(p+0x1E2)+0x78-*(u16 *)(p+0x2C0);
        *(u16 *)(p+0x2C0)+=2;
        if(*(s16 *)(p+0x1E2)>0 && !(*(u16 *)(p+0x2B6)&0x10)){
            *(u16 *)(p+0x2B6)|=0x10; *(s32 *)(p+0x1E8)=0x0E000F00;
        }
        break;
    }
    if(p[0x207]) {
        dx=x-*(s32 *)(p+0x28); dy=y-*(s32 *)(p+0x30);
        z=func_80040BE4_ovl_01(dx*dx+dy*dy);
        t=z/p[0x207];
        v[0]=t;v[1]=*(u16 *)(p+0x1E2);v[2]=0;
        z=func_80032D44_ovl_01(*(s16 *)(p+0x2A),*(s16 *)(p+0x32),x,y);
        func_8016B948_ovl_31(arg0,(s16)z,v);
        *(s32 *)(p+0x28)+=*(s16 *)(p+0x1E0);
        *(s32 *)(p+0x30)+=*(s16 *)(p+0x1E4);
        p[0x207]--;
    }
}
