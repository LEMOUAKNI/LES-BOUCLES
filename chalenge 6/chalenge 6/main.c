#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("Entrer un nombre n :");
    scanf("%d",&n);
    if (n <= 0) {
    printf("Entrer un nombre entier positif.\n");
    return 0;
    }
    printf("Les %d premiers nombres pair sont : ", n);
    for (int i = 1; i <= n; i++) {
    printf("%d", 2 * i );
    if (i < n ) {
    printf(", ");
    }
    }
    printf("\n");
    return 0;
}






