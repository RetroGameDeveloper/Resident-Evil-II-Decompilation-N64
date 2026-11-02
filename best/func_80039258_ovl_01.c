typedef struct {u8 a;u8 b;u8 pad[0x16];u16 flags;u8 c;u8 kind;u8 rest[0x60];} Ent;
typedef struct {u8 pad[0x1a60];u32 flags;} Root;
extern Ent *D_800EBB34_ovl_01;
extern Ent D_800EBD48_ovl_01[];
extern u32 D_800C7650_ovl_01[];
extern void *D_800EB950_ovl_01[];
extern void func_8003957C_ovl_01(s32);
void func_80039258_ovl_01(void){Ent*p;Ent*end; s32 i; void (**tab)(void*);
end=D_800EBD48_ovl_01+0x2e80/sizeof(Ent);
if(D_800C7650_ovl_01[0x1a60/4]&0x10000000){
 D_800EBB34_ovl_01=D_800EBD48_ovl_01;
 for(p=D_800EBD48_ovl_01;p<end;p++){
  if((p->kind==0x1a||p->kind==0x1c||p->kind==0x28||p->kind==0x15||p->kind==0x16)&&(p->flags&0x8000)){
   if(p->c){Ent*q=D_800EBD48_ovl_01+p->c;if(q->flags==0){p->b=0;p->a=0;p->flags=0;}}
   ((void(*)(Ent*))D_800EB950_ovl_01[p->a])(p);
  }
  D_800EBB34_ovl_01=p+1;
 }
 D_800EBB34_ovl_01=D_800EBD48_ovl_01;
 for(p=D_800EBD48_ovl_01;p<end;p++){
  if(p->kind==0x1a||p->kind==0x1c||p->kind==0x28||p->kind==0x15||p->kind==0x16){
   if(p->flags&0x4000){p->flags=0xa003;((void(*)(void))D_800EB950_ovl_01[p->a])();}
   if(p->flags&0x8000)func_8003957C_ovl_01(0);
  }
  D_800EBB34_ovl_01=p+1;
 }
}else{
 D_800EBB34_ovl_01=D_800EBD48_ovl_01;
 for(p=D_800EBD48_ovl_01;p<end;p++){
 if(p->flags&0x8000){if(p->c){Ent*q=D_800EBD48_ovl_01+p->c;if(q->flags==0){p->b=0;p->a=0;p->flags=0;}}((void(*)(Ent*))D_800EB950_ovl_01[p->a])(p);}D_800EBB34_ovl_01=p+1;}
 D_800EBB34_ovl_01=D_800EBD48_ovl_01;
 for(p=D_800EBD48_ovl_01;p<end;p++){if(p->flags&0x4000){p->flags=0xa003;((void(*)(void))D_800EB950_ovl_01[p->a])();}if(p->flags&0x8000)func_8003957C_ovl_01(0);D_800EBB34_ovl_01=p+1;}
}}
