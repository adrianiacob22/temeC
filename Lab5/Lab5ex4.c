#include <stdio.h>
#include <limits.h>
/*4. Se citește un tablou unidimensional format din  numere întregi.
Să se afișeze toate elementele sale dominante. Un element al unui tablou
unidimensional se numește element dominant dacă este strict mai mare decât
toate elementele aflate în dreapta sa.*/

int main()
{
    int n,i,v[100],max;
    printf("Numarul de elemente:");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
        printf("Citeste elementul v[%d]:",i);
        scanf("%d",&v[i]);
    }
    max=INT_MIN;
    for (i=n-1;i>=0;i--)
        if (v[i]>max)
          { max=v[i];
            printf("%d\n",v[i]);
          }

    return 0;
}
