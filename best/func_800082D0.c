typedef struct {u8 pad[0x66];} Result;
extern s32 D_800128E0[];
extern u8 D_80016230[],D_80016330[],D_80016350[],D_80016450[];
s32 func_80008B70(s32,s32,s32,void*,s32);
s32 func_800087A0(s32,s32,s32,void*);
s32 func_80008F30(s32,void*);
s32 func_800082D0(s32 arg0,Result *r,s32 arg2) {
 u8 bytes[0x28]; s32 i,v; u8 *obj,*src;
 r->pad[0]=0;r->pad[4]=arg0;r->pad[8]=arg2;r->pad[0x65]=0x80;
 for(i=0;i<32;i++)bytes[0x1f-i]=0xfe;
 v=func_80008B70(arg0,arg2,0x400,bytes,0);
 if(v==2)v=func_80008B70(arg0,arg2,0x400,bytes,0);
 if(v==0){v=func_800087A0(arg0,arg2,0x400,bytes);if(v==2)v=4;
 if(v==0){if(bytes[0x1f]!=0xfe){for(i=0;i<32;i++)bytes[0x1f-i]=0x80;
 v=func_80008B70(arg0,arg2,0x400,bytes,0);if(v==2)v=func_80008B70(arg0,arg2,0x400,bytes,0);
 if(v==0){v=func_800087A0(arg0,arg2,0x400,bytes);if(v==2)v=4;
 if(v==0){if(bytes[0x1f]!=0x80)return 11;v=0;
 if(D_800128E0[arg2]==0){for(i=0;i<32;i++){D_80016330[i]=1;D_80016450[i]=0;}
 obj=D_80016230+arg2*64;for(i=0;i<15;i++)((s32*)obj)[i]=0;*(s32*)(obj+0x3c)=1;obj[0x28]=0xfe;
 obj[1]=0x23;obj[2]=1;obj[0]=0xff;obj[3]=3;obj[0x26]=0xff;
 *(u16*)(obj+4)=0xc000|(func_80008F30(0x600,obj)&255);
 for(i=0;i<32;i++)obj[0x3e + i]=D_80016330[i];
 src=D_80016350+arg2*64;for(i=0;i<15;i++)((s32*)src)[i]=0;*(s32*)(src+0x3c)=1;src[0x28]=0xfe;
 src[1]=0x23;src[2]=1;src[0]=0xff;src[3]=3;src[0x26]=0xff;
 *(u16*)(src+4)=0xc000|(func_80008F30(0x600,src)&255);
 for(i=0;i<32;i++)src[0x3e + i]=D_80016450[i];
 D_800128E0[arg2]=1;}return v;}return v;}return v;}return 11;}return v;}return v;
}
