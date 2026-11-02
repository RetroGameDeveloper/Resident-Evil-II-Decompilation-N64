typedef void (*Fn)(void);
extern Fn volatile D_80167E58_ovl_17[];

void func_80164748_ovl_17(u8 *arg0) {
    D_80167E58_ovl_17[arg0[0x2BE]]();
}
