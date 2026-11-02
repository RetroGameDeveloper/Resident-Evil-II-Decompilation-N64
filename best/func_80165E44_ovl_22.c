typedef struct {u8 pad[6];u8 state;u8 pad1[0x1D9];u16 timer;u8 pad2[2];u8 pad3[2];u8 command[4];u8 pad4[0x2C];s32 c1;u8 pad5[8];s32 c2,c3;u8 pad6[0x30];u8 flag;u8 pad7[0x12];u8 bit;} Obj;
void func_80077B0C_ovl_01(s32,s32);void func_80032B8C_ovl_01(void*,s32);s32 func_80089D34_ovl_01(void*,s32,s32,s32);
void func_80165E44_ovl_22(Obj*p){
 static void *jtbl_80166150_ovl_22[7]={&&L0,&&L1,&&L2,&&L3,&&L4,&&L5,&&L6};
 s32 t,sum;u8 st=p->state;
 if(st>=7)goto End;goto *jtbl_80166150_ovl_22[st];
L0:
 func_80077B0C_ovl_01(0x04020001,(s32)((u8*)p+0x28));
 *(s32*)((u8*)p+0x1E8)=0x04000300;p->state=1;p->timer=0x1F4;
 *(u16*)((u8*)p+0x1E2)=0;*(u16*)((u8*)p+0x1E4)=0;p->bit|=0x80;p->flag|=0x12;
 func_80032B8C_ovl_01(p,0);
 t=func_80089D34_ovl_01(p,p->c2,p->c3,0x400);p->state+=t;
 if(*(u8*)((u8*)p+0x1EA))p->timer-=0x1E;else p->timer-=0x3C;
 if((s16)p->timer<0)p->timer=0;goto End;
L1:
 *(s32*)((u8*)p+0x1E8)=0x01000300;p->state=5;p->bit=0;
 t=func_80089D34_ovl_01(p,p->c2,p->c3,0x400);sum=t;
 t=func_80089D34_ovl_01(p,p->c2,p->c3,0x400);sum+=t;
 if(sum){p->state=6;*(s32*)((u8*)p+0x1E8)=0x06000300;}goto End;
L2:
 t=func_80089D34_ovl_01(p,p->c1,p->c2,0x10400);
 if(t){*(s32*)((u8*)p+4)=0x01000000;p->bit=0;p->flag&=0xED;}goto End;
L3: goto End; L4: goto End; L5: goto End; L6: goto End;
End: ;
}
