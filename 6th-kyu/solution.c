// Written by mr-andrej
// "Multiples of 3 or 5" by jhoffner
// https://www.codewars.com/kata/514b92a657cdc65150000006
// Kyu: 6
int solution(int number) {
    int sum = 0;
    for (int i = 0; i < number; sum += (i % 3 == 0 || i % 5 == 0) ? i : 0, i++);
    return (sum);
}
