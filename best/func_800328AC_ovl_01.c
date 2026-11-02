extern volatile u8 D_800C7650_ovl_01[];
extern volatile u8 D_800EB204_ovl_01[];
extern u8 *D_8010B698_ovl_01;
void *func_80001180(u8);
void func_8003281C_ovl_01(void *,void *);
void func_800888CC_ovl_01(s32,void *,u32);
void func_800328AC_ovl_01(s16 arg0) {
    s16 id; s32 slot,i,idx,size,acc; volatile u8 *base=D_800C7650_ovl_01; void *a,*b; u8 *q;
    idx=arg0-0x10;
    if(*(volatile s32 *)(base+0x18000+idx*4+0x1F40)==0)return;
    id=arg0;if((u32)idx<0x10)id=0x10;
    slot=0;
    if(id==0x10){slot=1;q=base+0x18004;for(;;){if(*(volatile u16 *)(q+0x2240)==id){*(volatile u16 *)(q+0x2242)=1;*(volatile s32 *)(base+idx*4+0x1dc0)=*(volatile s32 *)(base+idx*4+slot*0x180+0x1f40);return;}slot--;q-=4;if(slot<0)break;}
       if(*(volatile u16 *)(base+0x1a246)==0)slot=1;else if(*(volatile u16 *)(base+0x1a242)==0)slot=0;
    }else{q=base+0x18000;for(slot=0;slot<2;slot++,q+=4){if(*(volatile u16 *)(q+0x2240)==id){*(volatile u16 *)(q+0x2242)=1;*(volatile s32 *)(base+idx*4+0x1dc0)=*(volatile s32 *)(base+idx*4+slot*0x180+0x1f40);return;}}
       if(*(volatile u16 *)(base+0x1a242)==0)slot=0;else if(*(volatile u16 *)(base+0x1a246)==0)slot=1;else slot=1;}
    q=base+0x18000+slot*4;*(volatile u16 *)(q+0x2242)=1;*(volatile u16 *)(q+0x2240)=id;
    *(volatile s32 *)(base+idx*4+0x1dc0)=*(volatile s32 *)(base+idx*4+slot*0x180+0x1f40);
    if(id==0x39)id=0x2e;a=func_80001180(D_800EB204_ovl_01[id-0x10]);
    if(slot==0){func_8003281C_ovl_01(a,a);return;}b=func_80001180(D_800EB204_ovl_01[id-0x10+slot]);
    if(*(s32 *)((u8 *)b+12)!=*(s32 *)((u8 *)b+8)){func_8003281C_ovl_01(a,b);size=*(u32 *)((u8 *)b+4);func_800888CC_ovl_01(*(s32 *)b,D_8010B698_ovl_01,size);acc=0;for(i=0;i<(size>>2);i++){acc+=*(u16 *)(D_8010B698_ovl_01+i*4);*((u8 *)b+8+acc)=*(u8 *)(D_8010B698_ovl_01+i*4+2);}}
}
