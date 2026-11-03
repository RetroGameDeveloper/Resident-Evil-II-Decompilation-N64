typedef struct {
    u16 unk0;
    u8 pad2[2];
    s32 unk4;
    void *unk8;
    s32 unkC;
} S_800129D4;

extern S_800129D4 *D_800129D4;
s32 func_800072E0(void);
s32 func_80007300(s32);

void func_8000E980(s32 arg0)
{
    s32 t = func_800072E0();
    S_800129D4 *p = D_800129D4;

    p->unk8 = (void *)arg0;
    p->unk0 = 1;
    p->unkC = *(s32 *)((u8 *)p->unk8 + 4);
    func_80007300(t);
}
