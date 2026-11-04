typedef struct {u32 flags;u8 pad4[2];u8 state;u8 pad7[0x5F];s16 f66;u8 pad68[0x12A];u16 f1F4;u8 pad1F6[0x16];s32 f1E8;u8 pad1EC[0x26];s16 f212;u8 pad214[0x76];u16 f1AA;} Obj;
extern u8 D_800C7650_ovl_01[];
s32 func_80033634_ovl_01(void);void func_80035AAC_ovl_01_108(void*);void func_80077D48_ovl_01(s32,void*);
s32 func_80089D34_ovl_01(void*,s32,s32,s32);void func_80163AD0_ovl_27(void*);void func_80163B38_ovl_27(void*,s32,s32);
void func_801634F8_ovl_27(Obj*p,s32 x,s32 y){
 s32 t,s;u16 h;u32 val;
 if(!p->state){
  p->state=1;p->f212=0x1000;p->flags|=0x800;
  t=func_80033634_ovl_01();s=func_80033634_ovl_01();
  val=(((t&1)+5)<<24)+((s&7)<<16)+0x700;
  p->f1F4=1;p->f1E8=val;p->f66=0x800;
  func_80035AAC_ovl_01_108(p);
  if(!(*(u16*)(D_800C7650_ovl_01+0x19A78)&0x10))func_80077D48_ovl_01(8,p);
  *(u16*)(D_800C7650_ovl_01+0x19A78)|=0x10;
 }
 func_80089D34_ovl_01(p,x,y,0x100);
 h=p->f1F4-1;p->f1F4=h;s=0;
 if((h<<16)==0){
  p->flags &= ~0x800;
  do {s32 a2=5;if(p->f212>=0x801)a2=4;func_80163B38_ovl_27(p,s&0xFF,a2);s++;}while(s<3);
  p->f1F4=12;p->flags|=0x800;
 }
 func_80163AD0_ovl_27(p);
 h=p->f212-0x20;p->f212=h;
 if((s16)h<0){p->f212=0;*(u32*)((u8*)p+4)=0x07000000;p->f1AA|=0x4000;}
}
