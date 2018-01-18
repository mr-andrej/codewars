// Written by mr-andrej
// "Invert values" by Slx64
// https://www.codewars.com/kata/5899dc03bc95b1bf1b0000ad
// Kyu: 8
#include <stddef.h>

void invert(int *values, size_t values_size)
{
  for (int x = 0; x < values_size; values[x++] *= -1);
}
