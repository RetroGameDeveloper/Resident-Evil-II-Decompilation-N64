typedef struct {u8 *p; s32 n; s32 pad8; s32 (*refill)(void *);} Reader;
typedef struct {s32 (*f0)(void *); s32 (*f4)(void *,s32); s32 pad8; s32 state; s32 x; s32 y; s32 z;} Ops;
typedef struct { Ops *ops; void *alloc; u8 pad8[8]; Reader *reader; s32 x; s32 y; s32 z; s32 unk24[34]; s32 raw; s32 padac; void *buffer; u8 padb4[0xc0]; struct {u8 pad[0x54]; s32 flag;} *extra;} Obj;
s32 func_8002AFD4_ovl_01(Obj *a){
 Reader *r=a->reader; u8 *p=r->p; s32 left=r->n; s32 high; s32 low; s32 i; s32 v; s32 *buf; s32 *out; s32 ret=0;
 if(!left){ret=0;if(!r->refill(a))return 0;p=r->p;left=r->n;}
 high=*p++<<8; left--;
 if(!left){if(!r->refill(a))return 0;p=r->p;left=r->n;}
 high+=*p++;left--;
 if(!left){if(!r->refill(a))return 0;p=r->p;left=r->n;}
 a->raw=*p++;left--;
 if(!left){if(!r->refill(a))return 0;p=r->p;left=r->n;}
 a->y=*p++<<8;left--;
 if(!left){if(!r->refill(a))return 0;p=r->p;left=r->n;}
 a->y+=*p++;left--;
 if(!left){if(!r->refill(a))return 0;p=r->p;left=r->n;}
 a->x=*p++<<8;left--;
 if(!left){if(!r->refill(a))return 0;p=r->p;left=r->n;}
 a->x+=*p++;left--;
 if(!left){if(!r->refill(a))return 0;p=r->p;left=r->n;}
 a->z=*p++;left--;
 a->x-=8;
 a->ops->x=a->x;a->ops->y=a->y;a->ops->z=a->z;
 a->ops->state=0x5c; a->ops->f4(a,1);
 if(a->extra->flag){a->ops->state=0x32;a->ops->f0(a);}
 if(!a->y||!a->x||a->z<=0){a->ops->state=0x1a;a->ops->f0(a);}
 if(a->y> -36||a->x> -36){a->ops->state=0x23;a->ops->y=-36;a->ops->f0(a);}
 if(a->raw!=8){a->ops->state=12;a->ops->y=a->raw;a->ops->f0(a);}
 if(a->z>=11){a->ops->state=19;a->ops->y=a->z;a->ops->z=10;a->ops->f0(a);}
 if(high-8!=a->z*3){a->ops->state=9;a->ops->f0(a);}
 if(!a->buffer) a->buffer=a->alloc;
 buf=a->buffer;out=buf+4; for(i=0;i<a->z;i++){out[-3]=i; if(!left){if(!r->refill(a))return 0;p=r->p;left=r->n;} *buf++=*p++;left--; if(!left){if(!r->refill(a))return 0;p=r->p;left=r->n;} v=*p++;left--; out[-2]=v>>4;out[-1]=v&15; if(!left){if(!r->refill(a))return 0;p=r->p;left=r->n;} *out=*p++;left--; a->ops->state=0x5d;a->ops->f4(a,1);out+=20;buf+=20;}
 a->extra->flag=1;r->p=p;r->n=left;return 1;
}
