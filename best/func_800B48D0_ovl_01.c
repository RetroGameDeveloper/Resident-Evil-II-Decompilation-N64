void func_80006650(void *arg0, s32 arg1);
void func_80006D30(void *arg0, void *arg1, s32 arg2);

void func_800B48D0_ovl_01(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    func_80006650(arg0, 0x190);
    *(s16 *)(arg0 + 0x166) = 0x28;
    *(s32 *)(arg0 + 0x194) = arg1;
    *(s32 *)(arg0 + 0x198) = arg2;
    *(s32 *)(arg0 + 0x19C) = arg3;
    *(s32 *)(arg0 + 0x11A8) = 0;
    *(s32 *)(arg0 + 0x190) = arg4;
    func_80006D30(arg0 + 0x11AC, arg0 + 0x11C4, 1);
    if ((arg1 == 0) | (arg4 == 0)) {
        *(s8 *)(arg0 + 0x11DD) = 0;
    } else {
        *(s8 *)(arg0 + 0x11DD) = 1;
    }
    *(s8 *)(arg0 + 0x11DC) = 0;
    *(s16 *)(arg0 + 0x11A2) = 0;
    *(s32 *)(arg0 + 0x11A4) = 0;
    *(s16 *)(arg0 + 0x11A0) = 0;
    *(s32 *)(arg0 + 0x11C8) = 0;
    *(s32 *)(arg0 + 0x11D0) = 0;
    *(s32 *)(arg0 + 0x11CC) = 0;
    *(s32 *)(arg0 + 0x11D8) = 0;
    *(s32 *)(arg0 + 0x11D4) = 0;
    *(s8 *)(arg0 + 0x11DE) = 2;
}
