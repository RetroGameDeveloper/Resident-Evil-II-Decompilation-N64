void func_801658A0_ovl_28(void *arg0, void *arg1) {
 s32 state; s32 tmp; s32 i; s32 arg; volatile s32 pad;
 state=*(u8*)((u8*)arg0+0x2B5);
 if(state>=5) goto common;
 if(state==0) goto st0; if(state==1) goto st1; if(state==2) goto st2; if(state==3) goto st3; goto common;
st0: *(u16*)((u8*)arg1+0x11C)=0x1000; *(u8*)((u8*)arg0+0x2B5)=1; *(u8*)((u8*)arg1+0x112)=1; tmp=func_80033634_ovl_01()&3; *(u16*)((u8*)arg1+0x11E)=tmp+1; *(u8*)((u8*)arg1+0x111)=0x1E; *(s32*)arg1 &= ~0x4000;
st1: tmp=*(u8*)((u8*)arg1+0x111)-1; *(u8*)((u8*)arg1+0x111)=tmp; if((s8)tmp==-1){*(u8*)((u8*)arg0+0x2B5)=2; *(u8*)((u8*)arg1+0x111)=0x3C;} goto common;
st2: tmp=*(u16*)((u8*)arg1+0x124)-0x14; *(u16*)((u8*)arg1+0x124)=tmp; i=*(u8*)((u8*)arg1+0x111)-1; *(u8*)((u8*)arg1+0x111)=i; if((s8)i==-1) *(u8*)((u8*)arg0+0x2B5)=3; goto common;
st3: tmp=*(u16*)((u8*)arg1+0x124)-0x200; *(u16*)((u8*)arg1+0x124)=tmp; if((s16)tmp<0){*(u8*)((u8*)arg0+0x2B5)=4; *(s32*)arg1|=0x4000;}
common:
 *(u16*)((u8*)arg1+0xC)=0x1000-*(u16*)((u8*)arg1+0x11C); {s32 *p=*(s32**)((u8*)arg1+0x120); p[4]=*(u16*)((u8*)arg1+0x11C);} func_800662B8_ovl_01(arg1);
 *(u16*)((u8*)arg1+0x11C)+=(*(s8*)((u8*)arg1+0x112)<<10); *(u16*)((u8*)arg1+0x10)=0x10; *(u16*)((u8*)arg1+0x12)=0x70; *(u16*)((u8*)arg1+0x14)=0;
 if(*(u8*)((u8*)arg0+0x2B5)<4){i=*(u16*)((u8*)arg1+0x11E)-1; *(u16*)((u8*)arg1+0x11E)=i; if((s16)i==-1){*(s8*)((u8*)arg1+0x112)=-*(s8*)((u8*)arg1+0x112); tmp=func_80033634_ovl_01()&3; *(u16*)((u8*)arg1+0x11E)=tmp+1; tmp=func_80033634_ovl_01()&255; func_800377B0_ovl_01((tmp+0xDDC)|0x01400000,0,(s32)arg1+0x38,(s32)((u8*)arg1+0x10));}}
 if((s16)*(u16*)((u8*)arg1+0x11C)<0){*(u8*)((u8*)arg1+0x112)=1; tmp=func_80033634_ovl_01()&3; *(u16*)((u8*)arg1+0x11E)=tmp+1; *(u16*)((u8*)arg1+0x11C)+=(*(s8*)((u8*)arg1+0x112)<<10); tmp=func_80033634_ovl_01()&255; func_800377B0_ovl_01((tmp+0xDDC)|0x01400000,0,(s32)arg1+0x38,(s32)((u8*)arg1+0x10));}
 if((s16)*(u16*)((u8*)arg1+0x11C)>=0x1001){*(s8*)((u8*)arg1+0x112)=-1; tmp=func_80033634_ovl_01()&3; *(u16*)((u8*)arg1+0x11E)=tmp+1; *(u16*)((u8*)arg1+0x11C)+=(*(s8*)((u8*)arg1+0x112)<<10); tmp=func_80033634_ovl_01()&255; func_800377B0_ovl_01((tmp+0xDDC)|0x01400000,0,(s32)arg1+0x38,(s32)((u8*)arg1+0x10));}
}
