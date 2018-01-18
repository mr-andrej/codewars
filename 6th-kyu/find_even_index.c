// Written by mr-andrej
// "Equal Sides Of An Array" by Shivo
// https://www.codewars.com/kata/5679aa472b8f57fb8c000047
// Kyu: 6
int find_even_index(const int *values, int length) {
  for (int x = 0; x < length; x++) {
    int left_sum = 0;
    int right_sum = 0;
    
    for (int y = 0; y < x; left_sum += values[y++]);     
    for (int z = x + 1; z < length; right_sum += values[z++]);        
    if (right_sum == left_sum)
      return (x);
    }
  return (-1);
}
