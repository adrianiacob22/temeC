#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*a)Scrieti o functie care extrage intr-un tablou alocat dinamic toate valorile
mai mari decat 0 dintr-un tablou dat si numarul lor.
b) Fie functiile:
    void afisare(int *v, int n);
    void semn(int *v, int n);
    void citire(int *v, int n);
Scrieti un program care extrage toate valorile strict negative dintr-un tablou si apoi le afiseaza
Pasi:
 - se aplica functia semn pe tablou si se inverseaza semnele
 - se aplica functia de la punctul a
 - se aplica din nou semn pe tabloul obtinut
 - se aplica functia afisare

 */

void afisare(int *v, int n)
{
    int i;
    for (i=0;i<n;i++)
     {
        printf("Elementul[%d]: %d\n",i,v[i]);
     }
}

void semn(int *v, int n)
{
    int i;
   for (i=0;i<n;i++)
     {
      v[i]=-v[i];
     }
}

void citire(int *v, int n)
{
    int i;
     for (i=0;i<n;i++)
     {
        printf("Citeste elementul v[%d]:",i);
        scanf("%d",&v[i]);
     }
}

 int extragere_pozitiv(int *v, int *w, int n)
 {
     int i;
     int j=0;
     for (i=0;i<n;i++)
     {
         if (v[i]>0)
         {
            w[j++]=v[i];
         }
     }
     return j;
 }

 int main()
 {
     int *v, *w, *x, m, n, i, j;
     printf("Numarul de elemente:");
     scanf("%d",&n);

     v=(int *) calloc(n,sizeof(int));
     w=(int *) calloc(n, sizeof(int));
     x=(int *) calloc(n, sizeof(int));

     citire(v,n);

     m=extragere_pozitiv(v,w,n);

     afisare(w,m);

     /* punctul b */
     printf("Punctul b.\n");
     semn(v,n);
     m=extragere_pozitiv(v,x,n);
     semn(x,m);
     afisare(x,m);

     return 0;
 }
