/* identical to osYieldThread in V-RALLY-PAL (matched), with its names changed by decompdecomp */
/* identical to func_80011390 in V-RALLY (matched), with its names changed by decompdecomp */
/* identical to func_80095C90 in V-RALLY (matched), with its names changed by decompdecomp */

s32 func_80000DD4();
s32 func_800072E0();
s32 func_80007300();
extern char D_800A2518[];
extern void *D_800A2520;
static inline char *inline_fn()
{
  return ((char *) D_800A2520) + 0x10;
}

void func_80011390(void)
{
  int new_var;
  s32 temp_s0;
  temp_s0 = func_800072E0();
  new_var = 2;
  *((s16 *) inline_fn()) = new_var;
  func_80000DD4(&D_800A2518, 2);
  func_80007300(temp_s0);
}
