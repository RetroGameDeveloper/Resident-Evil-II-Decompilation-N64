extern u8 D_800DF650_ovl_01[];
extern u32 D_801603F0_ovl_03[];
extern u8 D_80160AF8_ovl_03[];
extern u8 D_80160B9C_ovl_03;
void func_8015DDA4_ovl_03(void) {
    s32 state=0, mode=0, direction=0, phase=0, angle=0, i;
    s32 *global=(s32*)D_800DF650_ovl_01;
    u8 *buf=D_80160AF8_ovl_03;
    func_8004CEC0_ovl_01();
    func_80027530_ovl_01(0x200,0x555,7,0);
    func_800275F8_ovl_01(0,0,0,0);
    while (!func_800276B4_ovl_01(0)) func_8004CDB8_ovl_01(1);
    func_80027530_ovl_01(0x200,-0x554,7,0);
    func_800275F8_ovl_01(0,0,0,0);
    do {
        switch(state) {
        case 0:
            if (func_800276B4_ovl_01(0)) state=1;
            else goto update;
            break;
        case 1:
            if (!phase && (global[0x25E/4]&0x2000)) { func_80077B0C_ovl_01(0x4040000,0); state=2; }
            if (phase==1 && (global[0x25E/4]&0x8000)) { func_80077B0C_ovl_01(0x4040000,0); state=3; }
            if ((global[0x268/4]&0x1000)||(global[0x258/4]&0x800)) {
                if (!phase) { func_80077B0C_ovl_01(0x4060000,0); direction=1; }
                else { func_80077B0C_ovl_01(0x4060000,0); direction=2; }
                state=4;
            }
            if (global[0x268/4]&0x2000) {
                func_80077B0C_ovl_01(0x4050000,0);
                D_80160B9C_ovl_03=1;
                state=4;
            }
            break;
        case 2: case 3:
            mode=8;
            do {
                angle=mode*mode*mode*mode*mode;
                if (angle<0) { phase=1; angle=0x94-((angle+0xFFF)>>12); }
                else { phase=0; angle>>=12; }
                mode--;
            } while(mode>=0);
            state=0;
            break;
        case 4:
            func_80027530_ovl_01(0x200,0x555,7,0);
            func_800275F8_ovl_01(0,0,0,0);
            state=5;
            break;
        case 5:
            if (!func_800276B4_ovl_01(0)) break;
            func_8002751C_ovl_01(2,1);
            if (direction==1) { state=6; break; }
            if (direction==2) global[0x1A3C/4]|=8;
            func_8004CEF4_ovl_01(0);
            func_8004CE04_ovl_01();
            break;
        case 6:
            if (global[0x1A3C/4]&0x200) {
                global=(s32*)D_800DF650_ovl_01;
                while (global[0x1A3C/4]&0x200) func_8004CDB8_ovl_01(1);
            }
            func_8002751C_ovl_01(0,0);
            func_800275F8_ovl_01(0,0x7FFF,0xFFFF,0);
            state=0;
            break;
        }
update:
        *(u16*)(buf+0xC)=angle+0x14;
        *(u16*)(buf+0x18)=angle+0x98;
        *(u16*)(buf+0x1C)=0xA8-angle;
        for (i=0;i<2;i++) {
            global[0x204/4]=func_80046FC8_ovl_01(global[0x204/4],buf);
            buf+=0x10;
        }
        func_8004CDB8_ovl_01(1);
    } while (state<7);
}
