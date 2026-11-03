typedef struct S_card
{
  s32 state;
  union 
  {
    s32 w;
    struct 
    {
      u16 h;
      u16 index;
    } hw;
  } u4;
  s32 unk08;
  s32 unk0C;
  s32 unk10;
  s32 unk14;
  s32 unk18;
  s32 unk1C;
  u32 *unk20;
  s32 unk24;
  s32 unk28;
  u8 pad2C[0x14];
  s32 unk40;
  s32 unk44;
  s32 unk48;
} S_card;
typedef struct S_slot
{
  s32 state;
  s32 unk04;
  s32 unk08;
  s32 unk0C;
  s32 unk10;
  s32 unk14[4];
} S_slot;
void func_80007B6C(void);
void func_80007A9C(void);
void func_80007C20(void *, s32, u32, s32, s32);
extern u8 *D_80016224;
extern s32 D_800128D0;
s32 func_80007590(void)
{
  S_card *s0;
  S_slot *s1;
  volatile u32 status;
  s32 s2;
  s32 v0;
  s32 v1;
  s32 a0v;
  u32 *p;
  s0 = (S_card *) (D_80016224 + 0x14);
  status = *((volatile u32 *) 0xA4600010);
  s1 = (S_slot *) ((((u8 *) s0) + 0x18) + (s0->u4.hw.index * 0x24));
  if (status & 1)
  {
    s1->state = 0x1D;
    D_800128D0 &= ~0x800;
    func_80007B6C();
    return 1;
  }
  status = *((volatile u32 *) 0xA4600010);
  if (status & 3)
  {
    do
    {
      status = *((volatile u32 *) 0xA4600010);
    }
    while (status & 3);
  }
  s2 = *((volatile u32 *) 0xA5000508);
  if (s2 & 0x02000000)
  {
    status = *((volatile u32 *) 0xA4600010);
    if (status & 3)
    {
      do
      {
        status = *((volatile u32 *) 0xA4600010);
      }
      while (status & 3);
    }
    *((volatile u32 *) 0xA5000510) = s0->unk10 | 0x01000000;
    s1->state = 0;
    return 0;
  }
  v1 = s0->state;
  if (v1 != 2)
  {
    if (s2 & 0x08000000)
    {
      status = *((volatile u32 *) 0xA4600010);
      if (status & 3)
      {
        do
        {
          status = *((volatile u32 *) 0xA4600010);
        }
        while (status & 3);
      }
      s2 = *((volatile u32 *) 0xA5000508);
      s1->state = 0x16;
      func_80007B6C();
      *((volatile u32 *) 0xA4600010) = 2;
      D_800128D0 |= 0x100401;
      return 1;
    }
    if (v1 == 1)
    {
      if (!(s2 & 0x40000000))
      {
        if ((s0->unk08 + 1) == (s0->u4.hw.h * 0x55))
        {
          *((volatile u32 *) 0xA4600010) = 2;
          s1->state = 0;
          D_800128D0 |= 0x100401;
          func_80007B6C();
          return 1;
        }
        v0 = 0x18;
        goto block56;
      }
      s1->unk04 += s1->unk0C;
      s0->unk08 += 1;
      func_80007C20(D_80016224, 1, 0x05000400, s1->unk04, s1->unk0C);
      return 1;
    }
    v0 = 4;
    if (v1 == 0)
    {
      if (s0->u4.hw.h == 3)
      {
        if ((s1->unk10 + 0x11) < s0->unk08)
        {
          s1->state = 0;
          goto block57;
        }
        if (!(s2 & 0x40000000))
        {
          v0 = 0x17;
          goto block56;
        }
        goto block30;
      }
      s1->unk04 += s1->unk0C;
      block30:
      a0v = *((volatile u32 *) 0xA5000510);

      if (((a0v & 0x600000) == 0x600000) || (a0v & 0x02000000))
      {
        a0v = s1->unk10;
        if (((u32) a0v) >= 4)
        {
          v0 = 0x17;
          if (s0->u4.hw.h != 3)
          {
            goto block56;
          }
          if (s0->unk08 < 0x53)
          {
            s1->unk10 += 1;
            goto block38;
          }
          s1->state = 0x17;
          goto block57;
        }
        s1->unk14[a0v] = s0->unk08 + 1;
        s1->unk10 += 1;
        goto block38;
      }
      block38:
      if (s2 & 0x10000000)
      {
        if ((s0->unk08 + 1) != 0x58)
        {
          s1->state = 0x18;
          func_80007A9C();
        }
        if (s0->u4.w == 0x20000)
        {
          s0->u4.hw.index = 1;
          s0->unk08 = -1;
          s0->unk40 -= s0->unk48;
          s1->state = 0x16;
        }
        else
        {
          *((volatile u32 *) 0xA4600010) = 2;
          s0->state = 2;
          s1->state = 0;
          D_800128D0 |= 0x100401;
        }
        func_80007C20(D_80016224, 0, 0x05000000, s1->unk08, s1->unk0C * 4);
        return 1;
      }

      if ((s0->unk08 == (-1)) && (s0->u4.w == 0x20001))
      {
        if (s0->unk28 == 0)
        {
          p = s0->unk20;
          if ((((p[0] | p[1]) | p[2]) | p[3]) != 0)
          {
            s0->unk18 = 0x18;
            goto block57;
          }
        }
        s0->unk18 = 0;
        func_80007B6C();
        goto block51;
      }
      block51:
      v1 = s0->unk08 + 1;

      s0->unk08 = v1;
      if (s2 & 0x40000000)
      {
        if (v1 >= 0x55)
        {
          v0 = 0x18;
        }
        func_80007C20(D_80016224, 0, 0x05000400, s1->unk04, s1->unk0C);
        s1->state = 0;
        return 1;
        goto block56;
      }
      if (v1 < 0x55)
      {
        ;
        goto block56;
      }
      return 1;
    }
    goto block56;
  }
  return 1;
  block56:
  s1->state = 0x18;

  block57:
  func_80007A9C();

  return 1;
}

