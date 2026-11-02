typedef void (*Fn)(void *);
extern volatile Fn D_80166D48_ovl_12[];
void func_80163374_ovl_12(void *p);
extern volatile Fn D_80166D18_ovl_12[];
extern void func_80089D34_ovl_01(void *, s32, s32, s32);
extern void func_80166458_ovl_12(void *);
extern void func_80166AE0_ovl_12(void *);
extern void func_80166B20_ovl_12(void *);
void func_801626C8_ovl_12(void *p, s32 a1, s32 a2)
{
 do { D_80166D18_ovl_12[((u8 *) p)[6]](p); func_80089D34_ovl_01(p, a1, a2, 0x100); func_80166458_ovl_12(p); func_80166AE0_ovl_12(p); } while (0);
  func_80166B20_ovl_12(p);
}
