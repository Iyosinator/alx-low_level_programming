#!/bin/bash

# Compile all .c files into object files with position-independent code (-fPIC)
for file in *.c; do
    gcc -c -fPIC $file
done

# Create the dynamic library from the object files
gcc -shared -o liball.so *.o

# Remove the object files (optional)
rm *.o
