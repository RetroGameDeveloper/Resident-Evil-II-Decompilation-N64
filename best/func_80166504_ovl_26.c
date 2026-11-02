extern void *D_80167328_ovl_26[];
void func_80166504_ovl_26(void *arg0) {
  void (*fn)(void *) = (void (*)(void *))D_80167328_ovl_26[((u8 *)arg0)[0x2C6]];
  fn((u8 *)arg0 + 0x2B4);
}
void func_80166540_ovl_26(void *arg1) {
  u8 *p = arg1;
  s16 value;
  if (p[0x13] == 0) {
    *(s8 *)(p + 4) = 1;
    value = *(u16 *)(p + 6) + p[0x14];
    *(u16 *)(p + 6) = value;
    if (value < 0x100) return;
    p[0x13] = 1;
    *(u16 *)(p + 6) = 0x100;
  }
}
void func_80166584_ovl_26(void *arg1) {
  u8 *p = arg1;
  s16 value;
  if (p[0x13] == 0) {
    *(s8 *)(p + 4) = 1;
    value = *(u16 *)(p + 6) - p[0x14];
    *(u16 *)(p + 6) = value;
    if (value > 0) return;
    p[0x13] = 1;
    *(u16 *)(p + 6) = 0;
    *(s8 *)(p + 4) = 0;
  }
}
extern s32 func_8003420C_ovl_01(void *, s32);
void func_8016646C_ovl_26(void *arg0) {
  u8 *p = arg0;
  u8 state = p[0x2CF];
  u8 *s = *(u8 **)(p + 0x208);
  if (state == 1) goto update;
  if (state != 0) return;
  p[0x2CF] = 1;
  func_8003420C_ovl_01(s, 0x6F3F3F00);
  p[0x207] = 0x5A;
update:
  *(u16 *)(s + 4) += 8;
  *(u16 *)(s + 6) += 8;
  p[0x207]--;
  if (p[0x207] == 0) p[0x2CF] = 2;
}
