extern s32 D_800E10D0;
void func_801740CC_overlay_058(void *arg0, s32 arg1, s32 arg2)
{
  char pad;
  char *new_var;
  *((void **) (((char *) (&D_800E10D0)) + 0x250)) = arg0;
  *((s32 *) (((char *) (&D_800E10D0)) + 0x224)) = (s32) (*((s32 *) (((char *) arg0) + 0x224)));
  pad = arg2;
  *((s32 *) (new_var = ((char *) (&D_800E10D0)) + 4)) = 0x05000000;
  *((s8 *) (((char *) (&D_800E10D0)) + 5)) = (s8) (arg1 + pad);
  *((s32 *) (((char *) (&D_800E10D0)) + 0x228)) = (s32) (*((s32 *) (((char *) arg0) + 0x228)));
}

