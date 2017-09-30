#include<iostream>

using namespace std;

static bool acm[8];
static bool c_flag;

// Instructions
void display_acm  ();
void and_acm      (bool[]);
void add_bin      (bool[]);
// void load_acm     (bool[]);
// void store_acm    (bool[]);
// void bun          (bool[]);
// void bsa          (bool[]);
// void isz          (bool[]);
void clear_acm    ();
void clear_e      ();
void cmp_acm      ();
void cmp_e        ();
void cycle_right  ();
void cycle_left   ();
// void inc_acm      ();
// void spa          ();
// void sna          ();
// void sza          ();
// void sze          ();
// void hlt          ();
// void inp          ();
// void out          ();
// void ski          ();
// void sko          ();
// void ion          ();
// void iof          ();

// Functions

void display_acm ()
{
  static int i;
  cout << "Instruction " << i << endl;
  cout << "   AC   " << endl;
  for (int k = 0; k < 8; k++)
  {
    cout << acm[k];
  }
  cout << endl;
  cout << endl << "E [" << c_flag << "]" << endl;
  cout << endl;
  i++;
}

void add_bin (bool b[])
{
  int c = 0, s;
  for (int k = 7; k >= 0; k--)
  {
    s = (acm[k] ^ b[k]) ^ c;
    c = (acm[k] & b[k]) || (acm[k] & c) ||  (b[k] & c);
    acm[k] = s;
  }
  c_flag = c;
}

void cmp_acm ()
{
  for (int k = 0; k < 8; k++)
  {
    acm[k] = acm[k] ^ 1;
  }
}

void and_acm (bool n[])
{
  for (int k = 0; k < 8; k++)
  {
    acm[k] = acm[k] & n[k];
  }
}

void cmp_e ()
{
  c_flag = c_flag ^ 1;
}

void cycle_left ()
{
  bool t = c_flag;
  c_flag = acm[0];
  for (int k = 0; k < 7; k++)
  {
    acm[k] = acm[k+1];
  }
  acm[7] = t;
}

void cycle_right ()
{
  bool t = c_flag;
  c_flag = acm[7];
  for (int k = 7; k > 0; k--)
  {
    acm[k] = acm[k-1];
  }
  acm[0] = t;
}

void clear_acm ()
{
  for (int k = 0; k < 8; k++)
  {
    acm[k] = 0;
  }
}

void clear_e ()
{
  c_flag = 0;
}

int main()
{

  bool p[] = {0,1,0,1,1,1,0,0};
  bool q[] = {1,1,1,0,0,1,0,0};
// 0
  display_acm();
// 1
  add_bin(p);
  display_acm();
// 2
  add_bin(p);
  display_acm();
// 3
  add_bin(p);
  display_acm();
// 4
  add_bin(p);
  display_acm();
// 5
  cycle_left();
  display_acm();
// 6
  cycle_left();
  display_acm();
// 7
  cycle_left();
  display_acm();
// 8
  cycle_right();
  display_acm();
// 9
  cmp_e();
  display_acm();
// 10
  and_acm(p);
  display_acm();
// 11
  cycle_right();
  display_acm();
// 12
  cmp_acm();
  display_acm();
// 13
  cmp_acm();
  display_acm();
// 14
  add_bin(q);
  display_acm();
// 15
  clear_acm();
  display_acm();
// 16
  clear_e();
  display_acm();
  return 0;
}
