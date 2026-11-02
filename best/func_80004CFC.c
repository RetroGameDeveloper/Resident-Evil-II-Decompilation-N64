typedef struct Entry { s32 off; u32 len; } Entry; extern Entry *D_80012874; extern u8 *D_800128A8; extern void *D_8010B698; extern void *D_80011910[16];
void func_800044F0(void*); void func_80004594(void*,s32); void func_800045DC(void*,void*,void*,u32); void func_800888CC_ovl_01(void*,void*,u32); s32 func_80004FB4(void*,void*); s32 func_80005074(void*,void*); s32 func_80005134(void*,void*);
s32 func_80004CFC(s32 index,void*out){u8 buf[0x70];s32 len; s32 off; s32 type; s32 result=0; Entry *e; u8 *base;
func_800044F0(buf); if(index==0xffff) goto fail; if(index==-1) goto fail;
e=&D_80012874[index]; len=e->len; if(!len)goto fail; off=e->off;base=D_800128A8;
if(off<0) { volatile s32 z=0; (void)(1/z); }
if(len&1){base+=*base;len++;}
func_800888CC_ovl_01(base+off+len,buf+0x58,8);
type=*(u16*)(buf+0x68)-1;
if((u32)type<16){switch(type){case 0:func_800888CC_ovl_01(base+off,out,len);e=&D_80012874[index];result=e->len;break;case 1:func_800888CC_ovl_01(base+off,D_8010B698,len);result=func_80004FB4(out,D_8010B698);break;case 2:func_800888CC_ovl_01(base+off,D_8010B698,len);result=func_80005074(out,D_8010B698);break;case 3:func_800888CC_ovl_01(base+off,D_8010B698,len);result=func_80005134(out,D_8010B698);break;default:e=&D_80012874[index];func_800045DC(buf,D_8010B698,out,e->len);result=1;break;}}
func_80004594(buf,2);return result;fail:func_80004594(buf,2);return 0;}
