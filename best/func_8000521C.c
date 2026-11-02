extern u16 *D_800128AC;

s32 func_800051B8(u32);
s32 func_80004CFC(s32, s32, s32, s32);

u32 *func_8000521C(u32 arg0, u8 *arg1) {
    u32 *out;
    u32 n;
    u16 *src;
    s32 count;
    u32 code;
    u32 len;
    s32 size;
    s32 i;
    u32 *base;
    u32 *p;
    u16 unk;

    func_800051B8(arg0 & 0xFFFF);
    out = (u32 *)arg1;
    src = D_800128AC;
    *out++ = src[0] | (src[1] << 16);
    src += 2;
    *out++ = src[0] | (src[1] << 16);
    src += 2;
    count = *src++;
    unk = *(u16 *)(arg1 + 4);
    for (count--; count != -1; count--) {
        code = *src++;
        len = code & 0xFFF;
        n = (code >> 12) + 1;
        if (len == 0) {
            for (i = ((u32)(n * unk) >> 2) - 1; i != -1; i--) {
                *out++ = 0;
            }
            continue;
        }
        base = out;
        out = (u32 *)(((u32)out + 7) & ~7);
        size = func_80004CFC(len, (s32)out, 0, 0);
        if (out != base) {
            p = base;
            for (i = (size >> 2) - 1; i != -1; i--) {
                *p++ = *out++;
            }
            out = base + (size >> 2);
        } else {
            out += size >> 2;
        }
        if (n < 2) {
            continue;
        }
        for (i = ((u32)((n - 1) * size) >> 2) - 1; i != -1; i--) {
            *out++ = *base++;
        }
    }
    if (D_800128AC < (u16 *)out) {
        __builtin_trap();
    }
    return out;
}
