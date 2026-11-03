extern unsigned char D_800C7650[];
void func_80162D90_overlay_014(unsigned int *p, int mode) {
    unsigned int x, mask=0xE3ffffff;
    switch(mode) {
    case 0: x=*p & mask; x |= 0x10000000; *p=x; return;
    case 1: x=*p & mask; x |= 0x18000000; *p=x; return;
    case 2: x=*p & mask; x |= 0x08000000; *p=x; return;
    case 3: x=*p & mask; x |= 0x0c000000; *p=x; return;
    case 4:
      if (*(unsigned short *)(D_800C7650+0x1C2A)==7 || *(unsigned short *)(D_800C7650+0x1C2A)==8)
        {x=*p & mask; x |= 0x0c000000;} else {x=*p & mask; x |= 0x04000000;}
      *p=x; return;
    case 5: *p &= mask; return;
    default: return;
    }
}
