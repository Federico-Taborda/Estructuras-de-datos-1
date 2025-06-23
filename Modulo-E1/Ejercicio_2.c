#include <stdio.h>
#include <assert.h>
#include <string.h>

int string_len(char* str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }

    return len;
}

void string_reverse(char *str) {
    int tamaño = string_len(str) - 1;
    int indice = 0;
    
    while (indice < tamaño) {
        char cpy = str[indice];
        *(str + indice) = *(str + tamaño);
        *(str + tamaño) = cpy;
        indice++;
        tamaño--;
    }
}

int string_concat(char *str1, char *str2, int max) {
    int len1 = string_len(str1);
    int len2 = string_len(str2);
    int indice = 0;

    int cant_caracteres = len2 < max ? len2 : max;

    while(indice < cant_caracteres) {
        *(str1 + len1) = *(str2 + indice);
        len1++;
        indice++;
    }

    str1[len1] = '\0';

    //printf("String: %s\n", str1);

    return cant_caracteres;
}

int string_compare(char *str1, char *str2) {
    while (*str1 && (*str1 == *str2)){
        str1++;
        str2++;
    }
    
    if(*str1 < *str2) {
        return -1;
    }else if (*str1 > *str2) {
        return 1;
    }
    
    return 0;
}

int string_subcadena(char *str1, char *str2) {
    int j = 0;
    int primera_ocurrencia = -1;

    for (int i = 0; i < string_len(str1); i++) {
        if(str1[i] != str2[j] && j < string_len(str2)) 
            j = 0;
        if(str1[i] == str2[j]) 
            j++;
    }

    if (j == strlen(str2)) 
        return 1;

    return 1;
}

int main() {
    char cadena[7] = "cadena";
    int longitud = 0;
    longitud = string_len(cadena);

    assert(longitud == 6);

    string_reverse(cadena);
    //assert(strcmp(cadena, "adenac") == 0);

    char str1[7] = "cadena";
    char str2[7] = "cadena";

    int cant = string_concat(str1, str2, 4);

    assert(cant == 4);

    char uno[5] = "abcd";
    char dos[5] = "abcd";
    int orden = string_compare(uno, dos);

    assert(orden == 0);

    return 0;
}