typedef struct { u8 pad[5]; u8 x5,x6,x7,x8,x9; u8 pad2[2]; u32 addr; } Dev;
typedef struct { s32 value; } Out;
extern Dev *D_80012910[2];
extern u8 D_80011B90,D_80011B94;
s32 func_8000C620(void*,void*,s32);
s32 func_8000C490(Dev *arg0,s32 arg1,Out *arg2) {
 u32 status; s32 t; u8 a; Dev *old; u32 val;
 if(arg2==0) func_8000C620(&D_80011B90,&D_80011B94,0x2b);
 status=*(volatile u32*)0xA4600010;
 while(status&3) status=*(volatile u32*)0xA4600010;
 t=arg0->x9; old=D_80012910[t];
 if(old!=arg0) {
  if(t==0) {
   a=arg0->x5;if(old->x5!=a)*(volatile u32*)0xA4600014=a;
   a=arg0->x6;if(old->x6!=a)*(volatile u32*)0xA460001C=a;
   a=arg0->x7;if(old->x7!=a)*(volatile u32*)0xA4600020=a;
   if(old->x8!=arg0->x8)*(volatile u32*)0xA4600018=arg0->x8;
  } else {
   a=arg0->x5;if(old->x5!=a)*(volatile u32*)0xA4600024=a;
   a=arg0->x6;if(old->x6!=a)*(volatile u32*)0xA460002C=a;
   a=arg0->x7;if(old->x7!=a)*(volatile u32*)0xA4600030=a;
   if(old->x8!=arg0->x8)*(volatile u32*)0xA4600028=arg0->x8;
  }
  D_80012910[t]=arg0;
 }
 val=*(volatile u32*)(arg0->addr|arg1|0xA0000000);
 arg2->value=val;
 return 0;
}
