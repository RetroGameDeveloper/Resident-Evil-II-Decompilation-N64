void func_80164D10_ovl_12(void);
s32 func_80033634_ovl_01(void);
void func_80166900_ovl_12(void *, s32, s32);
void func_80164CDC_ovl_12(void *, void *, void *);
void func_8016586C_ovl_12(u8 *p, void *arg1, void *arg2)
{
 do { if (p[6] == 0) { func_80164D10_ovl_12(); p[0x2BB] = 8; func_80166900_ovl_12(p, func_80033634_ovl_01() & 0xF, 0xB); p[0x207] = 0; } func_80164CDC_ovl_12(p, arg1, arg2); p[0x207]++; if ((((s8) p[0x207]) % 3) == 0) { func_80166900_ovl_12(p, func_80033634_ovl_01() & 0xF, 0xB); func_80166900_ovl_12(p, func_80033634_ovl_01() & 0xF, 0xB); } } while (0);
}
