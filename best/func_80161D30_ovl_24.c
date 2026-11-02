s32 func_80089D34_ovl_01(void *,s32,s32,s32);
void func_80161D30_ovl_24(void *arg0) {
 u8 state=*(u8 *)((u8 *)arg0+5);
 s32 result;
 if (state==1) goto active;
 if (state<2) {
  if(state!=0) goto done;
  if (*(s16 *)((u8 *)arg0+0x270)==0) goto done;
  *(u8 *)((u8 *)arg0+5)=1;
  *(s32 *)((u8 *)arg0+0x1E8)=0;
active:
  result=func_80089D34_ovl_01(arg0,0,0,0x1000);
  *(u8 *)((u8 *)arg0+5)+=result;
 }
done:;
}
