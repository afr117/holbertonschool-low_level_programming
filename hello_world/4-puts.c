#!/bin/bash
echo '#include <stdio.h>' > main.c && echo 'int main(void) { puts("Programming is like building a multilingual puzzle,"); return 0; }' >> main.c && gcc main.c -o cisfun
