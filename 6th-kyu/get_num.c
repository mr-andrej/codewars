
// Written by mr-andrej
// "Find The Parity Outlier" by Iliort
// https://www.codewars.com/kata/55217af7ecb43366f8000f76
// Kyu: 6
int get_num(long a) {
  int count = 0;
  while (a > 0) {
    if (a % 10 == 0 || a % 10 == 6 || a % 10 == 9)
      count++;
    else if (a % 10 == 8)
      count += 2;
    a /= 10;
  }
  return (count);
}
