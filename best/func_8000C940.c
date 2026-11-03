/* identical to func_8000C920 in Resident Evil II (matched), with its names changed by decompdecomp */
/* identical to func_80092A80 in V-RALLY (matched), with its names changed by decompdecomp */
/* identical to func_8008CFF0 in V-RALLY (matched), with its names changed by decompdecomp */
extern char D_80000308[];
extern char D_80011B90[];
extern char D_80011B94[];
s32 func_8000C620(void *, void *, s32);
s32 func_8000C940(s32 arg0, s32 *arg1)
{
  s32 *var_s0;
  s32 var_s1;
  var_s1 = arg0;
  var_s0 = arg1;
  if (var_s0 == NULL)
  {
    func_8000C620(D_80011B90, D_80011B94, 0x3D);
  }
  while ((*((vu32 *) 0xA4600010)) & 3)
  {
  }

  *var_s0 = *((s32 *) (((*((u32 *) D_80000308)) | var_s1) | 0xA0000000));
 do { } while (0);
  return 0;
}
