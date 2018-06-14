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
    prim=check_prim();
    //printf("Am obtinut valoarea %d \n", prim);
        if (prim!= 0)
        {
            printf("Numarul %d este prim \n", n);
            for (n=n+1;n>0;n++)
            {
                prim=check_prim();
                if (prim!= 0)
                    {printf ("Urmatorul numar prim este %d",n);
                    return 0;
                    }
            }
        }
        else
        printf("Numarul %d nu este prim", n);
    return 0;
}
