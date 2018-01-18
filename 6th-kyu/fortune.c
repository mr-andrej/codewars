// Written by mr-andrej
// "Banker's Plan" by g964
// https://www.codewars.com/kata/56445c4755d0e45b8c00010a
// Kyu: 6
#define true  1
#define false 0
int fortune(int f0, double p, int c0, int n, double i)
{
  int cur_year = 1;
  int money_left = f0;

  for (;cur_year < n; cur_year++) {
    money_left *= 1.0 + (p / 100);
    money_left -= c0;
    money_left *= 1.0 - (i / 100);
  }
  return (cur_year == n && money_left > 0 ? true : false);
}
