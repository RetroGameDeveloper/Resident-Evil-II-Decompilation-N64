s32 func_800AB3DC_ovl_01(s32 a, s32 base, s32 n, s32 stride, s32 (*cmp)(s32, s32)) {
    s32 low;
    s32 high;
    s32 mid;
    s32 idx;
    s32 off;
    s32 addr;
    s32 r;
    s32 ret;

    if (n != 0) {
        low = 1;
        high = n;
        do {
            mid = (low + high) >> 1;
            idx = mid - 1;
            off = stride * idx;
            addr = base + off;
            r = cmp(a, addr);
            if (r == 0) {
                ret = addr;
                goto done;
            }
            if (r < 0)
                high = mid - 1;
            else
                low = mid + 1;
        } while (low <= high);
    }
    ret = 0;
done:
    return ret;
}
