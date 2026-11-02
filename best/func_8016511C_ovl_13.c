extern u8 D_800C7650_ovl_01[];
void func_8016511C_ovl_13(void *arg0) {
    u8 state;
    u16 v;
    func_801622C0_ovl_13();
    state=((u8*)arg0)[7];
    switch(state) {
    case 0:
        *((u16*)((u8*)arg0+0x2C6)) |= 0x20;
        ((u8*)arg0)[7]++;
    case 1:
        if (*((u16*)((u8*)arg0+0x270)) & 1) {
            *((u16*)((u8*)arg0+0x270))=0;
            func_80165BD8_ovl_13(arg0,1,1);
        }
        break;
    case 2:
        *((u16*)((u8*)arg0+0x2C6)) &= 0xFFDF;
        ((u8*)arg0)[7]++;
    case 3:
        v=*((u16*)((u8*)arg0+0x270));
        if (v&1) {
            *((u16*)((u8*)arg0+0x270))=0;
            func_80165BD8_ovl_13(arg0,1,1);
        } else if ((*((u16*)((u8*)D_800C7650_ovl_01+0x18000+0x1A7A)))&1) {
            *((u16*)((u8*)arg0+0x270))=0;
            func_80165BD8_ovl_13(arg0,1,1);
        }
    }
}
