// Written by mr-andrej
// "Mumbling" by g964
// https://www.codewars.com/kata/5667e8f4e3f572a8f2000039
// Kyu: 7
char *accum(const char *source) {
  char *result = malloc(10000);
  int index = 0;

  for (int x = 0; x < strlen(source); x++) {
    for (int y = 0; y <= x; y++) {
      if (source[x] >= 97 && source[x] <= 122 && y == 0) {
        result[index] = source[x] - 32;
        index++;
      } else if (!(source[x] >= 97 && source[x] <= 122) && y != 0) {
        result[index] = source[x] + 32;
        index++;
      } else {
        result[index] = source[x];
        index++;
      } // This could be refactored as a ternary nested statement, but it might make it a mess
    }
    result[index++] = (x != strlen(source) - 1) ? '-' : 0;
  }
  result[index] = 0;
  return (result);
}
