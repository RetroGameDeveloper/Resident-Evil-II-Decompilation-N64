extern u8 *D_8011A6B8;
extern s32 D_80012884;
extern u8 D_80012888;
extern u8 D_8011A22F;
extern s32 D_80012878;
typedef struct { u8 pad[0x19A5C]; u32 flags; } G7650;
extern G7650 D_800C7650;
s32 func_800B36A4_ovl_01(s32, s32, s32, s32, s32, s32, s32);

void func_80004A6C(s32 arg0, s32 arg1)
{
    u8 *p;
    u16 x;
    s32 a0, a1, a2, a3;
    s32 prod;

    p = D_8011A6B8;
    if (p == 0) {
        return;
    }
    D_800C7650.flags |= 0x20;
    x = ((u16 *)p)[arg1];
    D_80012884 = 1;
    if (x & 0x8000) {
        a0 = x & 0x7FFF;
        a1 = 0x1F40;
    } else {
        a0 = x & 0xFFFF;
        a1 = 0x3E80;
    }
    a2 = 0x7F;
    prod = D_80012888 * D_8011A22F;
    a3 = ((u32)prod / 100) & 0xFF;
    D_80012878 = func_800B36A4_ovl_01(a0, a1, a2, a3, 0x3F, 0, 0);
}
