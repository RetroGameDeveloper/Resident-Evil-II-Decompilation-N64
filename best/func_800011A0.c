u32 func_800011A0(u32 seed, u8 *data, u32 length)
{
  u32 low;
  u32 high;
  s32 n;
  u32 b0;
  u32 b1;
  u32 b2;
  u32 b3;
  u32 b4;
  u32 b5;
  u32 b6;
  u32 b7;
  u32 b8;
  u32 b9;
  u32 b10;
  u32 b11;
  u32 b12;
  u32 b13;
  u32 b14;
  u32 b15;
  low = seed & 0xFFFF;
  high = seed >> 16;
  if (data == 0)
  {
    return 1;
  }
  if (length == 0)
  {
    return (high << 16) | low;
  }
  while (length != 0)
  {
    n = length;
    if (length >= 0x15B1)
    {
      n = 0x15B0;
    }
 do { length -= n; if (n >= 16) { do { b0 = *(data++); b1 = *(data++); b2 = *(data++); b3 = *(data++); b4 = *(data++); b5 = *(data++); b6 = *(data++); b7 = *(data++); b8 = *(data++); b9 = *(data++); b10 = *(data++); b11 = *(data++); b12 = *(data++); b13 = *(data++); b14 = *(data++); b15 = *(data++); n -= 16; low += b0; high += low; low += b1; high += low; low += b2; high += low; low += b3; high += low; low += b4; high += low; low += b5; high += low; low += b6; high += low; low += b7; high += low; low += b8; high += low; low += b9; high += low; low += b10; high += low; low += b11; high += low; low += b12; high += low; low += b13; high += low; low += b14; high += low; low += b15; high += low; } while (n >= 16); } if (n != 0) { do { low += *(data++); high += low; } while (--n); } low %= 65521; } while (0);
    high %= 65521;
  }

  return (high << 16) | low;
}
