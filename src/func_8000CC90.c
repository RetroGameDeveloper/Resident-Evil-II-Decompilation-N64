/* identical to osSetEventMesg in Resident Evil II (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in func_8000CC90 in V-RALLY-PAL (matched), with its names changed by decompdecomp */

s32 func_800072E0();
s32 func_80007300();
extern char D_80010136[];
void func_8000CC90(s32 arg0, s32 arg1, s32 arg2)
{
  s32 temp_a0;
  void *temp_s0;
  temp_a0 = func_800072E0();
  temp_s0 = (arg0 * 8) + (D_80010136 + 0x75FA);
  *((s32 *) (((char *) temp_s0) + 0)) = arg1;
  *((s32 *) (((char *) temp_s0) + 4)) = arg2;
  func_80007300(temp_a0);
}
