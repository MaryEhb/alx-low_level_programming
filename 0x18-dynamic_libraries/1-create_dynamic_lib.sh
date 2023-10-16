#!/bin/bash
gcc -c -FPIC *.c
gcc -shared -o libliball.so 
