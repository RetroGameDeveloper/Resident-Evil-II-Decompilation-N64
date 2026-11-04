#ifndef M2C_DEFINES
#define M2C_DEFINES
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
typedef struct O
{
  u8 pad[0x164];
  void *p164;
} O;
void func_8002DDE4_ovl_01(void *arg0)
{
  O *p = (O *) arg0;
  void **new_var;
  void **new_var2;
  void *x = ((void *(*)(void *, s32, s32)) (*((void ***) (((u8 *) arg0) + 4)))[0])(arg0, 1, 0x24);
  new_var = (void **) x;
  p->p164 = x;
  *((void **) x) = (void *) 0x8002DC0C;
  *(new_var + 1) = (void *) 0x8002DD64;
  new_var2 = &arg0;
  do
  {
    func_8002DA80_ovl_01(arg0, arg0, *new_var2);
  }
  while (0);
}

