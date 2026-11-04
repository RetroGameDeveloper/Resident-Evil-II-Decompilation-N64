s32 func_80033174_ovl_01(s32 *);
extern s32 D_800E10D0;
void func_8016F808_overlay_051(s32 arg0)
{
  char *new_var2;
  char *new_var;
  *((s32 *) (((char *) (&D_800E10D0)) + 0x250)) = arg0;
  *((s32 *) (new_var + 4)) = 0x02000000;
  new_var = (char *) (&D_800E10D0);
  new_var = ((char *) (&D_800E10D0)) + 5;
  new_var2 = ((char *) (&D_800E10D0)) + 5;
  *((u8 *) new_var2) = (u8) ((*((u8 *) new_var)) + func_80033174_ovl_01(&D_800E10D0));
}

