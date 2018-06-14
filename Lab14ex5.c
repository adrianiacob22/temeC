#include <stdio.h>
/*5. Scrieți un program care calculează suma totală cheltuită
la cumpărături, pe baza unui șir de forma următoare:
“Astăzi am cumpărat 5 kg de mere cu 2.20 RON kilogramul
și 2 litri de lapte cu 4.30 RON litrul.”
*/

int main()
{
    int i,n;
    double suma,v[100];
    printf("Citeste numarul de articole:");
    scanf("%d",&n);

    printf("Citeste articolele:\n");
    for (i=0;i<n*2;i+=2)
    {
        printf("Citeste cantitate pentru articolul %d:",i/2+1);
        scanf("%lf",&v[i]);
        printf("Citeste pret pentru articolul %d:",i/2+1);
        scanf("%lf",&v[i+1]);
        suma+=v[i]*v[i+1];
    }
        printf("Suma este: %lf ",suma);
    return 0;
}
