typedef struct { u8 pad[6]; u8 index; } Arg;
typedef void (*Fn)(void);
extern Fn D_80166ED8_ovl_12[];
s32 func_80033634_ovl_01(void);
void func_80166900_ovl_12(void *,s32,s32);
void func_80165F1C_ovl_12(Arg *p) {
 D_80166ED8_ovl_12[p->index]();
 func_80166900_ovl_12(p,3,0);
 func_80166900_ovl_12(p,2,0);
 func_80166900_ovl_12(p,2,(func_80033634_ovl_01()&1)+1);
}
