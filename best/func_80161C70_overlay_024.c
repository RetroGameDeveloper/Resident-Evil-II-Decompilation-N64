void func_80161CC8_ovl_24(void *, s32, s32);
void func_80161D30_ovl_24(void *, s32, s32);

void func_80161C70_overlay_024(u8 *arg0) {
    switch (arg0[4]) {
    case 0:
        func_80161CC8_ovl_24(arg0, *(s32 *)(arg0 + 0x1A4), *(s32 *)(arg0 + 0x218));
        break;
    case 1:
        func_80161D30_ovl_24(arg0, *(s32 *)(arg0 + 0x1A4), *(s32 *)(arg0 + 0x218));
        break;
    }
}
