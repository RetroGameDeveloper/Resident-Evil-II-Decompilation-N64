extern u8 D_800C7650_ovl_01[]; extern u8 D_8016DD24_ovl_11[];
void func_8016B7A0_ovl_11(void *p,s32 x,s32 y){
 u8 *b=p; s32 state=b[6]; u8 *base=D_800C7650_ovl_01+0x18000; s32 ix=*(s16 *)(b+0x276); u8 *n;
 typedef struct {u8 bytes[8];} Blob8; Blob8 tbl=*(Blob8 *)D_8016DD24_ovl_11;
 n=*(u8 **)(base+(ix<<2)+0x1D38);
 if(state<5) switch(state){
 case 0: b[6]=1; {s32 r=func_80033634_ovl_01(); *(s32 *)(b+0x1E8)=0x15000F00+((r&7)<<16);}
 b[0x26F]|=0x80; func_80032DEC_ovl_01(b,*(s32 *)(n+0x28),*(s32 *)(n+0x30),0x10);
 {s32 r=func_80089D34_ovl_01(b,x,y,0x10100);b[6]+=r;} break;
 case 1: b[6]=3; {s32 r=func_80033634_ovl_01(); *(s32 *)(b+0x1E8)=(((u8 *)&tbl)[r&7]<<24)+0x700;}
 {s32 r=func_80089D34_ovl_01(b,x,y,0x200);b[6]+=r;} if(!b[0x1EA])func_800336B0_ovl_01(b,0,1);
 if(*(s32 *)(*(u8 **)(b+0x214))&0x10000){u8 *q=*(u8 **)(b+0x234);*(u16 *)(q+0x18)=0xC8;*(u16 *)(q+0x1A)=0;*(u16 *)(q+0x1C)=0;{s32 r=func_80033634_ovl_01();func_800377B0_ovl_01(0x17B8,(r&255)<<4,q+0xBF8,q+0x18);}}break;
 case 2: case 3: {s32 r=func_80033634_ovl_01();b[6]=1;*(s32 *)(b+0x1E8)=0x3000000+(((u8 *)&tbl)[r&7]<<24);break;}
 }
}
