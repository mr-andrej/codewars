// Written by mr-andrej
// "Sum of positive" by JbPasquier
// https://www.codewars.com/kata/5715eaedb436cf5606000381
// Kyu: 8
#include <stddef.h>

int positive_sum(const int *values, size_t count)
{
  int sum = 0;

  for (int x = 0; x < count; x++)
      sum += (values[x] > 0) ? values[x] : 0;
  return (sum);
}
