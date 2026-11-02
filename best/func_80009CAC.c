typedef struct {s32 unk_00,unk_04,unk_08;s8 unk_0C;u8 pad[0x58];u8 unk_64,unk_65;} S_D_80129E34;
s32 func_80007000(void);s32 func_800087A0(s32,s32,s32,u8*);s32 func_80008B70(s32,s32,u16,u8*,s32);s32 func_8000A66C(u8*);
s32 func_80009CAC(S_D_80129E34 *a,S_func_80009CAC_arg1 *b,S_func_80009CAC_arg2 *c){
u8 x[32],y[32];s16 q[4];s32 n,i,r;u8 *p;
if(a->unk_65){a->unk_65=0;r=func_8000A66C((u8*)a);if(r)return r;}
c->unk_00=-1;r=func_80007000();c->unk_04=r;{s32 z=b->unk_08;c->unk_08=z;z=b->unk_0C;c->unk_0C=z;z=b->unk_10;c->unk_10=z;z=b->unk_14;c->unk_14=z;}n=0;
do{
a->unk_65=n;r=func_8000A66C((u8*)a);if(r)return r;
r=func_800087A0(a->unk_04,a->unk_08,0,x);if(r)return r;
x[0]=n|0x80;for(i=1;i<32;i++){x[i]=~x[i];}
r=func_80008B70(a->unk_04,a->unk_08,0,x,0);if(r)return r;
r=func_800087A0(a->unk_04,a->unk_08,0,y);if(r)return r;
for(i=0;i<32;i++)if(y[i]!=x[i])break;
if(i==32){if(n>0){a->unk_65=0;r=func_8000A66C((u8*)a);if(r)return r;r=func_800087A0(a->unk_04,a->unk_08,0,x);if(r)return r;if(x[0]!=0x80)goto done;}n++;if(n<62)continue;}
break;
}while(1);
done:
a->unk_65=0;r=func_8000A66C((u8*)a);if(r)return r;
c->unk_1A=n;c->unk_18=(n>0)|(b->unk_18&0xfffe);c->unk_1E=0;c->unk_1C=0;c->unk_1B=b->unk_1B;p=(u8*)c;
do{u16 v=*(u16*)p;c->unk_1C+=v;c->unk_1E+=~v;p+=2;}while(p<(u8*)c+0x1c);
q[0]=1;q[1]=3;q[2]=4;q[3]=6;
for(i=0;i<4;i++){r=func_80008B70(a->unk_04,a->unk_08,q[i],(u8*)c,1);if(r)return r;}
r=func_800087A0(a->unk_04,a->unk_08,1,x);if(r)return r;
for(i=0;i<32;i++)if(x[i]!=((u8*)c)[i])return 10;
return 0;
}
