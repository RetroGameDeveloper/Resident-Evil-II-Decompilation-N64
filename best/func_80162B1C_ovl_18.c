typedef struct { u8 pad[0x260]; } Obj;
typedef struct { u8 pad[0x58]; } Rec;
extern s32 func_800377B0_ovl_01(s32,s16,void*,void*);
extern u8 D_80162CEC_ovl_18[];
extern u8 D_800E8FC8_ovl_01[];
void func_80162B1C_ovl_18(Obj *p,s32 index,s32 flags) {
 u16 vals[3]; u8 *rec; u8 *table;
 s32 attr; s32 cr;
 rec=*(u8**)((u8*)p+0x234)+((index&255)*0x178);
 table=D_80162CEC_ovl_18+((flags&0x7F)*6);
 vals[0]=*(u16*)(rec+0x4E);
 vals[1]=*(u16*)(rec+0x52);
 attr=*(u16*)(table+2);
 cr=*(s16*)((u8*)p+0x1A8);
 if ((flags&0x80) && cr<*(s16*)((u8*)p+0x25E)) vals[1]=cr+10;
 vals[2]=*(u16*)(rec+0x56);
 func_800377B0_ovl_01((table[0]<<24)|(table[1]<<16)|*(u16*)(table+4),*(s16*)((u8*)p+0x66)+attr,D_800E8FC8_ovl_01,vals);
}
