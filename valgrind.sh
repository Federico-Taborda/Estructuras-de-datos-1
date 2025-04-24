#!/bin/bash

valgrind --tool=memcheck --leak-check=full --show-reachable=yes --track-origins=yes -v ./ejecutable