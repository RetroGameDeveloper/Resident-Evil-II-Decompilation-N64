/* identical to func_801664A8_ovl_12 (matched), with its names changed by decompdecomp */
void func_80173038_overlay_040(void *p, s32 d, s32 lim) {
  u8 *b = p;
  s16 old = *(s16 *)(b + 0x1E0);
  u16 u = *(volatile u16 *)(b + 0x1E0);
  if (old < lim) {
    s16 n = u + d;
    *(s16 *)(b + 0x1E0) = n;
    if (lim < n)
      *(s16 *)(b + 0x1E0) = lim;
  }
}
