typedef struct { unsigned char x[0x2D0]; } Obj;
extern unsigned char D_800C7650_ovl_01[];
extern unsigned char D_800E10F8_ovl_01[];
extern void func_80065400_ovl_01(void*, void*, int, int);
extern int func_80033634_ovl_01(void);
extern int func_80032EA4_ovl_01(int,int,int,int);
extern void func_80166214_ovl_13(void*,int);
extern void func_80165BE8_ovl_13(void*,int);
extern void func_80165F00_ovl_13(void*);
extern void (*D_80166600_ovl_13[])(void*,int,int);
void func_80164410_ovl_13(Obj *a,int b,int c){func_80065400_ovl_01(0,D_800E10F8_ovl_01,0,0);D_80166600_ovl_13[a->x[5]](a,b,c);}
void func_80164A70_ovl_13(Obj *a,s16 b){if(*(unsigned char*)(D_800C7650_ovl_01+0x21962)&8)*(int*)a->x|=0x4A;else *(int*)a->x=0;*(s16*)(a->x+0x134)=0x320;*(s16*)(a->x+0x136)=10;*(s16*)(a->x+0x130)=b;*(s16*)(a->x+0x138)=0;*(s16*)(a->x+0x132)=0;*(s16*)(a->x+0x13C)=-100;*(int*)(a->x+0x60)=0x101040;}
void func_80164AD0_ovl_13(Obj *a,int b){if(*(unsigned char*)(D_800C7650_ovl_01+0x21962)&8)*(int*)a->x|=0x1062;else *(int*)a->x=0;*(short*)(a->x+0x28)=b+((func_80033634_ovl_01()&255)<<2);*(short*)(a->x+0x11e)=0;*(short*)(a->x+0x2c)=(func_80033634_ovl_01()&127)+100;*(short*)(a->x+0x2a)=0;*(signed char*)(a->x+0x111)=20;*(short*)(a->x+0x2e)=0;*(short*)(a->x+0x30)=(func_80033634_ovl_01()&255)<<4;*(short*)(a->x+0x32)=0;}
void func_80163D10_ovl_13(Obj *a){int x=func_80032EA4_ovl_01(0,*(int*)(D_800C7650_ovl_01+0x19aa8),*(int*)(D_800C7650_ovl_01+0x19ab0),0xc0);if(x||!(*(unsigned short*)(a->x+0x2c6)&2)){func_80166214_ovl_13(a,0x15e);func_80165BE8_ovl_13(a,4);}func_80165F00_ovl_13(a);}
