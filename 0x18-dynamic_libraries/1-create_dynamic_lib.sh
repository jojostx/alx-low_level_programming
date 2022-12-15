#!/bin/sh
gcc -c -fPIC *.c

gcc -shared -Wl,-soname,liball.so -o liball.so *.o
