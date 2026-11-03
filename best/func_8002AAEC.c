typedef struct { u8 pad[0x168]; void *state; void *fn1; void *fn2; } Obj;
typedef struct { u8 pad[0x34]; s32 active; s32 x38; s32 x3c; s32 index; s32 limit; s32 count; } State;
void func_8002AAEC(Obj *o, s32 a, s32 *b, s32 c) {
 State *s=o->state; s32 i;
 if (!s->active) { i=((s32 (*)(void*,void*))((void**)o->fn1)[1])(o,s->pad+0x0C); if (!i) return; s->active=1; }
 { s32 n=*(s32*)((u8*)o+0x10C); ((void (*)(Obj*,void*,s32*,s32,s32,s32,s32))((void**)o->fn2)[1])(o,(u8*)s+0x0C,(s32*)((u8*)s+0x38),n,a,c,0); if ((u32)s->x38 < (u32)n) { s->active=0; s->x38=0; } }
}
void func_8002AAFC(Obj *o, s32 a, s32 *b, s32 c) {
 State *s=o->state; s32 i,j,k;
 if (!s->active) { i=s->index; if (!((s32 (*)(void*,s32))((void**)o->fn1)[1])(o,*(s32*)((u8*)s+0x3C+4*i))) return; s->active=1; s->count++; }
 j=s->limit;
 if (j==1) goto process;
 if (j>=2) { if(j!=2)return; goto second; }
 if(j==0)s->x38=0;else return;
 s->limit=*(s32*)((u8*)o+0x10C)-1;
 if(s->count!=*(s32*)((u8*)o+0x110))s->limit=1; else func_8002A930_ovl_01(o);
 goto process;
second:
 ((void (*)(Obj*,void*,s32,s32,s32,s32,s32,s32))((void**)o->fn2)[1])(o,(u8*)s+0x0C,*(s32*)((u8*)s+0x3C+4*s->index),(s32)((u8*)s+0x38),s->limit,a,c,s->count);
 if((u32)s->x38<(u32)s->limit)return;
 s->limit=0; if((u32)*b<(u32)c)return; s->x38=0;
process:
 ((void (*)(Obj*,void*,s32*,s32,s32,s32,s32))((void**)o->fn2)[1])(o,(u8*)s+0x0C,(s32*)((u8*)s+0x38),s->limit,a,c,s->count);
 if((u32)s->x38<(u32)s->limit)return;
 if(s->count==1)func_8002A7E4_ovl_01(o);
 s->active=0; s->index^=1; s->x38=*(s32*)((u8*)o+0x10C)+1; s->limit=2; k=*(s32*)((u8*)o+0x10C); s->limit=k+2;
}
