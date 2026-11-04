extern s32 D_800E10D0;
void func_801740A8_overlay_058(s32 arg0)
{
  char *new_var;
  s32 *new_var2;
  new_var2 = &D_800E10D0;
  *((s8 *) ((new_var = (char *) new_var2) + 4)) = 2;
  *((s8 *) (((char *) (&D_800E10D0)) + 5)) = (s8) (arg0 + 2);
  new_var2 = ((char *) (&D_800E10D0)) + 6;
  *((s8 *) new_var2) = 0;
  *((s8 *) (((char *) (&D_800E10D0)) + 7)) = 0;
}

