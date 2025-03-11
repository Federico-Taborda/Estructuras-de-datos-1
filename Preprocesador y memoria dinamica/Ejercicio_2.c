#include <stdio.h>

void set_first(int a[]) {
  a[0] = 0;
}

int main() {
  int c[5] = { 1, 2, 3 };
  set_first(c);
  printf("%d\n", c[0]);
  return 0;
}