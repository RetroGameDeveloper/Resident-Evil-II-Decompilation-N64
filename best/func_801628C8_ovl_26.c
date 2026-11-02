typedef struct {u8 pad[0x28];s32 x28;u8 p[4];s32 x30;u8 q[0x1be];s16 x1f2;} Anim;
typedef struct {u8 p[5];s8 f5;u16 f6;u8 q[0x5e];u16 x66;u8 r[0x24c];u8 f2b4;u8 s[0x17];u32 x28c,x290;u8 t[0x34];u8 x2cd,x2ce;} Obj;
typedef struct {u8 p[0x18000];struct{u8 q[0x1d3c];Anim *anim;} sub;} Big;
extern Big D_800C7650_ovl_01; extern Anim D_800E10D0_ovl_01;
s32 func_80033678_ovl_01(Obj*);s32 func_80032EA4_ovl_01(Obj*,s32,s32,s32);void func_801629EC_ovl_26(Obj*);void func_80166984_ovl_26(Obj*);void func_801625F8_ovl_26(Obj*);
void func_801628C8_ovl_26(Obj *arg0){Anim *anim;u32 d;s32 result;
if(arg0->f2b4){anim=D_800C7650_ovl_01.sub.anim;}else{anim=&D_800E10D0_ovl_01;}
if(arg0->f2b4){d=arg0->x290&0x3fffffff;}else{d=arg0->x28c;}
func_80033678_ovl_01(arg0);
arg0->x66+=0x800;arg0->x66+=arg0->x2cd<<11;
result=func_80032EA4_ovl_01(arg0,anim->x28,anim->x30,0x200);
arg0->x66-=0x800;arg0->x66-=arg0->x2cd<<11;
if(d<0xbb8){if(result==0){if(arg0->x2ce==0){arg0->f5=2;arg0->f6=0;}}}
if(anim->x1f2<0){arg0->f5=0;arg0->f6=0;}
func_801629EC_ovl_26(arg0);func_80166984_ovl_26(arg0);func_801625F8_ovl_26(arg0);}
