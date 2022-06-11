#include <stdio.h>
#include <stdlib.h>

float tddiagMean(int n, int m, float **tab);

float** arrtdCreate(int n, int m)
{
    float** tab = (float**)malloc(sizeof(float*) * n);
    for(int i = 0; i < n ; i++)
    {
        *(tab + i) = (float*)malloc(sizeof(float) * m);
    }
    return tab;
}

int main() {
    float** tablica = arrtdCreate(2,2);
    *(*(tablica+0)+0) = 4.56;
    *(*(tablica+0)+1) = 2.97;
    *(*(tablica+1)+0) = 3.01;
    *(*(tablica+1)+1) = 0.58;
    printf("Srednia na przekatnej: %lf\n", tddiagMean(2,2, tablica));
    return 0;
}

float tddiagMean(int n, int m, float **tab)
{
    float sum = 0;
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if (i == j)
            {
                sum+=tab[i][j];
                counter++;
            }

        }
    }
    return (sum/counter);
}
