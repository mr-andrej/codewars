// Written by mr-andrej
// "MakeUpperCase" by wichu
// https://www.codewars.com/kata/57a0556c7cb1f31ab3000ad7
// Kyu: 8
char *makeUpperCase (char *string) {
  for (int x = 0; x < strlen(string); x++)
    string[x] = (string[x] >= 97 && string[x] <= 122) ? string[x] - 32 : string[x];
  return (string);
}
