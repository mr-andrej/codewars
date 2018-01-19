// Written by mr-andrej
// "Growth of a Population" by g964
// https://www.codewars.com/kata/563b662a59afc2b5120000c6
// Kyu: 7
int nbYear(int p0, double percent, int aug, int p) {
    int n;
    int population = p0;

    for (n = 0; !(population >= p); n++)
      population += (population * percent / 100) + aug;  
    return (n);
}
