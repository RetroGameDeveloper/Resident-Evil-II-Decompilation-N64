/* identical to func_801664DC_ovl_12 (matched), with its names changed by decompdecomp */
void func_8017306C_overlay_040(void *p, s32 d, s32 lim) {
  u8 *b = p;
  s16 old = *(s16 *)(b + 0x1E0);
  u16 u = *(volatile u16 *)(b + 0x1E0);
  if (lim < old) {
    s16 n = u - d;
    *(s16 *)(b + 0x1E0) = n;
    if (n < lim)
      *(s16 *)(b + 0x1E0) = lim;
  }
}
