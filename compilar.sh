#!/bin/bash

# Ejecutar el script
# bash compilar.sh numero_modulo ejercicio_a_compilar 
# Ej:
# bash compilar.sh E1 1
# bash compilar.sh E1 1_a
# bash compilar.sh A1 1
# bash compilar.sh A1 2

gcc ./'Modulo-'$1/'Ejercicio_'$2'.c'

compilar() {
    gcc -gstabs -Wall -Wextra -o ejecutable ./'Modulo-'$1/'Ejercicio_'$2'.c' -lm
    ./ejecutable
}

if [ $# -eq 1 ]; then
    echo Debe introducir un numero de modulo y ejercicio
elif [ $# -eq 2 ]; then
    compilar $1 $2
else 
    echo El modulo o el ejercicio ingresado no existe
fi
