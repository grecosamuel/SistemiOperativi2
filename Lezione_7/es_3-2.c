/**
 * Scrivere un programma che date 2 stringhe s1 e s2 concateni i primi
 * n caratteri di s1 ad s2. Usare la funzione strncat
*/
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
    // Check for args
    if (argc != 3) {
        printf("Two str args required");
        return 1;
    }

    int N = 2;

    // Concat N char to s2
    strncat(argv[2], argv[1], N);
    printf("%s", argv[2]);
    return 0;
}