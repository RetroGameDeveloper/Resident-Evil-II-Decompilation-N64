extern s32 func_8000DE40(u8 *, u8);
extern void *func_8000F5C0(void *, void **, u8, void *);
extern u8 D_80011D10[], D_80011D18[], D_80011D30[], D_80013810[], D_80013834[];
typedef struct { s32 a; s32 b; s32 c; s32 d; s32 e; s32 f; } Fmt;
s32 func_8000F050(void *fn, void *dst0, void *fmt0, void *ap0) {
    void *(*out)(void *, const void *, s32)=(void *(*)(void *,const void *,s32))fn;
    u8 *fmt=(u8 *)fmt0,*p,*q;
    void *dst=dst0,*ap=ap0;
    s32 total=0,width,prec,flags,n,chunk;
    Fmt f; u8 spec;
    for (;;) {
        q=fmt; while (*q&&*q!='%')q++;
        n=q-fmt; if(n>0){dst=out(dst,fmt,n);if(!dst)return total;total+=n;}
        p=q+1; if(!*q)return total;
        flags=0;
        while(func_8000DE40(D_80011D10,*p)){flags|=*(s32 *)(D_80011D18+((u32)func_8000DE40(D_80011D10,*p)-(u32)D_80011D10)*4);p++;}
        if(*p=='*'){ap=(void *)(((u32)ap+3)&~3);width=*(s32 *)ap;ap=(void *)((u32)ap+4);if(width<0){width=-width;flags|=4;}p++;}
        else{width=0;while(*p>='0'&&*p<='9'){if(width<999)width=width*10+*p-'0';p++;}}
        if(*p++=='.'){if(*p=='*'){ap=(void *)(((u32)ap+3)&~3);prec=*(s32 *)ap;ap=(void *)((u32)ap+4);p++;}else{prec=0;while(*p>='0'&&*p<='9'){if(prec<999)prec=prec*10+*p-'0';p++;}}}else prec=-1;
        spec=*p;if(func_8000DE40(D_80011D30,spec))p++;else spec=0;
        if(spec=='l'&&*p=='l'){spec='L';p++;}
        func_8000F5C0(&f,&ap,*p,&f);
        n=width-(f.b+f.c+f.d+f.e+f.a+f.f);width=n;
        if(!(flags&4)&&n>0)while(n>0){chunk=n<32?n:32;dst=out(dst,D_80013810,chunk);n-=chunk;if(!dst)return total;total+=chunk;}
        if(f.b>0){dst=out(dst,&f,f.b);if(!dst)return total;total+=f.b;}
        if(f.c>0)while(f.c>0){chunk=f.c<32?f.c:32;dst=out(dst,D_80013834,chunk);f.c-=chunk;if(!dst)return total;total+=chunk;}
        if(f.d>0){dst=out(dst,(u8 *)&f+8,f.d);if(!dst)return total;total+=f.d;}
        if(f.e>0)while(f.e>0){chunk=f.e<32?f.e:32;dst=out(dst,D_80013834,chunk);f.e-=chunk;if(!dst)return total;total+=chunk;}
        if(f.a>0){dst=out(dst,(u8 *)&f+8+f.d,f.a);if(!dst)return total;total+=f.a;}
        if(f.f>0)while(f.f>0){chunk=f.f<32?f.f:32;dst=out(dst,D_80013834,chunk);f.f-=chunk;if(!dst)return total;total+=chunk;}
        if((flags&4)&&width>0)while(width>0){chunk=width<32?width:32;dst=out(dst,D_80013810,chunk);width-=chunk;if(!dst)return total;total+=chunk;}
        fmt=p+1;
    }
}
