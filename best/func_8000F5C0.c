s32 func_8000DE78(u8 *arg0);
u8 *func_8000FA80(S_func_8000F5C0_arg0 *arg0, u32 arg1);
u8 *func_80010C70(S_func_8000F5C0_arg0 *arg0, u32 arg1);

void func_8000F5C0(S_func_8000F5C0_arg0 *n, u32 *args, u32 c, u8 *out) {
    u32 v;
    u32 lo;
    u32 hi;
    s32 i;
    u8 m;
    u8 *s;
    s32 len;

    c &= 0xFF;
    n->unk_0C = 0;
    n->unk_10 = 0;
    n->unk_14 = 0;
    n->unk_18 = 0;
    n->unk_1C = 0;
    n->unk_20 = 0;

    switch (c) {
    case 'c':
        i = n->unk_0C;
        n->unk_0C = i + 1;
        v = *args;
        v = (v + 3) & ~3u;
        *args = v + 4;
        out[i] = *(u32 *)v;
        break;

    case 'd':
    case 'i':
        m = n->unk_34;
        if (m == 'l' || m == 'L') {
            v = *args;
            v = (v + 7) & ~7u;
            *args = v + 8;
            lo = *(u32 *)v;
            hi = *(u32 *)(v + 4);
        } else {
            v = *args;
            v = (v + 3) & ~3u;
            *args = v + 4;
            v = *(u32 *)v;
            lo = v;
            hi = (s32)v >> 31;
        }
        n->unk_00.w.hi = hi;
        n->unk_00.w.lo = lo;
        if (m == 'h') {
            v = n->unk_00.w.lo;
            n->unk_00.w.hi = (s16)v >> 31;
            n->unk_00.w.lo = (s16)v;
        }
        if (n->unk_00.w.hi < 0) {
            i = n->unk_0C;
            n->unk_0C = i + 1;
            out[i] = '-';
        } else if (n->unk_30 & 2) {
            i = n->unk_0C;
            n->unk_0C = i + 1;
            out[i] = '+';
        } else if (n->unk_30 & 1) {
            i = n->unk_0C;
            n->unk_0C = i + 1;
            out[i] = ' ';
        }
        n->unk_08 = out + n->unk_0C;
        func_80010C70(n, c);
        break;

    case 'u':
    case 'o':
    case 'x':
    case 'X':
        m = n->unk_34;
        if (m == 'l' || m == 'L') {
            v = *args;
            v = (v + 7) & ~7u;
            *args = v + 8;
            lo = *(u32 *)v;
            hi = *(u32 *)(v + 4);
        } else {
            v = *args;
            v = (v + 3) & ~3u;
            *args = v + 4;
            v = *(u32 *)v;
            lo = v;
            hi = (s32)v >> 31;
        }
        n->unk_00.w.hi = hi;
        n->unk_00.w.lo = lo;
        if (m == 'h') {
            n->unk_00.w.hi = 0;
            n->unk_00.w.lo = (u16)n->unk_00.w.lo;
        } else if (m == 0) {
            n->unk_00.w.hi = 0;
            n->unk_00.w.lo = n->unk_00.w.lo;
        }
        if (n->unk_30 & 8) {
            i = n->unk_0C;
            n->unk_0C = i + 1;
            out[i] = '0';
        }
        if (c == 'x' || c == 'X') {
            i = n->unk_0C;
            n->unk_0C = i + 1;
            out[i] = c;
        }
        n->unk_08 = out + n->unk_0C;
        func_80010C70(n, c);
        break;

    case 'f':
    case 'F':
    case 'e':
    case 'E':
    case 'g':
    case 'G':
        v = *args;
        v = (v + 7) & ~7u;
        *args = v + 8;
        n->unk_00.d = *(f64 *)v;
        if (*(u16 *)&n->unk_00 & 0x8000) {
            i = n->unk_0C;
            n->unk_0C = i + 1;
            out[i] = '-';
        } else if (n->unk_30 & 2) {
            i = n->unk_0C;
            n->unk_0C = i + 1;
            out[i] = '+';
        } else if (n->unk_30 & 1) {
            i = n->unk_0C;
            n->unk_0C = i + 1;
            out[i] = ' ';
        }
        n->unk_08 = out + n->unk_0C;
        func_8000FA80(n, c);
        break;

    case 'n':
        m = n->unk_34;
        if (m == 'h') {
            v = *args;
            v = (v + 3) & ~3u;
            *args = v + 4;
            v = *(u32 *)v;
            *(s16 *)v = n->unk_2C;
        } else if (m == 'l' || m == 'L') {
            v = *args;
            v = (v + 3) & ~3u;
            *args = v + 4;
            v = *(u32 *)v;
            *(s32 *)v = 0;
            *(s32 *)(v + 4) = n->unk_2C;
        } else {
            v = *args;
            v = (v + 3) & ~3u;
            *args = v + 4;
            v = *(u32 *)v;
            *(s32 *)v = n->unk_2C;
        }
        break;

    case 'p':
        v = *args;
        v = (v + 3) & ~3u;
        *args = v + 4;
        v = *(u32 *)v;
        n->unk_00.w.hi = (s32)v >> 31;
        n->unk_00.w.lo = v;
        n->unk_08 = out + n->unk_0C;
        func_80010C70(n, 'x');
        break;

    case 's':
        v = *args;
        v = (v + 3) & ~3u;
        *args = v + 4;
        s = *(u8 **)v;
        n->unk_08 = s;
        len = func_8000DE78(s);
        n->unk_14 = len;
        if (n->unk_24 >= 0 && n->unk_24 < len)
            n->unk_14 = n->unk_24;
        break;

    case '%':
        i = n->unk_0C;
        n->unk_0C = i + 1;
        out[i] = '%';
        break;

    default:
        i = n->unk_0C;
        n->unk_0C = i + 1;
        out[i] = c;
        break;
    }
}
