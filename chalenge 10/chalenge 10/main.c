#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int somme;
    somme = 0;
    printf("saisir un nombre :");
    scanf("%d",&n);
    if(n<0)
    {
    printf("le nombre que vous avez saisi est un nombre negative");
    return 0;
    }
    while(n >=1){
    somme += n;
    n--;
    }
    printf("Total de la somme et : %d",somme);
    return 0;
}
