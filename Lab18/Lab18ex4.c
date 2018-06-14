#include <stdio.h>
#include <math.h>

/*4. Definiți o structură numită Punct2D care să permită memorarea
coordonatelor unui punct din plan și scrieți o funcție care calculează
distanța dintre două puncte din plan.
Fișierul poligon.txt conține pe prima linie un număr natural nenul n și
pe următoarele n linii câte două numere reale, fiecare reprezentând
coordonatele unui vârf al unui poligon (punctele sunt date în sens trigonometric).
Scrieți un program care să afișeze perimetrul și aria poligonului respectiv.
*/


double distanta(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}


int main()
{
    struct Punct2D {
        double x,y;
    };

    int i,n,next;

    double perimetru=0;

    struct Punct2D puncte[100];

    FILE *fisier;
    fisier = fopen("poligon.txt", "r");

    fscanf(fisier, "%d", &n);

    for (i=0;i<n;i++)
    {
      fscanf(fisier, "%lf", &puncte[i].x);
      fscanf(fisier, "%lf", &puncte[i].y);
    }


    for (i=0;i<n;i++)
    {
     if (i==n-1)
        next=0;
     else
        next=i+1;

     perimetru+=distanta(puncte[i].x,puncte[i].y,puncte[next].x,puncte[next].y);
    }

    printf("Perimetrul poligonului este: %lf \n",perimetru);


    printf("Aria poligonului este : %lf \n",distanta(puncte[0].x,puncte[0].y,puncte[1].x,puncte[1].y)*distanta(puncte[1].x,puncte[1].y,puncte[2].x,puncte[2].y));

    return 0;
}
