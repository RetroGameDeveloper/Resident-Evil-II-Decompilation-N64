typedef struct { u8 pad0[0x2a]; s16 x; u8 pad2c[6]; s16 y; u8 pad34[0x200]; void *ptr; u8 pad238[0x7c]; u8 flag; } Obj;
typedef struct { u8 pad[0x4e]; u16 a; u8 p50[2]; u16 b; u8 p54[2]; u16 c; } Sub;
extern u8 D_801667D8_ovl_35[];
extern u8 D_800E10D0_ovl_01[];
extern u8 D_800C7650_ovl_01[];
extern u8 D_800E8FC8_ovl_01[];
s16 func_80032D44_ovl_01(s16,s16,s16,s16);
void func_800377B0_ovl_01(u32,s16,void*,u16*);
void func_801661F0_ovl_35(Obj *p,s32 arg1,s32 arg2) {
 u8 *rec; void *obj; void *q; s32 idx; s16 d; u8 b; u16 vals[3]; void *a2; u32 key;
 rec=D_801667D8_ovl_35+(arg2&255)*6;
 if(p->flag) q=*(void**)(D_800C7650_ovl_01+0x18000+0x1D3C); else q=D_800E10D0_ovl_01;
 d=func_80032D44_ovl_01(p->x,p->y,*(s16*)((u8*)q+0x2a),*(s16*)((u8*)q+0x32));
 idx=(arg1&255)*0x178; obj=p->ptr; obj=(u8*)obj+idx;
 b=rec[0];
 if(!(b&0x80)){vals[0]=*(u16*)((u8*)obj+0x4e);vals[1]=*(u16*)((u8*)obj+0x52);vals[2]=*(u16*)((u8*)obj+0x56);a2=D_800E8FC8_ovl_01;}
 else {a2=(u8*)obj+0x38;vals[0]=vals[1]=vals[2]=0;}
 key=((b&0x7f)<<24)|((rec[1]+*(u16*)(rec+2))<<16)|*(u16*)(rec+4);
 func_800377B0_ovl_01(key,d,a2,vals);
}
