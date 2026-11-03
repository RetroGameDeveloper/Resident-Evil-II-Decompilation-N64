u32 func_80180B90_ovl_02(void) {
    u32 end,start,n,value,idx; struct Obj { u32 size; u32 *data; u32 start; u32 end; } *obj; u16 *entry;
    func_8004D060_ovl_01(D_8010B670_ovl_01); obj=*(struct Obj **)D_80185418_ovl_02;
    end=obj->end; start=obj->start; n=0;
    while (1) {
      if(end==start) value=0;
      else if(start<end) value=end-start;
      else value=obj->size-(start-end);
      if(value<n) entry=0;
      else { idx=n+1; if(end<idx)idx=obj->size-(idx-end);else idx=end-idx; entry=(u16 *)((u8 *)obj->data+idx*4); }
      if(entry==0) value=0; else value=entry[1]&0x1000;
      if(value==0) return n;
      n++;
    }
}
