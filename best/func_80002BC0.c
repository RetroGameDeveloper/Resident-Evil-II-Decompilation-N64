typedef struct {u8 op;u8 bits;u16 pad;u32 val;} Table;
typedef struct {u8*in;u32 avail;u8*orig;u32 total;u8*out;u32 out_end;u8*out_start;u8*out_limit;u32 bits;u32 hold;u8*next_out;} Stream;
extern u32 D_800127D0[];
extern u8 D_800116E0[],D_800116F8[];
s32 func_80002BC0(s32 arg0,s32 arg1,u8 *arg2,u8 *arg3,Stream *arg4,Stream *arg5){
 u8 *in=arg5->in;u32 avail=arg5->avail;u32 hold=arg4->hold;u8*out=arg4->out;u32 bits=arg4->bits;u32 left;
 s32 back;u32 index;u32 len;u8 op;u32 extra;Table *tab;
 if((u32)out<(u32)arg4->out_end)left=(u32)arg4->out_end-(u32)out-1;else left=(u32)arg4->out_limit-(u32)out;
 for(;bits<20;bits+=8){avail--;hold|=*in++<<bits;}
 tab=(Table*)arg2+((hold&D_800127D0[arg0])*8);
 op=tab->op;
 if(!op){left--;op=tab->bits;hold>>=op;bits-=op;*out++=((u8*)tab)[7];goto done;}
 for(;;){
  op=tab->op;extra=tab->bits;hold>>=extra;bits-=extra;
  if(op&0x10){extra=op&15;back=bits-extra;tab=(Table*)((u8*)tab+4)+(hold&D_800127D0[extra]);len=tab->val+(hold&D_800127D0[extra]);hold>>=extra;bits=back;
   for(;bits<15;bits+=8){avail--;hold|=*in++<<bits;}
   tab=(Table*)arg3+((hold&D_800127D0[arg1])*8);
   for(;;){op=tab->op;extra=tab->bits;hold>>=extra;bits-=extra;
    if(op&0x10){extra=op&15;if(bits<extra)for(;bits<extra;bits+=8){avail--;hold|=*in++<<bits;}bits-=extra;left-=len;index=tab->val+(hold&D_800127D0[extra]);hold>>=extra;back=(u32)out-(u32)arg4->out_start;
      if(back>=index)break;
      break;
    }
    if(op&0x40)goto end;
    tab=(Table*)((u8*)tab+4)+(hold&D_800127D0[op]);
   }
  }
  if(op&0x40)goto end;
  if(op&0x20)goto end;
  tab=(Table*)((u8*)tab+4)+(hold&D_800127D0[op]);
 }
done:
 if(left<0x102||avail<10){back=bits>>3;avail+=back;in-=back;bits&=7;arg4->hold=hold;arg4->bits=bits;}
 arg4->out=out;arg5->in=in;arg5->avail=avail;return 0;
end:
 back=bits>>3;avail+=back;in-=back;bits&=7;arg5->in=in;arg5->avail=avail;arg5->out=arg5->out;arg4->hold=hold;arg4->bits=bits;return -3;
}
