extern s32 func_800A5618_ovl_01(void);
extern s32 func_800A5660_ovl_01(s32 *, s32 *);

s32 func_800AD7B8_ovl_01(s32 arg0) {
    (void)arg0;
    func_800A5618_ovl_01();
    func_800A5660_ovl_01((s32 *)0, (s32 *)0);
    return 0;
}
