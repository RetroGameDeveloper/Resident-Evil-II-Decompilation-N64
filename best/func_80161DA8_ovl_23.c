s32 func_80040E88_ovl_01(void *, void *);
s32 func_80083800_ovl_01(s16, u16 *, u16 *, s32);
extern s32 D_80166260_ovl_23;
typedef struct { unsigned short field_0; unsigned short field_2; unsigned short field_4; unsigned short field_6; unsigned short field_8; unsigned short field_A; unsigned short field_C; unsigned short field_E; short field_10; } __repair_record_var_s0;
void func_80161DA8_ovl_23(void *arg0)
{
  int new_var;
  u16 sp10;
  s16 sp14;
  s32 *var_s0;
  s16 temp_a0_2;
  s16 temp_v1_3;
  s16 temp_v1_4;
  s32 temp_a0;
  s32 temp_v1;
  s32 var_a3;
  s32 __repair_result_var_a3;
  u16 temp_v0;
  u16 temp_v1_2;
  u32 var_s3;
  void *temp_s1;
  var_s0 = &D_80166260_ovl_23;
  new_var = 0xA;
  var_s3 = 0;
  do
  {
    temp_a0_2 = (*((u16 *) (((char *) var_s0) + new_var))) + 1;
    temp_a0 = temp_a0_2 * 0x62;
    temp_v1 = temp_a0_2 - 1;
    __repair_result_var_a3 = MULT_HI(temp_a0_2 * temp_a0);
    ((__repair_record_var_s0*)var_s0)->field_A = (u16) temp_a0_2;
    ((__repair_record_var_s0*)var_s0)->field_8 = (u16) ((((__repair_record_var_s0*)var_s0)->field_8) + (((temp_a0_2 * temp_a0) / 20) - ((temp_v1 * (temp_v1 * 0x62)) / 20)));
    temp_s1 = (*((s32 *) (((char *) arg0) + 0x234))) + ((((__repair_record_var_s0*)var_s0)->field_0) * 0x178);
    if ((*((s32 *) (((char *) temp_s1) + 0x50))) >= 0)
    {
      ((__repair_record_var_s0*)var_s0)->field_4 = (u16) ((((__repair_record_var_s0*)var_s0)->field_4) / 20);
      var_a3 = MULT_HI((s16) (((__repair_record_var_s0*)var_s0)->field_8), 0x92492493);
      ((__repair_record_var_s0*)var_s0)->field_8 = (u16) ((((__repair_record_var_s0*)var_s0)->field_8) / (-28));
      *((s32 *) (((char *) temp_s1) + 0x50)) = 0;
      ((__repair_record_var_s0*)var_s0)->field_A = 0U;
      temp_v1_2 = (*((u16 *) (((char *) temp_s1) + 0x5C))) & 0xFFF;
      *((u16 *) (((char *) temp_s1) + 0x5C)) = temp_v1_2;
      if (((u32) (temp_v1_2 - 0x400)) >= 0x800U)
      {
        if (((s32) temp_v1_2) < 0x400)
        {
          ((__repair_record_var_s0*)var_s0)->field_E = 0xAU;
        }
        else
        {
          goto block_9;
        }
      }
      else
        if (((s32) temp_v1_2) >= 0x801)
      {
        ((__repair_record_var_s0*)var_s0)->field_E = 0xAU;
      }
      else
      {
        block_9:
        ((__repair_record_var_s0*)var_s0)->field_E = -0xAU;

      }
    }
    *((u16 *) (((char *) temp_s1) + 0x5C)) = (u16) ((*((u16 *) (((char *) temp_s1) + 0x5C))) + (((__repair_record_var_s0*)var_s0)->field_C));
    ((__repair_record_var_s0*)var_s0)->field_C = (u16) ((((__repair_record_var_s0*)var_s0)->field_C) + (((__repair_record_var_s0*)var_s0)->field_E));
    temp_v0 = (*((u16 *) (((char *) temp_s1) + 0x5C))) & 0xFFF;
    *((u16 *) (((char *) temp_s1) + 0x5C)) = temp_v0;
    temp_a0_2 = ((u32) (temp_v0 - 0x400)) < 0x800U;
    if (((s16) (((__repair_record_var_s0*)var_s0)->field_E)) != 0)
    {
      if (temp_a0_2 != (((__repair_record_var_s0*)var_s0)->field_10))
      {
        ((__repair_record_var_s0*)var_s0)->field_C = (u16) ((((__repair_record_var_s0*)var_s0)->field_C) / (-20));
      }
    }
    else
    {
      ((__repair_record_var_s0*)var_s0)->field_10 = temp_a0_2;
    }
    if (((s16) (((__repair_record_var_s0*)var_s0)->field_C)) < 0xA)
    {
      temp_v1_3 = (s16) (*((u16 *) (((char *) temp_s1) + 0x5C)));
      if ((temp_v1_3 >= 0x3F7) && (temp_v1_3 < 0x40A))
      {
        ((__repair_record_var_s0*)var_s0)->field_C = 0U;
        ((__repair_record_var_s0*)var_s0)->field_E = 0U;
      }
      if (((s16) (((__repair_record_var_s0*)var_s0)->field_C)) < 0xA)
      {
        temp_v1_4 = (s16) (*((u16 *) (((char *) temp_s1) + 0x5C)));
        if ((temp_v1_4 >= 0xBF7) && (temp_v1_4 < 0xC0A))
        {
          ((__repair_record_var_s0*)var_s0)->field_C = 0U;
          ((__repair_record_var_s0*)var_s0)->field_E = 0U;
        }
      }
    }
    sp14 = 0;
    sp10 = ((__repair_record_var_s0*)var_s0)->field_4;
    func_80083800_ovl_01((s16) ((*((u16 *) (((char *) arg0) + 0x66))) + (((__repair_record_var_s0*)var_s0)->field_2)), &sp10, &sp10, var_a3);
    *((s32 *) (((char *) temp_s1) + 0x4C)) = (s32) ((*((s32 *) (((char *) temp_s1) + 0x4C))) + ((s16) sp10));
    *((s32 *) (((char *) temp_s1) + 0x50)) = (s32) ((*((s32 *) (((char *) temp_s1) + 0x50))) + ((s16) (((__repair_record_var_s0*)var_s0)->field_8)));
    *((s32 *) (((char *) temp_s1) + 0x54)) = (s32) ((*((s32 *) (((char *) temp_s1) + 0x54))) + sp14);
    func_80040E88_ovl_01(temp_s1 + 0x58, temp_s1 + 0x38);
    var_s3 += 1;
    ((__repair_record_var_s0*)var_s0)->field_4 = (u16) ((((__repair_record_var_s0*)var_s0)->field_4) + (((__repair_record_var_s0*)var_s0)->field_6));
    var_s0 += 0x14;
  }
  while (var_s3 < 0xFU);
}

