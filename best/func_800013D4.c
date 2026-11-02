extern s32 D_800138A4;
extern s32 D_800138B0;
extern s32 D_80013EB0;
extern u32 D_80013EB4;
s32 func_800013D4(u32 arg0) {
 u32 size;
 u32 i;
 s32 *entry;
 s32 base;
 size=arg0;
 if(size&3) size=(size+7)&~7;
 if(D_80013EB4) {
  u32 count;
  count=D_80013EB4;
  entry=(s32 *)&D_800138B0;
  i=0;
  for(;;) {
   if(entry[2]==0 && (u32)entry[1]>=size) {
    if(i==count-1) {
     entry[2]=1;
     entry[1]=size;
    } else entry[2]=1;
    return entry[0];
   }
   i++;
   entry+=3;
   if(i<count) continue;
   break;
  }
 }
 base=D_800138A4;
 entry=(s32 *)&D_800138B0;
 entry+=D_80013EB4*3;
 entry[0]=base;
 entry[1]=size;
 entry[2]=1;
 D_80013EB4++;
 D_800138A4=base+size;
 D_80013EB0=base+size;
 return base;
}
