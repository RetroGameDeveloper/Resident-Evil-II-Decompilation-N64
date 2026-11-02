typedef u32 *(*AllocFn)(void *,s32,s32);
typedef struct {u8 z[12]; s32 *src; u8 pad[0x2C]; s32 **first; s32 **second;} Manager;
typedef struct {s32 pad0; AllocFn get; u8 pad8[0x18]; s32 count; u8 pad24[0x8C]; u8 *rows; u8 padB4[0x58]; s32 stride; u8 pad110[0x58]; Manager *manager;} Ctx;
void func_8002A5A0_ovl_01(Ctx *arg0){
s32 i,j,count,x,amount,copyCount,idx; s32 *out,*next,*src; Manager *mgr; s32 stride; u8 *row;
mgr=arg0->manager; stride=arg0->stride; count=arg0->count;
out=(s32*)arg0->get(arg0,1,count*8);
mgr->first[0]=out; mgr->second[0]=out+count;
if(count>0){
 row=arg0->rows+0x24;
 for(i=0;i<count;i++,row+=0x50){
  x=(*(s32*)(row-0x18)* *(s32*)row)/stride;
  amount=x*(stride+4);
  out=(s32*)arg0->get(arg0,1,amount*8)+x;
  mgr->first[i]=out;
  next=out+amount; mgr->second[i]=next;
  src=mgr->src; copyCount=x*(stride+2);
  for(j=0;j<copyCount;j++){next[j]=src[j];out[j]=src[j];}
  copyCount=2*x;
  for(j=0;j<copyCount;j++){
   idx=x*(stride-2)+j; next[idx]=src[x*stride+j];
   next[x*stride+j]=src[idx];
  }
  for(j=0;j<x;j++)out[j-x]=out[0];
 }
}
}
