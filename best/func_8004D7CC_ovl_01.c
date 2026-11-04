s32 func_80040BE4_ovl_01(s32, u32);
extern s32 D_800C7650_ovl_01;
extern s32 D_80139B40;
s32 func_8004D7CC_ovl_01(void *arg0, s32 arg1, s32 arg2)
{
  int __repair_literal;
  s32 temp_a0;
  char *new_var;
  s32 __repair_phase_temp_a0;
  s32 temp_a0_2;
  s32 temp_a0_3;
  s32 temp_v1_2;
  s32 temp_v1_3;
  s32 var_v0;
  u32 temp_a1;
  void **var_s2;
  void *temp_v1;
  void *var_s1;
  var_s2 = (&D_800C7650_ovl_01) + 0x19D38;
  if ((*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x1828C))) == var_s2)
  {
    block_19:
    var_v0 = 0;

  }
  else
  {
    new_var = (char *) arg0;
    loop_2:
    temp_v1 = *var_s2;

    __repair_phase_temp_a0 = *((s32 *) (((char *) temp_v1) + 0));
    if ((__repair_phase_temp_a0 & 1) && ((var_s1 = temp_v1 + 0x120, (__repair_phase_temp_a0 & 2) == 0)))
    {
      D_80139B40 = *((s32 *) (((char *) temp_v1) + 0x284));
      loop_5:
      temp_a0 = D_80139B40 - 1;

      D_80139B40 = temp_a0;
      if (temp_a0 >= 0)
      {
        temp_a0 = arg1 + (*((u16 *) (((char *) var_s1) + 0x16)));
        temp_a0_2 = (*((s32 *) (((char *) var_s1) + 0))) - (*((s16 *) (new_var + 0)));
        __repair_literal = 2;
        temp_a1 = temp_a0 * __repair_literal;
        if (temp_a1 < ((u32) (temp_a0_2 + temp_a0)))
        {
          var_s1 += 0x20;
          goto loop_5;
        }
        temp_v1_2 = (*((s32 *) (((char *) var_s1) + 8))) - (*((s16 *) (new_var + 4)));
        if (temp_a1 < ((u32) (temp_v1_2 + temp_a0)))
        {
          var_s1 += 0x20;
          goto loop_5;
        }
        if ((temp_a0 - func_80040BE4_ovl_01((temp_a0_2 * temp_a0_2) + (temp_v1_2 * temp_v1_2), temp_a1)) <= 0)
        {
          var_s1 += 0x20;
          goto loop_5;
        }
        temp_v1_3 = (*((u16 *) (((char *) var_s1) + 0x1A))) + arg2;
        temp_a0_3 = (*((s32 *) (((char *) var_s1) + 4))) - (*((s16 *) (new_var + 2)));
        if (((-temp_v1_3) >= temp_a0_3) || ((var_v0 = 1, (temp_a0_3 < temp_v1_3) == 0)))
        {
          var_s1 += 0x20;
          goto loop_5;
        }
      }
      else
      {
        goto block_18;
      }
    }
    else
    {
      block_18:
      var_s2 += 4;

      if (var_s2 == (*((s32 *) (((char *) (&D_800C7650_ovl_01)) + 0x1828C))))
      {
        goto block_19;
      }
      goto loop_2;
    }
  }
  return var_v0;
}

