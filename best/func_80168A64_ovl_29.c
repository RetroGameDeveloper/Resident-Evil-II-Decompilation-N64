typedef struct 
{
  u8 pad[0x300];
} Obj;
volatile unsigned char func_80168A64_ovl_29(Obj *a, s32 b, s32 c)
{
  s32 x = (*a).pad[0];
  volatile int new_var3;
  volatile int new_var4[2];
  x++;
  new_var4[1] = b;
  new_var3 = c;
  new_var3 = x + new_var4[1];
  new_var3 = new_var3 + new_var3;
  new_var4[0] = new_var3;
  new_var3 = new_var4[0];
  return new_var3;
}

