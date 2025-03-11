#include <stdio.h>

void set_in(int *a) {
  *a = *a != 0 ? 1 : 0;
}

int main() {
  int a = 1;
  set_in(&a);
  printf("%d\n", a);
  a = 0;
  set_in(&a);
  printf("%d\n", a);
  return 0;
}