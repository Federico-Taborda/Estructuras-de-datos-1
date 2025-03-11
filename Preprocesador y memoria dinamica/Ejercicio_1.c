#include <stdio.h>

int main() {
  int a = 10;
  char b = 'A';
  int c[5] = { 1, 2, 3 };

  printf("a: %p, %d\n", &a, a);
  printf("b: %p, %c\n", &b, b);
  printf("c: %p, %d\n", &c, c[0]);
  printf("c: %p, %d\n", &c[1], c[1]);
  printf("c: %p, %d\n", &c[2], c[2]);
  return 0;
}