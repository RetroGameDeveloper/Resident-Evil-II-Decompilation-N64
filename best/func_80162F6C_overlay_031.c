extern s32 D_800C7650_ovl_01;
s32 func_80032EA4_ovl_01(void *, s32, s32, s32);
void func_80162F6C_overlay_031(void *arg0) {
    s32 temp_s0, temp_v1, shifted;
    u32 temp_s2;
    s32 frame[14];
    s32 *io=&D_800C7650_ovl_01;
    temp_s2=*(u32 *)((u8 *)arg0+0x28C);
    func_80032EA4_ovl_01(NULL,*(s32 *)((u8 *)io+0x1AA8),*(s32 *)((u8 *)io+0x1AB0),0x5F4);
    temp_s0=func_80032EA4_ovl_01(arg0,*(s32 *)((u8 *)io+0x1AA8),*(s32 *)((u8 *)io+0x1AB0),0x200);
    temp_v1=func_80032EA4_ovl_01(arg0,*(s32 *)((u8 *)io+0x1AA8),*(s32 *)((u8 *)io+0x1AB0),0x400);
    if ((temp_s0 << 16) != 0) goto after_a;
    if (temp_s2 >= 0xFA0) goto after_a;
    if (*(u8 *)((u8 *)arg0+0x2BA) != 0) goto after_a;
    *(s32 *)((u8 *)arg0+4)=0x01020000;
after_a:
    shifted=temp_v1 << 16;
    if (shifted != 0) goto final_check;
    if (temp_s2 >= 0x7D0) goto final_check;
    *(s32 *)((u8 *)arg0+4)=0x01080000;
final_check:
    if (*(s16 *)((u8 *)arg0+0x1F2)<0x2BC) {
       *(s32 *)((u8 *)arg0+4)=0x01000000;
       *(u8 *)((u8 *)arg0+0x26F)|=0x80;
    }
    frame[13]=0;
}
