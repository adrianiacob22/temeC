#include <stdio.h>
#include <limits.h>

int main()
{
    int n,i,v[3],max;
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
