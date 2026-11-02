typedef struct { u8 pad[0x60]; s32 value; } Node;
typedef struct { u8 pad[0x1A5C]; s32 flag; u8 pad2[0x59C]; s16 index; s16 sub; } State;
extern State D_800C7650_ovl_01;
extern s32 D_80129D68_ovl_01;
extern s32 D_80129D6C_ovl_01;
s32 func_80005F4C(u16, s32, void *);
void func_800359DC_ovl_01(void) {
 s32 *table;
 u8 *base;
 s16 i, j;
 u16 id;
 Node *node;
 s32 old;
 base = (u8 *)&D_800C7650_ovl_01;
 if (*(s32 *)(base + 0x18000 + 0x1A5C) < 0) table = (s32 *)D_80129D6C_ovl_01; else table = (s32 *)D_80129D68_ovl_01;
 i = *(s16 *)(base + 0x20000 + 0x15F8);
 j = *(s16 *)(base + 0x20000 + 0x15FA);
 id = *(u16 *)(table[i] + j * 2);
 if (id != 0xFFFF) {
  node = *(Node **)(base + 0x18000 + 0x27C);
  old = *(s32 *)(base + 0x18000 + 0x284);
  node->value = old;
  *(s32 *)(base + 0x18000 + 0x284) = func_80005F4C(id, old, base);
 }
}
