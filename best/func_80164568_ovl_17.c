s32 func_80164568_ovl_17(void *a) {
  volatile u8 *p = a;
  u8 x = p[0x2CC];
  s32 y = *(u16 *)((u8 *)p + 0x2C2);
  if (x == 0)
    y = -y;
  return ((p[0x2CC] << 10) + ((s16)y - ((y << 16) >> 18))) & 0xFFF;
}
