extern u32 D_80162FD0_ovl_25[];
extern u32 D_80163058_ovl_25[];
extern u8 D_80162FA0_ovl_25[];
extern u8 D_800E10F8_ovl_01[];
extern u8 D_800C7650_ovl_01[];
void func_80089D34_ovl_01(void *, s32);
s32 func_80162FA0_ovl_21(void *, void *, void *, s32);
void func_80162004_ovl_25(void *a);
void func_801623B8_ovl_25(void *a);
void func_80162A70_ovl_25(void *a);
void func_80162B24_overlay_025(void *a)
{
  volatile u32 unused[2];
  u8 i = *(((u8 *) a) + 0x26e);
  u32 *t = D_80163058_ovl_25;
 do { } while (0);
  ((void (*)(void)) (*((volatile u32 *) (((u8 *) t) + (i << 2)))))();
}
