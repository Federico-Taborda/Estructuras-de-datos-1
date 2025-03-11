#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *get_new_line() {
  char cadena[100];
  char *p;

  printf("Introduce una cadena: ");
  scanf("%s", cadena);
  
  p = malloc(sizeof(char) * (strlen(cadena) + 1));
  strcpy(p, cadena);
  return p;
}

int main() {
  char *p;

  p = get_new_line();
  printf("Cadena introducida: %s\n", p);
  printf("Direccion de memoria de la cadena: %p\n", p);
  free(p);

  return 0;
}