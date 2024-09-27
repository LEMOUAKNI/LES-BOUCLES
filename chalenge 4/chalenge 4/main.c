#include <stdio.h>

int main() {
    int n;
    printf("Entrez un nombre entier n: ");
    scanf("%d", &n);
    if (n <= 0) {
    printf("Veuillez entrer un nombre entier positif.\n");
    return 1;
    }
    printf("Les %d premiers nombres impairs sont : ", n);
    for (int i = 0; i < n; i++) {
    printf("%d", 2 * i + 1);
    if (i < n - 1) {
    printf(", ");
    }
    }
    printf("\n");
    return 0;
}


