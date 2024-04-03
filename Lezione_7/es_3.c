/**
 * Scrivere un programma che, date due stringhe s1 e s2 con
 * strlen(s1)>5 e strlen(s2)>5, copi i primi 5 caratteri di s2 in s1. Usare la
 * funzione strncpy
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
    // Check for args
    if (argc != 3) {
        printf("Two str args required");
        return 1;
    }

    // Check for right str length
    if (strlen(argv[1]) <= 5 || strlen(argv[2]) <= 5) {
        printf("Both args need to have len > 5");
        return 1;
    }

    // Copy 5 bytes to s2
    strncpy(argv[2], argv[1], 5);
    printf("%s", argv[2]);
    return 0;
}