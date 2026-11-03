s32 func_80033634_ovl_01(void);
s32 func_80089D34_ovl_01(void *, s32, s32, s32);
s32 func_80166BF0_ovl_17(void *, s16);
s16 func_80166F04_ovl_26(void *, s32, s32);
s32 func_801678B8_ovl_17(void *);
#define F(p,t,o) (*(t *)((u8 *)(p)+(o)))
void func_80163B68_ovl_17(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_v0;
    s16 var_v1;
    s8 var_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v1;
    temp_v1=F(arg0,u8,6);
    switch(temp_v1) {
    case 0:
        F(arg0,u8,6)=1;
        temp_v0=func_80166F04_ovl_26(arg0,0x20,1);
        F(arg0,s16,0x1F6)=temp_v0;
        if(temp_v0==0) { var_v0=7; goto block_15; }
        var_v1=-0x400;
        if(temp_v0>0) var_v1=0x400;
        F(arg0,s16,0x1F4)=var_v1;
        if(F(arg0,u8,0x2CC)==0) F(arg0,s16,0x1F4)=-var_v1;
    case 1:
        F(arg0,u8,6)=2;
        F(arg0,u8,0x206)=(func_80033634_ovl_01()&0xF)+0xF;
        F(arg0,s32,0x1E8)=0x02000300;
    case 2:
        func_80166BF0_ovl_17(arg0,F(arg0,s16,0x1F6));
        var_v0=6;
        if((F(arg0,u16,0x2C2)&0xFFF)==((u16)F(arg0,s16,0x1F4)&0xFFF)) {
block_15: F(arg0,s8,5)=var_v0; F(arg0,u16,6)=0;
        } else {
            temp_v0_2=F(arg0,u8,0x206)-1;
            F(arg0,u8,0x206)=temp_v0_2;
            if((temp_v0_2<<24)==0) {
                F(arg0,u8,6)=3;
                F(arg0,u8,0x206)=(func_80033634_ovl_01()&0xF)+1;
                F(arg0,s32,0x1E8)=0x300;
            }
        }
        break;
    case 3:
        temp_v0_3=F(arg0,u8,0x206)-1;
        F(arg0,u8,0x206)=temp_v0_3;
        if((temp_v0_3<<24)==0) F(arg0,u8,6)=1;
        break;
    }
    func_80089D34_ovl_01(arg0,arg1,arg2,0x400);
    func_801678B8_ovl_17(arg0);
}
