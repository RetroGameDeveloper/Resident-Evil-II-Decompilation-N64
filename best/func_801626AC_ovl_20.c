typedef struct 
{
  u8 pad[5];
  u8 state;
} Arg;
typedef void (*Fn0)(void);
typedef void (*Fn3)(Arg *, s32, s32);
extern Fn0 D_80167F54_ovl_20[];
extern Fn3 D_80167F7C_ovl_20[];
void func_801626AC_ovl_20(Arg *p, s32 b, s32 c)
{
  Arg *new_var2;
  short new_var;
  int new_var3;
 do { D_80167F54_ovl_20[p->state](); new_var2 = p; ; new_var = (0, new_var2->state); do { if (1) { } } while (0); D_80167F7C_ovl_20[new_var](p, b, c); } while (0);
}
