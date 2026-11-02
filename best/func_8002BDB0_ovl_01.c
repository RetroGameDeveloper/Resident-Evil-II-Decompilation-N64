typedef struct Image Image; typedef struct Decoder { s32 (*run0)(Image *); s32 (*run1)(Image *,s32); u8 pad[8]; s32 value; s32 a,b; } Decoder; typedef struct Stream { u8 *data; s32 remaining; u8 pad[4]; s32 (*refill)(Image *); } Stream; struct Image{Decoder*decoder;u8 pad4[16];Stream*stream;u8 pad18[0x9C];s8 tableA;u8 padB5[15];s8 tableB;};
s32 func_8002BDB0_ovl_01(Image *arg0){Stream*s;u8 *p,*p2,*p3; s32 count,remain,pending,result;u8 code,value;s32 tmp;
s=arg0->stream;remain=s->remaining;count=remain-1;
if(remain==0){result=0;if(s->refill(arg0)==0)return result;count=s->remaining-1;}
p=s->data+1;pending=s->data[0]<<8;
if(count==0){result=0;if(s->refill(arg0)==0)return result;p=s->data;count=s->remaining;}
count--;tmp=pending+*p-2;p2=p+1;
if(tmp<=0)goto finish;
do {remain=count-1;if(count==0){result=0;if(s->refill(arg0)==0)return result;p2=s->data;remain=s->remaining-1;}
code=*p2;p3=p2+1;
if(remain==0){result=0;if(s->refill(arg0)==0)return result;p3=s->data;remain=s->remaining;}
count=remain-1;value=*p3;p2=p3+1;tmp-=2;
arg0->decoder->value=0x47;arg0->decoder->a=code;arg0->decoder->b=value;arg0->decoder->run1(arg0,1);
result=(s32)code<16;
if(code>=32){arg0->decoder->value=0x15;arg0->decoder->a=code;arg0->decoder->run0(arg0);result=(s32)code<16;}
if(!result)arg0->tableB=value;else{arg0->tableA=value&15;arg0->tableB=value>>4;if((u8)(value>>4)<(value&15)){arg0->decoder->value=0x16;arg0->decoder->a=value;arg0->decoder->run0(arg0);}}
}while(tmp>0);
finish:result=1;s->data=p2;s->remaining=count;return result;}
