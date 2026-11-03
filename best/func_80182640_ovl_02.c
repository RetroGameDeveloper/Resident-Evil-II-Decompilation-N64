u32 func_80180B90_ovl_02(void) {
    u32 end, start, n, value, idx;
    struct Obj { u32 size; u32 *data; u32 start; u32 end; } *obj;
    u32 *entry;
    func_8004D060_ovl_01(D_8010B670_ovl_01);
    obj = *(struct Obj **)D_80185418_ovl_02;
    end=obj->end; start=obj->start;
    n=0;
    for (;;) {
      value=0;
      if(end!=start) {
        value=end-start;
        if(start>=end) value=obj->size-(start-end);
      }
      if(value<n) entry=0;
      else {
        u32 pos=n+1;
        if(end<pos) idx=obj->size-(pos-end); else idx=end-pos;
        entry=obj->data+idx;
      }
      if(entry==0 || (entry[0] & 0x1000)==0) return n;
      n++;
    }
}
void func_80181358_ovl_02(void) {
    register s32 value;
    value=D_80186C18_ovl_02;
    func_8017DD30_ovl_02(value);
    value=D_80186C18_ovl_02;
    value++;
    func_8017D070_ovl_02();
    D_80186C18_ovl_02=value;
}
void func_80182640_ovl_02(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3) {
    register u8 *src;
    register u8 *dst;
    s32 i=0;
    src=arg0; dst=arg1;
    if(arg3>0) {
      src+=0; dst+=0;
      do {
        dst[0]=src[0]; dst[1]=src[1]; dst[2]=src[2]; dst[3]=src[3];
        dst[4]=src[4]; dst[5]=src[5]; dst[6]=src[6]; dst[7]=src[7];
        dst[8]=src[8]; dst[9]=src[9]; dst[10]=src[10]; dst[11]=src[11];
        dst[12]=src[12]; dst[13]=src[13]; dst[14]=src[14]; dst[15]=src[15];
        src+=arg2; dst+=arg2; i++;
      } while(i<arg3);
    }
}
