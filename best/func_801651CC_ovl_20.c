typedef struct O
{
  u8 p[0x66];
  s16 x;
  u8 q[0x1cc];
  s32 ptr;
} O;
extern s32 func_80033634_ovl_01(void);
extern void func_800377B0_ovl_01(s32, s16, s32, s16 *);
void func_801651CC_ovl_20(O *a, s32 flag)
{
  s16 v[3];
  s32 b;
  s32 __repair_phase_b;
  s32 __repair_b_1;
  s32 n;
s32 __repair_phase_n;
  s32 __repair_n_1;
  b = a->ptr;
  v[0] = 0x80 - (func_80033634_ovl_01() & 255);
  v[1] = ((s16) 0xfc98) - (func_80033634_ovl_01() & 255);
  v[2] = 0x80 - (func_80033634_ovl_01() & 255);
  n = func_80033634_ovl_01() & 255;
  do
  {
    func_800377B0_ovl_01(((n << 3) + 0x17d0) | 0x06000000, a->x, b + 0x38, v);
    b = a->ptr;
    v[0] = 0x80 - (func_80033634_ovl_01() & 255);
    v[1] = 0x80 - (func_80033634_ovl_01() & 255);
    v[2] = 0x80 - (func_80033634_ovl_01() & 255);
    n = func_80033634_ovl_01() & 255;
    func_800377B0_ovl_01(((n << 3) + 0x17d0) | 0x06000000, a->x, b + 0x38, v);
    b = a->ptr;
    v[0] = 0x80 - (func_80033634_ovl_01() & 255);
    v[1] = ((s16) 0xfc98) - (func_80033634_ovl_01() & 255);
    v[2] = 0x80 - (func_80033634_ovl_01() & 255);
    n = func_80033634_ovl_01() & 255;
    func_800377B0_ovl_01(((n << 3) + 0x1bb8) | 0x06000000, a->x, b + 0x1b0, v);
    b = a->ptr;
    v[0] = 0x80 - (func_80033634_ovl_01() & 255);
    v[1] = 0x80 - (func_80033634_ovl_01() & 255);
    v[2] = 0x80 - (func_80033634_ovl_01() & 255);
    n = func_80033634_ovl_01() & 255;
    func_800377B0_ovl_01(((n << 3) + 0x1bb8) | 0x06000000, a->x, b + 0x1b0, v);
    __repair_phase_b = a->ptr;
    v[0] = 0x80 - (func_80033634_ovl_01() & 255);
    v[1] = 0x80 - (func_80033634_ovl_01() & 255);
    v[2] = 0x80 - (func_80033634_ovl_01() & 255);
    n = func_80033634_ovl_01() & 255;
    func_800377B0_ovl_01(((n << 3) + 0x13e8) | 0x06000000, a->x, __repair_phase_b + 0xd70, v);
    b = a->ptr;
    v[0] = 0x80 - (func_80033634_ovl_01() & 255);
    v[1] = 0x80 - (func_80033634_ovl_01() & 255);
    v[2] = 0x80 - (func_80033634_ovl_01() & 255);
  }
  while (0);
  __repair_n_1 = func_80033634_ovl_01() & 255;
  func_800377B0_ovl_01(((__repair_n_1 << 3) + 0x13e8) | 0x06000000, a->x, b + 0x790, v);
  __repair_b_1 = a->ptr;
  v[0] = 0x80 - (func_80033634_ovl_01() & 255);
  v[1] = 0x80 - (func_80033634_ovl_01() & 255);
  v[2] = 0x80 - (func_80033634_ovl_01() & 255);
  ;
  func_800377B0_ovl_01((((func_80033634_ovl_01() & 255) << 3) + 0x13e8) | 0x06000000, a->x, __repair_b_1 + 0x4a0, v);
  if (flag & 255)
  {
    __repair_b_1 = a->ptr;
    n = func_80033634_ovl_01() & 255;
    func_800377B0_ovl_01(((n << 2) + 0x17d0) | 0x040f0000, a->x, __repair_b_1 + 0x328, 0);
    __repair_b_1 = a->ptr;
    __repair_phase_n = func_80033634_ovl_01() & 255;
    func_800377B0_ovl_01(((__repair_phase_n <<= 2) + 0x1fa0) | 0x040f0000, a->x, __repair_b_1 + 0x38, 0);
  }
}

