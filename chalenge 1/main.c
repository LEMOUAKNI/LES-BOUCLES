#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    printf("entrer un nombre :");
    scanf("%d",&n);
    i = 1;
    while(i <=10){
    printf("%d*%d=%d\n",n,i,n*i);
    i++;
    }
    return 0;
}
