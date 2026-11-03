typedef struct S_8002FF24_obj
{
  void (*fn)(void *);
  u8 pad[0x10];
  s32 unk14;
  u32 unk18;
} S_8002FF24_obj;
typedef struct S_8002FF24_arg0
{
  S_8002FF24_obj *obj;
  u8 *heap;
} S_8002FF24_arg0;
typedef struct S_8002FF24_node
{
  struct S_8002FF24_node *next;
  u32 size;
  u32 unk8;
} S_8002FF24_node;
void *func_8002FCCC_ovl_01(S_8002FF24_arg0 *a, u32 size);
s32 func_8002FD30_ovl_01(S_8002FF24_arg0 *a, s32 code);
void *func_8002FF24_ovl_01(S_8002FF24_arg0 *a, u32 k, u32 n)
{
  u32 over;
  u8 *h;
  S_8002FF24_node *p;
  S_8002FF24_node *new_var;
  u32 off;
  over = n > 0x3B9AC9F0;
  h = a->heap;
  if (over)
  {
    func_8002FD30_ovl_01(a, 3);
  }
  off = n & 7;
  do
  {
    if (off)
    {
      n += 8 - off;
    }
    if (k >= 2)
    {
      a->obj->unk14 = 0xB;
      a->obj->unk18 = k;
      a->obj->fn(a);
    }
    off = n;
    p = func_8002FCCC_ovl_01(a, off + 0x10);
    off = k * 4;
  }
  while (0);
  if (!p)
  {
    func_8002FD30_ovl_01(a, 4);
  }
  *((u32 *) (h + ((short) 0x48))) += off + 0x10;
  new_var = *((S_8002FF24_node **) ((((u8 *) h) + off) + 0x38));
  p->next = new_var;
  p->size = off;
  p->unk8 = 0;
  *((S_8002FF24_node **) (0x38 + (((u8 *) h) + off))) = p;
  return ((u8 *) p) + 0x10;
}

