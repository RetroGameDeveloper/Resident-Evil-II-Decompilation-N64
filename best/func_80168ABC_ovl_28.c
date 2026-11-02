s32 func_800662B8_ovl_01(void *, void *, s32);
void func_80168ABC_ovl_28(u8 *arg0, u8 *arg1) {
    u8 *actor=arg0;
    u8 mode=actor[5];
    s32 one=1;
    switch(mode) {
    case 0:
        *(u16*)(actor+0x1f4)=0x200;
        actor[5]=one;
    case 1: {
        u8 *obj=*(u8**)(arg1+0x120);
        u16 val=*(u16*)(actor+0x1f4);
        *(u16*)(obj+0xc)=*(u16*)(obj+0xc)-val;
        obj=*(u8**)(arg1+0x120);
        val=*(u16*)(actor+0x1f4);
        *(u16*)(obj+0x10)=*(u16*)(obj+0x10)+val;
        obj=*(u8**)(arg1+0x120);
        if (*(s16*)(obj+0x10)>=0x625) {
            val=*(u16*)(actor+0x1f4)-0x40;
            *(u16*)(actor+0x1f4)=val;
            val=(s16)val;
            if ((s16)val<0xc0) {
                actor[5]=2;
                *(u16*)(actor+0x1f4)=0xc0;
            }
        } else {
            val=*(u16*)(actor+0x1f4)+0x40;
            *(u16*)(actor+0x1f4)=val;
            val=(s16)val;
            if ((s16)val>=0x181) *(u16*)(actor+0x1f4)=0x180;
        }
        break;
    }
    case 2: {
        u8 *obj=*(u8**)(arg1+0x120);
        u16 val=*(u16*)(actor+0x1f4);
        *(u16*)(obj+0xc)=*(u16*)(obj+0xc)+val;
        obj=*(u8**)(arg1+0x120);
        val=*(u16*)(actor+0x1f4);
        *(u16*)(obj+0x10)=*(u16*)(obj+0x10)-val;
        obj=*(u8**)(arg1+0x120);
        if (*(s16*)(obj+0x10)<0x200) {
            val=*(u16*)(actor+0x1f4)-0x30;
            *(u16*)(actor+0x1f4)=val;
            val=(s16)val;
            if ((s16)val<0x90) {
                actor[5]=one;
                *(u16*)(actor+0x1f4)=0x100;
            }
        } else {
            val=*(u16*)(actor+0x1f4)+0x30;
            *(u16*)(actor+0x1f4)=val;
            val=(s16)val;
            if ((s16)val>=0x101) *(u16*)(actor+0x1f4)=0x100;
        }
        break;
    }
    }
    func_800662B8_ovl_01(actor, actor, one);
}
