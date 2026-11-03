extern u8 D_801686FC_ovl_14[];
extern u8 D_800C7650_ovl_01[];
extern u8 D_80168738_ovl_14[];
void func_80164D38_ovl_14(u8 *p) {
    u8 state=p[6]; u32 best=0x7fffffff; s32 dist; u8 *tbl=D_800C7650_ovl_01; void *entry=0;
    u32 save0,save1; __builtin_memcpy(&save0,D_801686FC_ovl_14,4); __builtin_memcpy(&save1,D_801686FC_ovl_14+4,4);
    if(state>=7)return;
    switch(state) {
    case 0:
        p[0x1e8]=1; p[6]++;
        if (!(*(u16*)(p+0x2c8)&2)) { p[6]+=func_80036BB4(p,6,15,0); return; }
        p[6]++; p[0x2ce]=4; *(u16*)(p+0x2c8)|=2;
        func_8006B294(15,0x200,-1);
        tbl+=0x199b8; break;
    default:return;
    }
    do {
        void *q=*(void**)tbl;
        u32 type=func_8006A45C(p+0x28,q)&0xffff;
        if(type==0)dist=0;
        else if(type==1)dist=*(s16*)((u8*)q+2)-*(s32*)(p+0x30);
        else if(type==2)dist=*(s16*)q-*(s32*)(p+0x28);
        else dist=*(s16*)((u8*)q+2)+*(u16*)((u8*)q+6)-*(s32*)(p+0x30);
        if(dist<0)dist=-dist;
        if((u32)dist<best){best=dist;entry=q;}
        tbl+=4;
    } while(*(u32*)tbl);
    p[6]++; p[0x1e9]=1; *(u16*)(p+0x1f4)=0;
    *(u16*)(p+0x2d0)=*(u16*)entry+(*(u16*)((u8*)entry+4)>>1);
    *(u16*)(p+0x2d4)=*(u16*)((u8*)entry+2)+(*(u16*)((u8*)entry+6)>>1);
}
