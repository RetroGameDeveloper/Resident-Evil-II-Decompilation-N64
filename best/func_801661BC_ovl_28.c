extern u8 D_800C7650_ovl_01[]; extern u8 D_800E8FC8_ovl_01[]; extern u8 D_80168FCC_ovl_28[]; 
void func_801661BC_ovl_28(S_func_801661BC_ovl_28_arg0 *arg0, void *arg1, void *arg2) {
    u16 sp10, sp12, sp14; s16 sp18[3]; s32 s4; S_func_801661BC_ovl_28_sub *s0;
    if (arg0->unk_06 != 0) goto tail;
    s0=(S_func_801661BC_ovl_28_sub *)((u8 *)arg0->unk_234+0x178);
    s4=func_80032D44_ovl_01(arg0->unk_28,arg0->unk_30,*(s16 *)(D_800C7650_ovl_01+0x19AAA),*(s16 *)(D_800C7650_ovl_01+0x19AB2));
    sp10=0; sp12=s4; sp14=0; func_80040E88_ovl_01(&sp10,sp18);
    sp10=0x64; sp12=0x100-((func_80033634_ovl_01()&0xFF)*2); sp14=0x80-(func_80033634_ovl_01()&0xFF);
    if ((arg0->unk_26E%3)==0) {sp10=0x64; sp12=0x3BC-((func_80033634_ovl_01()&0xFF)*2);}
    func_8004279C_ovl_01(sp18,&sp10,&sp10); sp10+=s0->unk_4E; sp12+=s0->unk_52; sp14+=s0->unk_56;
    if(arg0->unk_05!=0x10){func_800377B0_ovl_01((((func_80033634_ovl_01()&0xFF)*8)+0x17D0)|0x10000,(s16)s4,D_800E8FC8_ovl_01,&sp10); sp12-=((func_80033634_ovl_01()&0x3F)&0xFF)-0x40; func_800377B0_ovl_01(((func_80033634_ovl_01()&0xFF)*8)+0x17D0,(s16)s4,D_800E8FC8_ovl_01,&sp10); if(arg0->unk_05!=1)func_80077D48_ovl_01(8,arg0);}
    arg0->unk_2BC=1; arg0->unk_2BD=0;
    if(arg0->unk_26E<3){if(arg0->unk_05==9)func_8016695C_ovl_28(arg0); if(arg0->unk_05==0x11)func_80166A94_ovl_28(arg0); if(arg0->unk_05==0xA)func_801666EC_ovl_28(arg0); if(arg0->unk_05==0xB)func_801667CC_ovl_28(arg0);}
    if(arg0->unk_05==0x10&&arg0->unk_2C8==0){func_801666EC_ovl_28(arg0);arg0->unk_2C8=0x2D;}
    if((u32)(arg0->unk_05-5)<2)arg0->unk_2C3=1;
    if(arg0->unk_05==0xE)func_80166C24_ovl_28(arg0);
    if(!(arg0->unk_2B8&4)&&arg0->unk_1F2<0xC8){arg0->unk_2B5=0x32;arg0->unk_2B8|=4;}
    if(arg0->unk_2B8&0x80){((s32*)arg0)[1]=arg0->unk_298;goto tail;}
    if(!(arg0->unk_2B8&1)){if(arg0->unk_05==9){arg0->unk_2B5+=((u8*)D_80168FCC_ovl_28)[arg0->unk_05-1]>>1;if(arg0->unk_26E<3)arg0->unk_2B5+=((u8*)D_80168FCC_ovl_28)[arg0->unk_05-1]>>1;}else arg0->unk_2B5+=((u8*)D_80168FCC_ovl_28)[arg0->unk_05-1]; if(!(arg0->unk_2B8&2)){arg0->unk_2B8|=2;arg0->unk_2B4=0xF;}}
    if(arg0->unk_2B5<0xC){((s32*)arg0)[1]=arg0->unk_298;func_801625A4_ovl_28(arg0,arg1,arg2);return;}
    arg0->unk_2B5=0;arg0->unk_2B4=0;arg0->unk_2B8&=~2;
tail: func_801665DC_ovl_28(arg0,arg1,arg2);
}
