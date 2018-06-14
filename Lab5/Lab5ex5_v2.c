#include <stdio.h>
#include <limits.h>
/*5. Se citește un tablou unidimensional format din n numere întregi.
Să se rearanjeze elementele sale folosind un număr minim de
interschimbări, astfel încât valorile pare să se afle înaintea celor impare.
Ordinea relativă a valorilor cu aceeași paritate nu contează.
*/
int n,v[100];

int retur_impar_poz_min()
{
    int i;
    for (i=0;i<n;i++)
        if (v[i]%2 != 0) return i;
}

int main()
{
    int i,poz_impar_min,aux;
    printf("Introdu numarul de elemente: ");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Introdu elementul %d:" ,i+1);
        scanf("%d",&v[i]);
    }
    poz_impar_min=retur_impar_poz_min();

    for (i=0;i<n;i++)
    {
        if ((v[i] % 2 == 0) && (i > poz_impar_min))
          {
            aux=v[i];
            v[i]=v[poz_impar_min];
            v[poz_impar_min]=aux;
            poz_impar_min=retur_impar_poz_min();
          }
    }

    for (i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }

    return 0;
}

