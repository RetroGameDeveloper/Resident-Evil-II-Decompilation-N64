extern u8 D_80171DD0_ovl_07[];
s32 func_80170748_ovl_07(s32 a0){s32 i;u8 x;u8 *p=D_80171DD0_ovl_07;
i=11;do{i--;x=p[i*4+0x398];if(x==(a0&255)){if(x==0x11){if(p[i*4+0x399]==255)return i+1;}else if(x==15){if(p[i*4+0x399]==255)return i+1;}else return i+1;}}while(i!=0);
i=64;do{i--;x=p[i*4+0x3c4];if(x==(a0&255)){if(x==17)goto chk;if(x!=15){i++;return i<<16;} if(x==15)goto chk;chk:if(p[i*4+0x3c5]!=255)goto loop;i++;return i<<16;loop:;} }while(i!=0);return 0;}
