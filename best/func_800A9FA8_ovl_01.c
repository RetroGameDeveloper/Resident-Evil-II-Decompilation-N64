typedef struct S_elem S_elem;
typedef struct S_obj S_obj;
struct S_obj
{
  u8 unk00[8];
  s32 unk08;
  u8 unk0C[0x34 - 0x0C];
  s32 unk34;
  u8 unk38[0x3C - 0x38];
  u16 unk3C;
  u16 unk3E;
  s32 unk40;
};
struct S_elem
{
  S_elem *unk00;
  union 
  {
    f32 f;
    s32 i;
  } unk04;
  s32 unk08;
  s32 unk0C;
  f32 unk10;
  f32 unk14;
  S_obj *unk18;
};
typedef struct S_group
{
  s32 unk00;
  S_elem *unk04;
  S_elem *unk08;
} S_group;
extern S_group D_801484D0;
extern u8 D_80148650;
extern f32 D_800BA7C0_ovl_01;
extern f32 D_800BA7C4_ovl_01;
s32 func_800A8354_ovl_01(u16 arg0, s32 arg1, s32 arg2);
s32 func_800A9A38_ovl_01(S_obj *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5);
void func_800A9FA8_ovl_01(void)
{
  S_group *g;
  S_group *h;
  int new_var;
  S_elem *e;
  S_elem *other;
  S_obj *o;
  u32 mask;
  u16 c;
  s32 i;
  s32 r;
  i = 0;
  if (D_80148650 != 0)
  {
    mask = 0xFFFDFFFF;
    g = &D_801484D0;
 do { do { e = g->unk04; if (e != 0) { h = g; do { other = h->unk08; if (other != 0) { f32 d = e->unk04.f - other->unk04.f; if (!(d <= D_800BA7C0_ovl_01)) { if (d <= D_800BA7C4_ovl_01) { c = e->unk18->unk3E + 1; e->unk18->unk3E = c; if (c >= 0x14) { goto block10; } } else { e->unk18->unk3E = 0; goto block10; } } goto next; } block10: o = e->unk18; r = func_800A8354_ovl_01(o->unk3C, 0x7F, 0x40); o->unk34 = r; new_var = mask; if (r == (-1)) { s32 f; if (!(o->unk08 & 2)) { o->unk08 = (o->unk08 | 0x40000) & new_var; } } else { o->unk40 = 0; o->unk08 = o->unk08 | 0x100000; func_800A9A38_ovl_01(o, e->unk04.i, e->unk08, e->unk0C, e->unk10, e->unk14); o->unk08 = o->unk08 & mask; other = h->unk08; if (other != 0) { h->unk08 = other->unk00; } } next: e = e->unk00; } while (e != 0); } i++; g++; } while (i < D_80148650); } while (0);
  }
}
