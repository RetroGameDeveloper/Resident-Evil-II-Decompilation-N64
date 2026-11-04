typedef struct { u8 pad[0x18000]; u8 data[0x1c74]; } BigD; extern BigD D_800C7650_ovl_01;
s32 func_8016333C_ovl_22(void); s32 func_80162144_ovl_22(void*); s32 func_8006A45C_ovl_01(void*,s32); s32 func_80032F94_ovl_01_48(void*,s32,s32); s32 func_80032DEC_ovl_01(void*,s32,s32,s32); s32 func_80162B08_ovl_22(void*);
void func_80163860_overlay_022(void *p) {
    s32 v;
    func_8016333C_ovl_22();
    if (*(s16 *)&D_800C7650_ovl_01.data[0x1c72] >= 0 && *(u32 *)((u8 *)p + 0x28c) < 0xed8) {
        *(u32 *)((u8 *)p + 4) = 0x01010000;
        return;
    }
    func_80162144_ovl_22(p);
    switch (*((u8 *)p + 6)) {
    case 0:
        *(u16 *)((u8 *)p + 0x1f4) = 0;
        *(u16 *)((u8 *)p + 0x1f6) = 0;
        *((u8 *)p + 6) += 1;
    case 1:
        func_80036764_ovl_01_510_24(p, 8, 15, 0);
        if (*(void **)((u8 *)p + 0x1b0)) {
            v = func_8006A45C_ovl_01((u8 *)p + 0x28, 8);
            v = ((v & 0xffff) << 10) + 0x800;
            v = (s16)v;
            if (func_80032F94_ovl_01_48(p, v, 80) == 0) (*(u16 *)((u8 *)p + 0x1f4))++;
            else if (*(s16 *)((u8 *)p + 0x1f4) < 16) *(u16 *)((u8 *)p + 0x1f4) = 0;
        }
        func_80032DEC_ovl_01(p, *(s16 *)((u8 *)p + 0x260), *(s16 *)((u8 *)p + 0x262), 32);
        if (*(s16 *)((u8 *)p + 0x1f4) >= 61) {
            v = func_80162B08_ovl_22(p);
            *(u16 *)((u8 *)p + 0x66) += v << 5;
            if (*(s16 *)((u8 *)p + 0x1f4) >= 49) *(u16 *)((u8 *)p + 0x1f4) = 0;
        }
    }
}
