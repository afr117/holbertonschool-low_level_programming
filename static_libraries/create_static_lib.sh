#!/bin/bash

# Compile each .c file to create the corresponding .o file
for file in *.c; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library liball.a from the .o files
ar rcs liball.a *.o

# Clean up by removing the .o files
rm *.o
