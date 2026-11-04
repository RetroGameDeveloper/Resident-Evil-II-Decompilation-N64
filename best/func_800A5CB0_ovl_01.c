extern f64 D_800BA680_ovl_01;
extern f32 D_800BA688_ovl_01;
extern f32 D_800BA68C_ovl_01;
extern s32 D_80147F44;
s32 func_800A5CB0_ovl_01(s32 arg0)
{
  float new_var;
  f32 temp_fv0;
  f64 var_ft0;
  var_ft0 = arg0;
  if (arg0 < 0)
  {
    var_ft0 += D_800BA680_ovl_01;
  }
  new_var = ((f32) var_ft0) * D_800BA688_ovl_01;
  temp_fv0 = (f32) D_80147F44;
  temp_fv0 = new_var / temp_fv0;
  if (D_800BA68C_ovl_01 <= temp_fv0)
  {
 do { return ((s32) (temp_fv0 - D_800BA68C_ovl_01)) | 0x80000000; } while (0);
  }
  return (s32) temp_fv0;
}
