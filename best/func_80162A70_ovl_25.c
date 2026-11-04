typedef union { u64 q; struct { u32 lo; u32 hi; } w; } U64;
extern u8 D_800C7650_ovl_01[];
s32 func_80089D34_ovl_01(u8 *arg0, s32 arg1, s32 arg2, u32 arg3);

void func_80162A70_ovl_25(void *arg0, s32 arg1, s32 arg2)
{
    u32 off;
    U64 b;
    u32 base;
    s32 one;

    one = 1;
    switch (*(u8 *)((u8 *)arg0 + 6)) {
    case 0:
        *(s32 *)((u8 *)arg0 + 0x1E8) = 0x05000F00;
        *(u8 *)((u8 *)arg0 + 6) = one;
        break;
    case 1:
        func_80089D34_ovl_01((u8 *)arg0, arg1, arg2, 0x100);
        off = 0x18000;
        b.q = (u64)(u32)D_800C7650_ovl_01;
        base = off + (u32)b.q;
        if (!(*((u8 *)base + 0x1CEF) & 0x80)) {
            *(u8 *)((u8 *)arg0 + 6) = 2;
        }
        break;
    case 2:
        *(s32 *)((u8 *)arg0 + 4) = 0x01010000;
        break;
    }
}
