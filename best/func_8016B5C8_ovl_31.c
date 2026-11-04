void func_8016B5C8_ovl_31(S_func_8016B5C8_ovl_31_arg0 *a,S_func_8016B5C8_ovl_31_arg1 *b){
s32 state;u16 t;u16 *base;u16 *p;state=a->unk_2C5;
if(state==1)goto one;
if(state>=2){if(state==2)goto two;goto done;}
if(state!=0)goto done;
a->unk_2C3=0;{ int repair_store_value = 1; a->unk_2C5=repair_store_value; }a->unk_2C6=0;a->unk_2CA=0x78;a->unk_2C8=((u32)func_80033634_ovl_01()&255)>>1|0x80;a->unk_2CB=0;
one:
base=(u16 *)b->unk_120;
base[8]=(s16)(base[8]<<15)>>15;
p=base+2*a->unk_2D0;*p-=a->unk_2C6;
p=base+2*a->unk_2D1;*p+=a->unk_2C6;
if(a->unk_2CB){a->unk_2C6-=8;if((s16)a->unk_2C6<0){a->unk_2C5=2;a->unk_2C6=0;a->unk_2C8=* (base+2*a->unk_2D1)-(((u32)func_80033634_ovl_01()&255)>>1)-0x138;a->unk_2CB=0;goto done;}}
else {a->unk_2C6+=4;if((s16)a->unk_2C6>=0x101)a->unk_2C6=0x100;}
p=base+2*a->unk_2D1;if(a->unk_2C8<(s16)*p&&!a->unk_2CB)a->unk_2CB=1;goto done;
two:
base=(u16 *)b->unk_120;p=base+2*a->unk_2D0;*p+=a->unk_2C6;p=base+2*a->unk_2D1;*p-=a->unk_2C6;
if(a->unk_2CB){a->unk_2C6-=4;if((s16)a->unk_2C6<0){{ int repair_store_value_ = 1; a->unk_2C5=repair_store_value_; }a->unk_2C6=0;a->unk_2C8=* (base+2*a->unk_2D1)+(((u32)func_80033634_ovl_01()&255)>>1)+0x178;a->unk_2CB=0;goto done;}}
else {a->unk_2C6+=2;if((s16)a->unk_2C6>=0x101)a->unk_2C6=0x100;}
p=base+2*a->unk_2D1;if((s16)*p<a->unk_2C8&&!a->unk_2CB)a->unk_2CB=1;
done:a->unk_2C3=(a->unk_2C3+1)&0x3f;
}
