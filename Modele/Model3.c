#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*Fisierul exemplu.txt contine pe prima linie un cuvant iar pe urmatoarele linii un text
in care cuvintele sunt despartite prin semne de punctuatie
Sa se scrie in fisierul cuvinte.txt toate cuvintele din textul dat care au aceeasi
lungime cu cuvantul de pe prima linie*/

void main()
{
    int i,n,next,lungime,gasit;
    char a[999], m[100];
    FILE *fisier,*out;
    fisier = fopen("exemplu.txt", "r");
    out = fopen("exemplu.out","w");
    fscanf(fisier, "%s", &m);
    n=strlen(m);
    printf("Citesc un cuvant format din %d litere \n", n);
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
