// Written by mr-andrej
// "Find The Parity Outlier" by obnounce
// https://www.codewars.com/kata/5526fc09a1bbd946250002dc
// Kyu: 6
#include <stdlib.h>

int find_pattern(const int *values, size_t count)
{
  int odd = 0, even = 0;
  for (int x = 0; x < count; x++)
    (values[x] % 2 == 0) ? (even)++ : (odd)++;
  return ((odd > even) ? 1 : 0);
}

int find_outlier(const int *values, size_t count)
{
  for (int x = 0; x < count; x++)
    if (find_pattern(values, count) != abs(values[x]) % 2)
      return (values[x]);
}
