extern u8 D_80160B9C_ovl_03[];
extern u8 D_800C7650_ovl_01[];
s32 func_80052C00_ovl_01(s32,s32);
s32 func_80052C9C_ovl_01(s32,s32,s32);
s32 func_80052D40_ovl_01(s32,s32,s32,s32);
s32 func_80077B0C_ovl_01(s32,s32,...);
s32 func_8015E2EC_ovl_03(u8,s32,s32,s32);
void func_8015BBD4_ovl_03(void) {
    u8 temp_s0;
    u8 temp_v0;
    u8 *state = D_80160B9C_ovl_03;
    u8 *global = D_800C7650_ovl_01 + 0x18000;
    *(s32 *)(global + 0x1A3C) &= ~0x20;
    switch (state[3]) {
    case 0:
        state[8]=2; state[9]=0; state[7]=0; state[3]=1;
    case 1:
        if (*(s32 *)(global+0x1A3C)<0) {
            if ((*(u16 *)(global+0x25C)&0x4000) && state[6]<2) {
                state[6]++;
                func_80077B0C_ovl_01(0x04040000,0,state[3]);
            }
            if ((*(u16 *)(global+0x25C)&0x1000) && state[6]!=0) {
                state[6]--;
                func_80077B0C_ovl_01(0x04040000,0);
            }
        }
        temp_v0=state[7]+state[8]; state[7]=temp_v0;
        if ((u32)((temp_v0-1)&0xFF)>=0x30) state[8]=(u8)-state[8];
        func_8015E2EC_ovl_03(state[6],0,0,0);
        if ((*(u32 *)(global+0x268)&0x1000) || (*(u32 *)(global+0x258)&0x800)) {
            temp_s0=state[6];
            switch(temp_s0) {
            case 0:
                state[5]=0; state[2]=6; state[3]=0;
                func_80052C00_ovl_01(7,0);
                func_80052C9C_ovl_01(9,0xFF,0);
                func_80052D40_ovl_01(4,0xFF,0x3C,0xA);
                return;
            case 1:
                func_80077B0C_ovl_01(0x04060000,0);
                state[6]=0; state[2]=temp_s0; state[3]=0; state[0xC]=0;
                return;
            case 2:
                state[5]=temp_s0; state[2]=6; state[3]=0;
                break;
            }
        } else return;
        break;
    }
}
