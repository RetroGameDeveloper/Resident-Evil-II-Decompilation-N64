extern void func_80029718_ovl_01(void);
extern void func_80029F38_ovl_01(void);
void func_8002A528_ovl_01(u8 *p)
{
  u8 *n;
  s32 i;
 do { n = (u8 *) ((void *(*)(u8 *, s32, s32)) (*((void **) (*((void **) (p + 4))))))(p, 1, 0x48); *((void **) (p + 0x178)) = n; *((void **) (n + 0)) = ((u8 *) func_80029718_ovl_01) + 0x1B8; *((void **) (n + 4)) = ((u8 *) func_80029F38_ovl_01) + 0xA0; for (i = 0; i < 4; i++) { *((s32 *) ((n + (i * 4)) + 0x38)) = 0; *((s32 *) ((n + (i * 4)) + 0x28)) = 0; } } while (0);
}
