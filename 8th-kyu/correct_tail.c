// Written by mr-andrej
// "Is this my tail?" by A.Partridge
// https://www.codewars.com/kata/56f695399400f5d9ef000af5
// Kyu: 8
int correct_tail(const char *body, const char *tail) {
  if (strlen(tail) <= strlen(body))
    return ((body[strlen(body) - 1] == tail[0]) ? 1 : 0 );
}
