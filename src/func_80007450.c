extern void *D_80012950;
s32 func_80007450(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_hi, temp_s1, temp_v1, one, eight, dummy;
    temp_s1=func_800072E0();
    if (*(s32*)((u8*)arg0+8) >= *(s32*)((u8*)arg0+0x10)) {
      one=1; eight=8; dummy=0;
      do {
        if (arg2 != one) { func_80007300(temp_s1); return -1; }
        *(s16*)((u8*)D_80012950+0x10)=eight;
        func_80000DD4((u8*)arg0+4);
      } while (*(s32*)((u8*)arg0+8) >= *(s32*)((u8*)arg0+0x10));
    }
    temp_hi=*(s32*)((u8*)arg0+0xC);
    temp_v1=*(s32*)((u8*)arg0+0x10);
    temp_hi=(temp_hi+temp_v1-1)%temp_v1;
    *(s32*)((u8*)arg0+0xC)=temp_hi;
    *(s32*)(*(u32*)((u8*)arg0+0x14)+temp_hi*4)=arg1;
    *(s32*)((u8*)arg0+8) += 1;
    if (**(s32**)arg0 != 0) func_8000DB90(func_80000F50(arg0));
    func_80007300(temp_s1);
    return 0;
}
