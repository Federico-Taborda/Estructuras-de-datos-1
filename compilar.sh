#!/bin/bash

# Ejecutar el script
# bash compilar.sh numero_modulo ejercicio_a_compilar 
# Ej:
# bash compilar.sh E1 Ejercicio_1.c 
# bash compilar.sh A1 Ejercicio_1.c 

compilar() {
    gcc -gstabs -Wall -Wextra -o ejecutable ./'Modulo-'$1/$2 -lm
    ./ejecutable
}

if [ $# -eq 1 ]; then
    echo Debe introducir un numero de modulo y ejercicio
elif [ $# -eq 2 ]; then
    compilar $1 $2
else 
    echo El modulo o el ejercicio ingresado no existe
fi
