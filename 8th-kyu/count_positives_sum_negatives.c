// Written by mr-andrej
// "Count of positives / sum of negatives" by Dentzil
// https://www.codewars.com/kata/576bb71bbbcf0951d5000044
// Kyu: 8
#include <stddef.h>

void count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum)
  {
    while (count--)
      values[count] <= 0 ? (*negativesSum) += values[count] : (*positivesCount)++;
}
