// Written by mr-andrej
// "My head is at the wrong end!" by A.Partridge
// https://www.codewars.com/kata/56f699cd9400f5b7d8000b55
// Kyu: 8
#include <stddef.h> // NULL

const char **fix_the_meerkat(const char **arr)
{
  char *temp = malloc(strlen(arr));
  temp = arr[0];
  arr[0] = arr[2];
  arr[2] = temp;
  return (arr);
}
