#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*3. Scrieți un program care citește de la tastatură un tablou
unidimensional format din numere reale și construiește un tablou
de numere reale inserând între oricare două valori aflate pe
poziții consecutive în tabloul inițial media lor aritmetică.
Ambele tablouri vor fi alocate dinamic!
*/

int main(){
    int i,j,n,pozitie;
    double media,suma,*v1,*v2;
    printf("Citeste numarul:");
    scanf("%d",&n);

    v1= (double*) calloc (n,sizeof(double));
    v2= (double*) calloc (2*n,sizeof(double));


    printf("Citeste elementele din tabloul initial:\n");
    for (i=0;i<n;i++)
    {
    printf("Citeste elementul v1[%d]: ",i);
    scanf("%lf",&v1[i]);
    }

    j=0;

    for (i=0;i<n-1;i++)
        {
            media=(v1[i]+v1[i+1])/2;

            v2[j]=v1[i];
            v2[j+1]=media;
            j=j+2;

        }

    v2[j]=v1[n-1];

    printf("Rezulta tabloul: \n");
    for (i=0;i<2*n-1;i++)
        printf("%lf ", v2[i]);

    return 0;
}




