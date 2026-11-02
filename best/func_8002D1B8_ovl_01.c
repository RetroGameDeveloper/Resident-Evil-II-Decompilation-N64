extern void func_8002D194_ovl_01(void*,void*); extern void func_8002C8EC_ovl_01(void); extern s32 D_8002CC84_ovl_01,D_8002CF50_ovl_01,D_8002B840_ovl_01,D_8002BB70_ovl_01;
typedef struct {u8 pad[0x174]; void *p174;} Obj;
typedef void *(*Alloc)(void*,s32);
void func_8002D1B8_ovl_01(Obj *s0){void *p; s32 i; if(!s0->p174){p=*(void**)(*(void**)((u8*)s0+4));s0->p174=((void*(*)(s32,s32))p)(0,0x60);} p=s0->p174; *(void**)p=func_8002D194_ovl_01;*(void**)((u8*)p+4)=&D_8002CC84_ovl_01;*(void**)((u8*)p+8)=&D_8002CF50_ovl_01;*(void**)((u8*)p+12)=func_8002C8EC_ovl_01;for(i=0;i<16;i++)*(void**)((u8*)p+0x10+i*4)=func_8002C8EC_ovl_01;*(void**)((u8*)p+0x10)=&D_8002B840_ovl_01;*(void**)((u8*)p+0x48)=&D_8002BB70_ovl_01;func_8002D194_ovl_01(s0,func_8002C8EC_ovl_01);}
