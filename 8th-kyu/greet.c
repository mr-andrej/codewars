// Written by mr-andrej
// "Grasshopper - Personalized Message" by danleavitt0
// https://www.codewars.com/kata/5772da22b89313a4d50012f7
// Kyu: 8
const char* greet(const char *name, const char *owner) {
  return ((name == owner) ? "Hello boss" : "Hello guest");
}
