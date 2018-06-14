#include <stdio.h>
/*3. Scrieți o funcție care rearanjează elementele unui tablou
unidimensional cu n componente întregi astfel încât toate valorile
nule să se afle la sfârșitul tabloului. Ordinea în cadrul secvenţei
de elemente nenule nu contează. Scrieţi un program care citeşte de
la tastatură două numere naturale n și k , apoi un şir (2<=k<=n<=100)
format din n numere întregi cu cel mult 4 cifre fiecare şi, folosind
apeluri utile ale funcției definite anterior, verifică dacă şirul conţine
cel puţin k valori nenule,  nu neapărat distincte. În caz afirmativ
programul afişează k dintre acestea, iar altfel mesajul NU EXISTA.

*/

int n,v[100];

int rearanjeaza()
{
    int aux,j,i;
    for (i=0;i<n;i++)
     if (v[i] == 0)
        for (j=n-1;j>=i+1;j--)
           if (v[j] != 0)
             {
              aux=v[i];
              v[i]=v[j];
              v[j]=aux;
             }
}

int main()
{
    int i,k;
    printf("Citeste n:");
    scanf("%d",&n);
    printf("Citeste k:");
    scanf("%d",&k);
    printf("Citeste sir:\n");
    for (i=0;i<n;i++)
    {
        printf("Citeste v[%d]:",i);
        scanf("%d",&v[i]);
    }
    rearanjeaza();

    if (v[k-1]!=0)
        printf("Exista cel putin %d elemente nenule.\n",k);
    else
        printf("Nu exista  cel putin %d elemente nenule.\n",k);

    for (i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }

    return 0;
}
