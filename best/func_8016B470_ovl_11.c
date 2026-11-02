typedef void (*Fn)(void *);
extern u8 D_8016E7B8_ovl_11[];

void func_8016B470_ovl_11(void *p) {
    u32 addr = (u32)D_8016E7B8_ovl_11 + ((u8 *)p)[5] * 4;
    ((Fn)addr)(p);
}
