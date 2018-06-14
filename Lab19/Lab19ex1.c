#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*1. Fișierul cuvinte.txt conține pe prima linie un număr natural nenul n,
iar pe următoarele linii un text în care cuvintele sunt despărțite prin
spații și semnele de punctuație uzuale. Scrieți un program care să scrie
în fișierul text cuvinte.out toate cuvintele de lungime n din fișierul cuvinte.txt
sau mesajul "Imposibil !" dacă în fișierul de intrare nu există nici un cuvânt
cu proprietatea cerută.*/
void main()
{
    int i,n,next,lungime,gasit;
    char a[999];
    FILE *fisier,*out;
    fisier = fopen("cuvinte.txt", "r");
    out = fopen("cuvinte.out","w");
    fscanf(fisier, "%d", &n);
    printf("Citesc %d \n", n);
    gasit = 0;
    while(fscanf(fisier, "%s", a)!=EOF){
        //printf("%s",a);
        lungime=strlen(a);
        if(lungime==n){
        fprintf(out,"%s \n",a);
        gasit=1;
        }
    }
    if(gasit ==0)
        fprintf(out,"Imposibil! \n");

    fclose(fisier);
    fclose(out);
}


