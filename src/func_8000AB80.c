/* identical to __osPfsGetOneChannelData in Resident Evil II (matched), with its names changed by decompdecomp */
/* adapted from similar verified C in func_8000AB80 in V-RALLY-PAL (matched), with its names changed by decompdecomp */
extern u8 D_8000E5EE[];

void func_8000AB80(s32 arg0, u8 *arg1) {
    struct { u8 b[6]; } sp;
    u8 *src;
    s32 i;
    u8 flag;

    src = D_8000E5EE + 0x7E82;
    for (i = 0; i < arg0; i++) {
        src++;
    }
    sp = *(typeof(sp) *)src;
    flag = (sp.b[1] & 0xC0) >> 4;
    arg1[3] = flag;
    if (flag == 0) {
        *(s16 *)arg1 = (s16)(sp.b[3] | (sp.b[4] << 8));
        arg1[2] = sp.b[5];
    }
}
