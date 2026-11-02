typedef struct {u8 pad[8]; void *q0; void *q1; void *q2; s32 (*cb0)(); s32 (*cb1)();} Top2;
void func_8000C0D0(Top2 *a){
 void *e0=0,*e1=0; s32 x=0,again; u8 *msg,*p,*r; u32 n; s32 v;
 for(;;){
  func_8000C9E0(a->q0,&e0,1); msg=*(u8**)((u8*)e0+0x14);
  if(msg && msg[4]==2 && *(u32*)(msg+0x14)<2){
   n=*(u16*)(msg+0x1a); *(s32*)(msg+0x1c)=-1; r=msg+0x2c+n*0x24;
   if(*(u16*)(msg+0x18)!=3) *(s32*)(r+4)=*(s32*)(r+4)-*(s32*)(r+0xc);
   again=0;
   if(*(u16*)(msg+0x18)==2) again=*(u32*)(*(u8**)((u8*)e0+0x14)+0x14)<1;
   func_8000C9E0(a->q1,&e1,1); func_8000CB10(0x100401);
   func_8000C630(*(u8**)((u8*)e0+0x14),0x5000510,*(u32*)(msg+0x24)|0x80000000);
again_label:
   func_8000C9E0(a->q2,&x,1); msg=*(u8**)((u8*)e0+0x14); n=*(u16*)(msg+0x1a); r=msg+0x2c+n*0x24;
   if(*(u32*)r==0x1d){
    func_8000C630(msg,0x5000510,*(u32*)(msg+0x24)|0x10000000);
    func_8000C630(*(u8**)((u8*)e0+0x14),0x5000510,*(u32*)(msg+0x24));
    func_8000C490(*(u8**)((u8*)e0+0x14),0x5000508,&x);
    if(x&0x2000000) func_8000C630(*(u8**)((u8*)e0+0x14),0x5000510,*(u32*)(msg+0x24)|0x1000000);
    *(volatile u32*)0xA4600010=2; *(u32*)r=4; func_8000CD00(0x100C01);
   }
   func_8000CB60(*(void**)((u8*)e0+4),0,0);
   if(again && *(u32*)(msg+0x2c)){again=0;goto again_label;}
   func_8000CB60(a->q1,0,0);
   if(*(u16*)(msg+0x1a)!=1)func_80011390();
   continue;
  }
  msg=(u8*)e0; switch(*(u16*)msg){
  case 10: func_8000C9E0(a->q1,&e1,1); v=a->cb0(0,*(s32*)(msg+0xc),*(s32*)(msg+8),*(s32*)(msg+0x10)); break;
  case 11: func_8000C9E0(a->q1,&e1,1); v=a->cb0(1,*(s32*)(msg+0xc),*(s32*)(msg+8),*(s32*)(msg+0x10)); break;
  case 12: func_8000C9E0(a->q1,&e1,1); v=a->cb1(*(s32*)(msg+0x10),0,*(s32*)(msg+0xc),*(s32*)(msg+8),*(s32*)(msg+4)); break;
  case 13: func_8000C9E0(a->q1,&e1,1); v=a->cb1(*(s32*)(msg+0x10),1,*(s32*)(msg+0xc),*(s32*)(msg+8),*(s32*)(msg+4)); break;
  default: func_8000CB60(*(void**)(msg+4),0,0); v=-1; break;
  }
  if(v)continue;
  func_8000C9E0(a->q2,&x,1); func_8000CB60(*(void**)(msg+4),0,0); func_8000CB60(a->q1,0,0);
 }
}
