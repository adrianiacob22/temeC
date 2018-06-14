#include <stdio.h>
#include <limits.h>
/*5. Se citește un tablou unidimensional format din n numere întregi.
Să se rearanjeze elementele sale folosind un număr minim de
interschimbări, astfel încât valorile pare să se afle înaintea celor impare.
Ordinea relativă a valorilor cu aceeași paritate nu contează.
*/

int main()
{
    int i,j,aux,n,v[100];;
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&v[i]);

    for (i=0;i<n;i++)
     if (v[i]%2 != 0)
        for (j=n-1;j>=i+1;j--)
           if (v[j]%2 == 0)
             {
              aux=v[i];
              v[i]=v[j];
              v[j]=aux;
             }

    for (i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }

    return 0;
}
