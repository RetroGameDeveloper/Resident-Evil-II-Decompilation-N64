extern s32 func_80036038_ovl_01(void *, void *, void *, s32);
extern u8 D_8016729C_ovl_32[];
extern u8 D_80167308_ovl_32[];
typedef struct { u8 pad[0x234]; void *unk234; } T;
void func_801654E8_ovl_32(T *arg0, s32 arg1)
{
  s32 r = func_80036038_ovl_01(arg0->unk234, D_8016729C_ovl_32, 0, arg1);
  func_80036038_ovl_01(arg0, arg0->unk234, D_80167308_ovl_32, r);
}
