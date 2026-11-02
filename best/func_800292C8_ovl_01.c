typedef struct Obj Obj; typedef s32 (*F0)(void); typedef s32 (*F1)(void*,s32,s32);
struct Obj { void *v; void *(*alloc)(void*,s32,s32); u8 pad[0x164]; void *field16c; };
extern s32 D_80029000_ovl_01;
void func_800292C8_ovl_01(Obj *a,s32 b) {
 void *p;
 p=a->alloc(a,1,0x60);
 a->field16c=p;
 *(s32*)p=(s32)&D_80029000_ovl_01;
 if(b) {
   (*(void (**)(void*))(*(void**)a))(a);
 } else {
   s32 x=((s32 (*)(void*,s32,s32))(*(void**)((u8*)a+4)))(a,1,0x500)+0x480;
   s32 i=9; s32 *q=(s32*)((u8*)p+0x34);
   do { *q=x; x-=0x80; i--; q--; } while(i>=0);
   *(s32*)((u8*)p+0x38)=0;
 }
}
