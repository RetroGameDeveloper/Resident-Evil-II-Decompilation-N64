typedef struct {
    s32 (*unk0)(void *, s32, s32);
} S8002D948_fn;

typedef struct {
    u8 pad0[4];
    S8002D948_fn *unk4;
    u8 pad8[0x10C];
    s32 unk114;
} S8002D948;

typedef struct {
    u8 b[0x80];
} S8002D948_blob;

void func_8002FC30_ovl_01(void *arg0, s32 arg1, s32 arg2);

void func_8002D948_ovl_01(S8002D948 *arg0) {
    u8 *buf;
    s32 i;

    buf = (u8 *)(*arg0->unk4->unk0)(arg0, 1, 0x580);
    arg0->unk114 = (s32)(buf + 0x100);
    func_8002FC30_ovl_01(buf, 0, 0x100);

    for (i = 0xFF; i >= 0; i--) {
        buf[0x100 + i] = i;
    }

    for (i = 0x80; i < 0x200; i++) {
        buf[0x180 + i] = 0xFF;
    }
    func_8002FC30_ovl_01(buf + 0x300, 0, 0x180);

    *(S8002D948_blob *)(buf + 0x500) = *(S8002D948_blob *)(buf + 0x100);
}
