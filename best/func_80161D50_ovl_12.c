typedef struct { u8 b[0x400]; } O12;
void func_80161D50_ovl_12(O12 *p, s32 x, s32 y) {
 s32 i; for(i=0;i<12;i++) *(s32*)(p->b+0x2b4+i*4)=0;
 *(s32*)(p->b+4)=0x1000000;
 *(s16*)(p->b+0x26c)=0; *(s16*)(p->b+0x268)=0; *(s16*)(p->b+0x264)=0;
}
