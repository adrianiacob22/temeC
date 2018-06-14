#include <stdio.h>
#include <limits.h>
/*1. Se citește un număr natural n>=3 . Folosind o funcție care verifică
dacă un număr este prim sau nu, scrieți un program care afișează
cel mai mic număr prim strict mai mare decât .
Fara functie*/

int main()
{
    int n,i,j;
    printf("Citeste numarul:");
    scanf("%d",&n);
    if (n < 3)
    {
        printf("Numarul introdus trebuie sa fie cel putin egal cu 3");
        scanf("%d",&n);
    }
    for(i=n+1;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }

        if(j==i)
        {
            printf("Urmatorul numar prim este :%d",i);
            break;
        }
    }

 }
