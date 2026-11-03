typedef struct O { u8 pad[0x164]; void *p164; } O;
void func_8002DDE4_ovl_01(void *arg0) {
 O *p=(O*)arg0;
 void *x=((void *(*)(void*,s32,s32))(*(void ***)((u8*)arg0+4))[0])(arg0,1,0x24);
 p->p164=x;
 *(void**)x=(void*)0x8002DC0C;
 *((void**)x+1)=(void*)0x8002DD64;
 func_8002DA80_ovl_01(arg0);
}
