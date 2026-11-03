typedef struct { s32 x; s16 a; s16 pad; s32 y; s16 b; } P; s16 func_80032D44_ovl_01(s16,s16,s16,s16); s32 func_80083800_ovl_01(s16,s16*,s16*);
s32 func_80036764_ovl_01_2FC(P*p,P*q,s16 z) { s16 x,y,t; s32 d; u32 sign;
 x=z;y=0;t=0; d=((p->x-q->x)&0x80000000)|(((p->y-q->y)&0x80000000)>>1);
 sign=func_80032D44_ovl_01(p->a,p->b,q->a,q->b); func_80083800_ovl_01((s16)sign,&x,&x);
 p->x+=x;p->y+=y;d^=(p->x-q->x)&0x80000000;if(d!=(((p->y-q->y)&0x80000000)>>1)){p->x=q->x;p->y=q->y;return 1;}return 0;}
