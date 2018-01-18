// Written by mr-andrej
// "Send in the Clones" by dinglemouse
// https://www.codewars.com/kata/58ddffda929dfc2cae0000a5
// Kyu: 7
#include <inttypes.h>

struct clonewars_t
{
    uintmax_t clones;
    uintmax_t solved;
};

struct clonewars_t clonewars(int n)
{
    struct clonewars_t result;
    result.clones = 1;
    result.solved = 0;

    for (int i = n; i > 0; i--) {
      result.solved += result.clones * i;
      result.clones += (i > 1) ? result.clones : 0;
    }
    return (result);
}
