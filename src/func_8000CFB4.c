extern s32 D_80012930;
extern s32 D_800177B0;
extern s32 D_800177C0;
void func_80006D30(s32 *, s32 *, s32);
void func_8000C9E0(s32 *, s32 *, s32);
void func_8000CB60(s32 *, s32, s32);

void func_8000CFB4(void) {
    s32 buf[2];
    if (D_80012930 == 0) {
        D_80012930 = 1;
        func_80006D30(&D_800177C0, &D_800177B0, 1);
        func_8000CB60((s32 *)((u8 *)&D_80012930 + 0x4E90), 0, 0);
    }
    func_8000C9E0(&D_800177C0, buf, 1);
}
