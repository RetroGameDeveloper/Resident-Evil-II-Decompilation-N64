typedef void (*Fn)(void*,s32,s32);
extern void func_80065400_ovl_01(void*,void*,s32,s32);
extern void func_8004DB8C_ovl_01(void*);
extern u8 D_800E10F8_ovl_01[];
extern u8 D_800C7650_ovl_01[];
extern u8 D_801630B0_ovl_25;
extern volatile Fn D_80162FB0_ovl_25[];
void func_80161C70_ovl_25(void *arg0) {
 u8 *p=arg0;
 u8 *g;
 u32 flags;
 func_80065400_ovl_01(0,D_800E10F8_ovl_01,0,0);
 g=D_800C7650_ovl_01+0x18000;
 flags=*(u32*)(g+0x1a60);
 if (!(flags & 0x20000000)) {
   if (*(u16*)(g+0x1a78) && (*(u16*)(p+0x1aa)&0x10))
      *(u16*)(g+0x1a78) -= 1;
   if (D_801630B0_ovl_25 && (*(u16*)(p+0x1aa)&0x10))
      D_801630B0_ovl_25--;
   D_80162FB0_ovl_25[p[4]](p,*(s32*)(p+0x1a4),*(s32*)(p+0x218));
   func_8004DB8C_ovl_01(p);
 }
}
