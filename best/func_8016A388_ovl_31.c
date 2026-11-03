extern u8 D_800C7650_ovl_01[];
s32 func_8016A388_ovl_31(void *arg0, s32 arg1, s32 arg2) {
    u8 *p=(u8*)arg0; s32 state=p[6]; s32 ret=0; s32 t; s32 *q; s32 i;
    switch(state) {
    case 0:
      *(s32*)(p+0x1e8)=0x01000700; p[6]=1;
      *(s32*)((u8*)D_800C7650_ovl_01+0x18000+0x1a5c)|=0x40;
      p[0x25c]=1; p[0x26f]|=0x80;
      func_80077B0C_ovl_01(0x04010001,p+0x28);
      *(s32*)p|=2; func_80052C9C_ovl_01(30,120,5);
      t=*(s16*)(p+0x200)-*(s32*)(p+0x28); *(s32*)(p+0x28)+=t>>1;
      t=*(s16*)(p+0x204)-*(s32*)(p+0x30); *(s32*)(p+0x30)+=t>>1;
      func_80032F24_ovl_01(p,*(s16*)(p+0x1f6),0x100);
      ret=func_80089D34_ovl_01(p,arg1,arg2,0x200);
      if(p[0x1e9]==8){p[6]=2;*(s16*)(p+0x66)=*(s16*)(p+0x1f6);func_80077B0C_ovl_01(0x04010001,p+0x28);} break;
    case 1:
      *(u16*)((u8*)D_800C7650_ovl_01+0x18000+0x1ae6)+=0x800;
      func_8003334C_ovl_01(p,arg1,arg2,0);
      *(u16*)((u8*)D_800C7650_ovl_01+0x18000+0x1ae6)-=0x800;
      ret=func_80089D34_ovl_01(p,arg1,arg2,0x200); if(!ret)p[6]=3;
      if(p[0x1e9]==30){func_80077B0C_ovl_01(0x04000001,p+0x28);break;}
      break;
    case 2:
      *(s32*)(p+0x1e8)=0x02000000; *(s16*)(p+0x66)+=100; *(s32*)p &= -9;
      if(p[0x1e9]<10){ s16 a=0x100,b,c; a-=func_80033634_ovl_01()*2; b=a-(func_80033634_ovl_01()&255)*2; c=b-(func_80033634_ovl_01()&255)*2; func_800377B0_ovl_01(((func_80033634_ovl_01()&1)<<16)+0x830+(func_80033634_ovl_01()&255)*2,*(s16*)(p+0x66),(u8*)*(u32*)(p+0x234)+0x38,&a);}
      if(p[0x1e9]==3)func_80077B0C_ovl_01(0x04020001,p+0x28);
      if((*(u32*)*(u32*)(p+0x214)&0x10000)){func_80077F60_ovl_01(2,0,p);func_80052C00_ovl_01(3,0);func_80052C9C_ovl_01(6,250,0);}
      func_800334F8_ovl_01(p,arg1,arg2,0); func_80089D34_ovl_01(p,arg1,arg2,0x400); func_80032B8C_ovl_01(p,0x800);
      if(p[0x1e9]==35){p[6]=5;*(s32*)(p+0x1e8)=0x02550f00;func_80052C00_ovl_01(5,0);func_80052C9C_ovl_01(5,120,0);func_80052D40_ovl_01(60,250,0,5);} break;
    case 3:
      if(p[0x1e9]<10){func_80033634_ovl_01();func_80033634_ovl_01();func_80033634_ovl_01();func_80033634_ovl_01();func_80033634_ovl_01();}
      if(p[0x1e9]==3)func_80077B0C_ovl_01(0x04020001,p+0x28);
      if((*(u32*)*(u32*)(p+0x214)&0x10000)){func_80077F60_ovl_01(2,0,p);func_80052C00_ovl_01(3,0);func_80052C9C_ovl_01(6,250,0);}
      func_800334F8_ovl_01(p,arg1,arg2,0); ret=func_80089D34_ovl_01(p,arg1,arg2,0x400); func_80032B8C_ovl_01(p,0x800);
      if(p[0x1e9]==35){p[6]=5;*(s32*)(p+0x1e8)=0x02550f00;func_80052C00_ovl_01(5,0);func_80052C9C_ovl_01(5,120,0);func_80052D40_ovl_01(60,250,0,5);} break;
    case 4: ret=func_80089D34_ovl_01(p,*(s32*)(p+0x1a4),*(s32*)(p+0x218),0x100);p[6]+=ret;break;
    }
    return ret;
}
