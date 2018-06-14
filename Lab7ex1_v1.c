#include <stdio.h>
#include <limits.h>
#include <math.h>
/*1. a.Scrieti o functie care verifica daca un numar este prim sau nu
b.Fie n numar natural >=3, sa se determine cel mai mic numar prim mai mare decat numarul prim n */
int n;
int check_prim()
{
    int i,prim;
    for (i=2;i<=n/2;i++)
        if(n%i==0) return 0;
    return 1;
}

int main()

{
    int prim,i;
    printf("Introdu un numar: ");
    scanf("%d", &n);
    //prim=check_prim();
    if (check_prim() == 0)
        printf("%d nu este numar prim \n",n);
    n++;
        while (check_prim() == 0)
        n++;
        printf("Urmatorul numar prim este %d",n);
    return 0;
}
