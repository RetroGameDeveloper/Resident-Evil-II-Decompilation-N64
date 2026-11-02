typedef struct {u8 p0[4]; void *p4; s32 count; s32 index; s32 size; void *data;} Q;
typedef struct {u8 p0[0x10]; s16 delay;} DQ;
extern DQ *D_80012950;
s32 func_8000C9E0(Q *q,s32 *out,s32 wait){
 s32 result; s32 delay;
 result=func_800072E0();
 if(q->count==0){
  if(wait==0){func_80007300(result);return -1;}
  delay=8;
  do { D_80012950->delay=delay; func_80000DD4(q); } while(q->count==0);
 }
 if(out) *out=((s32*)q->data)[q->index];
 q->count--;
 q->index=(q->index+1)%q->size;
 if(*(s32*)q->p4) func_8000DB90(func_80000F50(&q->p4));
 func_80007300(result);return 0;
}
