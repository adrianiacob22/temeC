#include <stdio.h>
#include <stdlib.h>

/*1. Scrieți un program care citește de la tastatură un tablou unidimensional
format din  numere întregi și construiește un tablou format din pozițiile
pe care apare valoarea maximă din tabloul dat.
Ambele tablouri vor fi alocate dinamic!
*/

int main()
{
    int max,i,j,n, *v, *w;
    printf("Citeste n => numarul elementelor din tablou:");
    scanf("%d",&n);
    v= (int*) calloc (n,sizeof(int));
    w= (int*) calloc (1,sizeof(int));
    for (i=0;i<n;i++)
        scanf("%d",&v[i]);

    max=v[0];

    for (i=0;i<n;i++)
       if (v[i] > max) max=v[i];

    j=0;

    for (i=0;i<n;i++)
        if (v[i] == max)
        {
        w[j++] = i;
        w = realloc(w, (j+1)*sizeof(int));
        }

    for (i=0;i<j;i++)
        printf("%d ",w[i]);

    free(v);
    free(w);
    return 0;
}
