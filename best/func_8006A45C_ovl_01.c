typedef struct { s32 x; u8 pad[4]; s32 z; } A45;
typedef struct { s16 x; s16 y; u16 d; u16 n; } B45;
s32 func_8006A45C_ovl_01(A45 *a, B45 *b) {
 s32 t, y, x, r;
 t = ((s32)b->n * (a->x - b->x)) / (s32)b->d;
 x = a->z;
 y = x - b->y;
 r = 0;
 if (t < y) {
   r = 2;
   if (-t < x - (b->y + b->n)) r = 3;
 } else if (x - (b->y + b->n) < -t) r = 1;
 return r;
}
extern u8 D_80112794_ovl_01;
extern u8 D_80112908_ovl_01[];
extern s32 D_801129BC_ovl_01;
extern s32 D_80139E00;
void func_8006BDD4_ovl_01(void) {
 D_80112908_ovl_01[0]=8; D_80112908_ovl_01[1]=8; D_80112908_ovl_01[2]=8;
 D_80112908_ovl_01[3]=8; D_80112908_ovl_01[6]=8;
 D_80112908_ovl_01[4]=0; D_80112908_ovl_01[5]=0;
 D_801129BC_ovl_01=0;
 D_80139E00=(D_80139E00|1)&~2&~0x10&~0x20;
 D_80112794_ovl_01 &= 0xF7;
}
extern s32 func_8000E9D0(s32);
void func_8006BE40_ovl_01(void) {
 s32 x;
 x = 2; if (D_80112794_ovl_01 & 1) x=1; func_8000E9D0(x);
 x = 8; if (D_80112794_ovl_01 & 2) x=4; func_8000E9D0(x);
 x = 0x20; if (D_80112794_ovl_01 & 4) x=0x10; func_8000E9D0(x);
 x = 0x80; if (D_80112794_ovl_01 & 8) x=0x40; func_8000E9D0(x);
}
extern s32 D_80112758_ovl_01;
extern s32 D_80112918_ovl_01[];
extern s32 D_80112968_ovl_01[];
extern s32 func_8000E980(void *,...);
extern s32 func_8000EC60(s32);
extern void func_8006BE40_ovl_01(void);
void func_8006BEEC_ovl_01(s32 arg0) {
 s32 *src=&D_80112968_ovl_01[0], *dst=&D_80112918_ovl_01[0], *end=src+20;
 do { dst[0]=src[0]; dst[1]=src[1]; dst[2]=src[2]; dst[3]=src[3]; src+=4; dst+=4; } while(src!=end);
 func_8000E980(&D_80112918_ovl_01[0]);
 func_8006BE40_ovl_01();
 if (D_80112758_ovl_01) func_8000EC60(arg0);
}
